%{
note

	description:

		"Parsers for lexical analyzer generators such as 'gelex'"

	library: "Gobo Eiffel Lexical Library"
	copyright: "Copyright (c) 1999-2019, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

class LX_LEX_PARSER

inherit

	LX_LEX_PARSER_SKELETON
		redefine
			last_integer_value,
			last_string_value,
			last_lx_symbol_class_value,
			last_lx_unicode_character_class_value
		end

	LX_LEX_SCANNER
		rename
			make as make_lex_scanner,
			make_from_description as make_lex_scanner_from_description,
			reset as reset_lex_scanner
		redefine
			last_integer_value,
			last_string_value,
			last_lx_symbol_class_value,
			last_lx_unicode_character_class_value
		end

create

	make, make_from_description

%}

%token ENDSECT EOF_OP PIPED EMPTY
%token UNICODE_MODE_START BYTE_MODE_START

%token <STRING> EIF_CODE NAME CCL_BRACKET UCCL_BRACKET
%token <INTEGER> CHAR BCHAR UCHAR NUMBER
%token <LX_SYMBOL_CLASS> CCL_OP
%token <LX_UNICODE_CHARACTER_CLASS> UCCL_OP
%left CCL_PLUS CCL_MINUS

%type <INTEGER> Start_condition Less_than
%type <INTEGER> CCl_char UCCl_char
%type <LX_NFA> Rule Regular_expression Regular_expression_no_CCl Regular_expression2
%type <LX_NFA> Union Series Series_no_CCl Series_two_or_more
%type <LX_NFA> Series_singleton Series_singleton_no_CCl
%type <LX_NFA> Singleton Singleton_no_CCL Singleton_CCL String
%type <LX_SYMBOL_CLASS> CCl CCl_single Full_CCl CCl_content 
%type <LX_SYMBOL_CLASS> CCl_expression CCl_parenthesized_expression CCl_left_operand CCl_right_operand
%type <LX_UNICODE_CHARACTER_CLASS> UCCl Full_UCCl

%start Scanner_description
%expect 13

%%

Scanner_description: Section1 Section2 Init_rule Section3
		{
			process_default_rule
			if description.equiv_classes /= Void then
				build_equiv_classes
			end
			check_options
		}
	;

Section1: ENDSECT
		{
			override_options
			if description.equiv_classes_used then
				description.create_equiv_classes
			end
			unicode_mode.force (description.unicode_mode)
		}
	;

Section2: -- Empty
	| Section2 Start_condition Init_rule Pattern Action
		{
			start_condition_stack.keep_first ($2)
		}
	| Section2 Start_condition '{' Section2 '}'
		{
			start_condition_stack.keep_first ($2)
		}
	;

Action: -- Empty
	| EIF_CODE
		{
			set_action ($1)
		}
	| PIPED
	| EMPTY
		{
			set_action ("")
		}
	;

Init_rule: -- Empty
		{
				-- Initialize for a parse of one rule.
			in_trail_context := False
			create rule.make_default (description.rules.count + 1)
		}
	;

Start_condition: -- Empty
		{
			$$ := start_condition_stack.count
		}
	| Less_than '*' '>'
		{
			$$ := $1
			start_condition_stack.append_start_conditions (description.start_conditions)
		}
	| Less_than Name_list '>'
		{ $$ := $1 }
	;

Less_than: '<'
		{
			$$ := start_condition_stack.count
		}
	;

Name_list: NAME
		{
			push_start_condition ($1, start_condition_stack)
		}
	| Name_list ',' NAME
		{
			push_start_condition ($3, start_condition_stack)
		}
	| error
		{
			report_bad_start_condition_list_error
		}
	;

Pattern: '^' Rule
		{
			has_bol_context := True
			process_rule ($2)
		}
	| Rule
		{
			has_bol_context := False
			process_rule ($1)
		}
	| EOF_OP
		{
			process_eof_rule
		}
	| error
		{
			report_unrecognized_rule_error
		}
	;

Rule: Regular_expression
		{
			$$ := $1
			has_trail_context := False
			head_count := regexp_count
			head_line := regexp_line
			head_column := regexp_column
			trail_count := 0
		}
	| Regular_expression '$'
		{
			has_trail_context := True
			head_count := regexp_count
			head_line := regexp_line
			head_column := regexp_column
			trail_count := 1
			$$ := append_eol_to_regexp ($1)
		}
	| Regular_expression2 Regular_expression
		{
			has_trail_context := True
			trail_count := regexp_count
			$$ := append_trail_context_to_regexp ($2, $1)
		}
	| Regular_expression2 Regular_expression2
		{
			report_trailing_context_used_twice_error
			has_trail_context := True
			trail_count := regexp_count
			$$ := new_epsilon_nfa
		}
	| Regular_expression2 Regular_expression '$'
		{
			report_trailing_context_used_twice_error
			has_trail_context := True
			trail_count := regexp_count
			$$ := new_epsilon_nfa
		}
	;

Regular_expression: Series
		{
			$$ := $1
			regexp_count := series_count
			regexp_line := series_line
			regexp_column := series_column
		}
	| Union
		{ $$ := $1 }
	;

Regular_expression_no_CCl: Series_no_CCl
		{
			$$ := $1
			regexp_count := series_count
			regexp_line := series_line
			regexp_column := series_column
		}
	| Union
		{ $$ := $1 }
	;
	
Regular_expression2: Regular_expression '/'
		{
			$$ := $1
				-- This rule is written separately so the reduction
				-- will occur before the trailing series is parsed.
			head_count := regexp_count
			head_line := regexp_line
			head_column := regexp_column
			in_trail_context := True
		}
	;

Union: Regular_expression '|'
		{
			$$ := $1
			old_regexp_lines.force (regexp_line)
			old_regexp_columns.force (regexp_column)
			old_regexp_counts.force (regexp_count)
		}
	  Series
		{
			regexp_line := old_regexp_lines.item
			old_regexp_lines.remove
			regexp_column := old_regexp_columns.item
			old_regexp_columns.remove
			regexp_count := old_regexp_counts.item
			old_regexp_counts.remove
			$$ := $1
			$$.build_union ($4)
			process_regexp_or_series
		}
	;
	
Series: Series_singleton
		{
			old_singleton_lines.remove
			old_singleton_columns.remove
			old_singleton_counts.remove
			$$ := $1
			series_count := singleton_count
			series_line := singleton_line
			series_column := singleton_column
		}
	| Series_two_or_more
		{ $$ := $1 }
	;

Series_no_CCl: Series_singleton_no_CCl
		{
			old_singleton_lines.remove
			old_singleton_columns.remove
			old_singleton_counts.remove
			$$ := $1
			series_count := singleton_count
			series_line := singleton_line
			series_column := singleton_column
		}
	| Series_two_or_more
		{ $$ := $1 }
	;	

Series_two_or_more: Series_singleton Series
		{
			singleton_line := old_singleton_lines.item
			old_singleton_lines.remove
			singleton_column := old_singleton_columns.item
			old_singleton_columns.remove
			singleton_count := old_singleton_counts.item
			old_singleton_counts.remove
			$$ := $1
			$$.build_concatenation ($2)
			process_singleton_series
		}
	;

Series_singleton: Singleton
		{
			old_singleton_lines.force (singleton_line)
			old_singleton_columns.force (singleton_column)
			old_singleton_counts.force (singleton_count)
			$$ := $1
		}
	;

Series_singleton_no_CCl: Singleton_no_CCl
		{
			old_singleton_lines.force (singleton_line)
			old_singleton_columns.force (singleton_column)
			old_singleton_counts.force (singleton_count)
			$$ := $1
		}
	;

Singleton: Singleton_no_CCl
		{ $$ := $1 }
	| Singleton_CCl
		{ $$ := $1 }
	;

Singleton_no_CCl: CHAR
		{
			if unicode_mode.item and $1 > {CHARACTER_8}.max_ascii_value then
				$$ := new_epsilon_nfa
				process_singleton_empty_string
				buffer.wipe_out
				{UC_UTF8_ROUTINES}.append_code_to_utf8 (buffer, $1)
				from i_ := 1 until i_ > buffer.count loop
					$$ := append_character_to_string (buffer.item_code (i_), $$)
					process_singleton_string (buffer.item_code (i_))
					i_ := i_ + 1
				end
			else
				$$ := new_nfa_from_character ($1)
				process_singleton_char ($1)
			end
		}
	| BCHAR
		{
			$$ := new_nfa_from_character ($1)
			process_singleton_char ($1)
		}
	| UCHAR
		{
			if $1 <= {CHARACTER_8}.max_ascii_value then
				$$ := new_nfa_from_character ($1)
				process_singleton_char ($1)
			else
				$$ := new_epsilon_nfa
				process_singleton_empty_string
				buffer.wipe_out
				{UC_UTF8_ROUTINES}.append_code_to_utf8 (buffer, $1)
				from i_ := 1 until i_ > buffer.count loop
					$$ := append_character_to_string (buffer.item_code (i_), $$)
					process_singleton_string (buffer.item_code (i_))
					i_ := i_ + 1
				end
			end
		}
	| Singleton '*'
		{
			$$ := $1
			$$.build_closure
			process_singleton_star
		}
	| Singleton '+'
		{
			$$ := $1
			$$.build_positive_closure
			process_singleton_plus
		}
	| Singleton '?'
		{
			$$ := $1
			$$.build_optional
			process_singleton_optional
		}
	| Singleton '{' NUMBER ',' NUMBER '}'
		{
			$$ := new_bounded_iteration_nfa ($1, $3, $5)
			process_singleton_bounded_iteration ($3, $5)
		}
	| Singleton '{' NUMBER ',' '}'
		{
			$$ := new_unbounded_iteration_nfa ($1, $3)
			process_singleton_unbounded_iteration ($3)
		}
	| Singleton '{' NUMBER '}'
		{
			$$ := new_iteration_nfa ($1, $3)
			process_singleton_fixed_iteration ($3)
		}
	| '.'
		{
			if unicode_mode.item then
				$$ := new_nfa_from_unicode_character_class (dot_unicode_character_class)
			else
				$$ := new_symbol_class_nfa (dot_character_class)
			end
			process_singleton_dot
		}
	| UCCL_OP
		{
			$$ := new_nfa_from_unicode_character_class ($1)
			process_singleton_unicode_character_class ($1)
		}
	| Full_UCCl
		{
			$$ := new_nfa_from_unicode_character_class ($1)
			process_singleton_unicode_character_class ($1)
		}
	| '"' String '"'
		{
			$$ := $2
		}
	| '(' Regular_expression_no_CCl ')'
		{
			$$ := $2
			singleton_count := regexp_count
			singleton_line := regexp_line
			singleton_column := regexp_column
		}
	| Start_unicode_mode Regular_expression ')'
		{
			$$ := $2
			singleton_count := regexp_count
			singleton_line := regexp_line
			singleton_column := regexp_column
			unicode_mode.remove
		}
	| Start_byte_mode Regular_expression ')'
		{
			$$ := $2
			singleton_count := regexp_count
			singleton_line := regexp_line
			singleton_column := regexp_column
			unicode_mode.remove
		}
	;

Singleton_CCl: CCl
		{
			$$ := new_symbol_class_nfa ($1)
			process_singleton_symbol_class ($1)
		}
	;

Start_unicode_mode: UNICODE_MODE_START
		{
			unicode_mode.force (True)
		}
	;

Start_byte_mode: BYTE_MODE_START
		{
			unicode_mode.force (False)
		}
	;

CCl: CCl_single
		{ $$ := $1 }
	| CCl_expression
		{ $$ := $1 }
	| CCl_parenthesized_expression
		{ $$ := $1 }
	;

CCl_single: CCL_OP
		{ $$ := $1 }
	| Full_CCl
		{ $$ := $1 }
	| '(' CCl_single ')'
		{ $$ := $2 }
	;
	
Full_CCl: CCL_BRACKET CCl_content ']'
		{
			$$ := $2
			character_classes.search ($$)
			if character_classes.found then
				$$ := character_classes.found_item
			else
				character_classes.force_new ($$)
			end
			character_classes_by_name.force ($$, $1)
		}
	| CCL_BRACKET '^' CCl_content ']'
		{
			$$ := $3
			$$.set_negated (True)
			character_classes.search ($$)
			if character_classes.found then
				$$ := character_classes.found_item
			else
				character_classes.force_new ($$)
			end
			character_classes_by_name.force ($$, $1)
		}
	;
	
CCl_content: CCl_char
		{
			$$ := append_character_to_character_class ($1, new_character_class)
		}
	| CCl_content CCl_char
		{
			$$ := append_character_to_character_class ($2, $1)
		}
	| CCl_char '-' CCl_char
		{
			$$ := append_character_set_to_character_class ($1, $3, new_character_class)
		}
	| CCl_content CCl_char '-' CCl_char
		{
			$$ := append_character_set_to_character_class ($2, $4, $1)
		}
	;

CCl_char: CHAR
		{
			$$ := $1
		}
	| BCHAR
		{
			$$ := $1
		}
	;

CCl_expression: CCl_left_operand CCL_PLUS CCl_right_operand
		{
			$$ := $1
			$$.add_symbol_class ($3)
		}
	| CCl_left_operand CCL_MINUS CCl_right_operand
		{
			$$ := $1
			$$.remove_symbol_class ($3)
		}
	;

CCl_parenthesized_expression: '(' CCl_expression ')'
		{ $$ := $2 }
	| '(' CCl_parenthesized_expression ')'
		{ $$ := $2 }
	;

CCl_left_operand: CCl_single
		{ $$ := $1.twin }
	| CCl_expression
		{ $$ := $1 }
	| CCl_parenthesized_expression
		{ $$ := $1 }
	;

CCl_right_operand: CCl_single
		{ $$ := $1 }
	| CCl_parenthesized_expression
		{ $$ := $1 }
	;

Full_UCCl: UCCL_BRACKET UCCl ']'
		{
			$$ := $2
			unicode_character_classes.force ($$, $1)
		}
	| UCCL_BRACKET '^' UCCl ']'
		{
			$$ := $3
			$$.set_negated (True)
			unicode_character_classes.force ($$, $1)
		}
	;

UCCl: UCCl_char
		{
			$$ := append_character_to_unicode_character_class ($1, new_unicode_character_class)
		}
	| UCCl UCCl_char
		{
			$$ := append_character_to_unicode_character_class ($2, $1)
		}
	| UCCl_char '-' UCCl_char
		{
			$$ := append_character_set_to_unicode_character_class ($1, $3, new_unicode_character_class)
		}
	| UCCl UCCl_char '-' UCCl_char
		{
			$$ := append_character_set_to_unicode_character_class ($2, $4, $1)
		}
	;

UCCl_char: CHAR
		{
			$$ := $1
		}
	| UCHAR
		{
			$$ := $1
		}
	;

String: -- Empty
		{
			$$ := new_epsilon_nfa
			process_singleton_empty_string
		}
	| String CHAR
		{
			if unicode_mode.item and $2 > {CHARACTER_8}.max_ascii_value then
				$$ := $1
				buffer.wipe_out
				{UC_UTF8_ROUTINES}.append_code_to_utf8 (buffer, $2)
				from i_ := 1 until i_ > buffer.count loop
					$$ := append_character_to_string (buffer.item_code (i_), $$)
					process_singleton_string (buffer.item_code (i_))
					i_ := i_ + 1
				end
			else
				$$ := append_character_to_string ($2, $1)
				process_singleton_string ($2)
			end
		}
	| String BCHAR
		{
			$$ := append_character_to_string ($2, $1)
			process_singleton_string ($2)
		}
	| String UCHAR
		{
			if $2 <= {CHARACTER_8}.max_ascii_value then
				$$ := append_character_to_string ($2, $1)
				process_singleton_string ($2)
			else
				$$ := $1
				buffer.wipe_out
				{UC_UTF8_ROUTINES}.append_code_to_utf8 (buffer, $2)
				from i_ := 1 until i_ > buffer.count loop
					$$ := append_character_to_string (buffer.item_code (i_), $$)
					process_singleton_string (buffer.item_code (i_))
					i_ := i_ + 1
				end
			end
		}
	;

Section3: -- Empty
	| ENDSECT
	| ENDSECT EIF_CODE
		{
			description.set_eiffel_code ($2)
		}
	;

%%

feature {NONE} -- Access

	last_integer_value: INTEGER
			-- Last semantic value of type INTEGER

	last_string_value: STRING
			-- Last semantic value of type STRING

	last_lx_symbol_class_value: LX_SYMBOL_CLASS
			-- Last semantic value of type LX_SYMBOL_CLASS

	last_lx_unicode_character_class_value: LX_UNICODE_CHARACTER_CLASS
			-- Last semantic value of type LX_UNICODE_CHARACTER_CLASS

end
