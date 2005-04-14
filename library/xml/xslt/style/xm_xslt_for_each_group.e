indexing

	description:

		"xsl:for-each-group element nodes"

	library: "Gobo Eiffel XSLT Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XSLT_FOR_EACH_GROUP

inherit

	XM_XSLT_STYLE_ELEMENT
		redefine
			make_style_element, validate, may_contain_sequence_constructor, is_permitted_child
		end

	XM_XSLT_FOR_EACH_GROUP_CONSTANTS

	XM_XPATH_ROLE

creation {XM_XSLT_NODE_FACTORY}

	make_style_element

feature {NONE} -- Initialization
	
	make_style_element (an_error_listener: XM_XSLT_ERROR_LISTENER; a_document: XM_XPATH_TREE_DOCUMENT;  a_parent: XM_XPATH_TREE_COMPOSITE_NODE;
		an_attribute_collection: XM_XPATH_ATTRIBUTE_COLLECTION; a_namespace_list:  DS_ARRAYED_LIST [INTEGER];
		a_name_code: INTEGER; a_sequence_number: INTEGER) is
			-- Establish invariant.
		do
			is_instruction := True
			Precursor (an_error_listener, a_document, a_parent, an_attribute_collection, a_namespace_list, a_name_code, a_sequence_number)
		end

feature -- Status report

	may_contain_sequence_constructor: BOOLEAN is
			-- Is `Current' allowed to contain a sequence constructor?
		do
			Result := True
		end

	is_permitted_child (a_style_element: XM_XSLT_STYLE_ELEMENT): BOOLEAN is
			-- Is `a_style_element' a permitted child of `Current'?
		local
			a_sort: XM_XSLT_SORT
		do
			a_sort ?= a_style_element
			Result := a_sort /= Void
		end

feature -- Element change

	prepare_attributes is
			-- Set the attribute list for the element.
		local
			a_cursor: DS_ARRAYED_LIST_CURSOR [INTEGER]
			a_name_code: INTEGER
			an_expanded_name, a_select_attribute, a_group_by_attribute, a_group_adjacent_attribute,
			a_group_starting_with_attribute, a_group_ending_with_attribute, a_collation_attribute: STRING
		do
			from
				a_cursor := attribute_collection.name_code_cursor
				a_cursor.start
			variant
				attribute_collection.number_of_attributes + 1 - a_cursor.index				
			until
				a_cursor.after
			loop
				a_name_code := a_cursor.item
				an_expanded_name := shared_name_pool.expanded_name_from_name_code (a_name_code)
				if STRING_.same_string (an_expanded_name, Select_attribute) then
					a_select_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_select_attribute)
					STRING_.right_adjust (a_select_attribute)
				elseif STRING_.same_string (an_expanded_name, Group_by_attribute) then
					a_group_by_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_group_by_attribute)
					STRING_.right_adjust (a_group_by_attribute)
				elseif STRING_.same_string (an_expanded_name, Group_adjacent_attribute) then
					a_group_adjacent_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_group_adjacent_attribute)
					STRING_.right_adjust (a_group_adjacent_attribute		)
				elseif STRING_.same_string (an_expanded_name, Group_starting_with_attribute) then
					a_group_starting_with_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_group_starting_with_attribute)
					STRING_.right_adjust (a_group_starting_with_attribute	)
				elseif STRING_.same_string (an_expanded_name, Group_ending_with_attribute) then
					a_group_ending_with_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_group_ending_with_attribute)
					STRING_.right_adjust (a_group_ending_with_attribute		)
				elseif STRING_.same_string (an_expanded_name, Collation_attribute) then
					a_collation_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_collation_attribute)
					STRING_.right_adjust (a_collation_attribute	)
				else
					check_unknown_attribute (a_name_code)
				end
				a_cursor.forth
			end
			prepare_attributes_2 (a_select_attribute, a_group_by_attribute, a_group_starting_with_attribute,
										 a_group_adjacent_attribute,	a_group_ending_with_attribute, a_collation_attribute)
			attributes_prepared := True
		end

	validate is
			-- Check that the stylesheet element is valid.
		local
			a_role: XM_XPATH_ROLE_LOCATOR
			a_type_checker: XM_XPATH_TYPE_CHECKER
			an_atomic_sequence, a_node_sequence: XM_XPATH_SEQUENCE_TYPE
		do
			check_within_template
			check_sort_comes_first (False)
			type_check_expression ("select", select_expression)
			if select_expression.was_expression_replaced then
				select_expression := select_expression.replacement_expression
			end
			if group_by /= Void then
				type_check_expression ("group-by", group_by)
				if group_by.was_expression_replaced then
					group_by := group_by.replacement_expression
				end
				if not any_compile_errors then
					create a_type_checker
					create a_role.make (Instruction_role, "xsl:for-each-group/group-by", 1, Xpath_errors_uri, "XPTY0004")
					create an_atomic_sequence.make_atomic_sequence
					a_type_checker.static_type_check (static_context, group_by, an_atomic_sequence, False, a_role)
					if a_type_checker.is_static_type_check_error	then
						report_compile_error (a_type_checker.static_type_check_error)
					else
						group_by := a_type_checker.checked_expression
					end					
				end
			end
			if group_adjacent /= Void then
				type_check_expression ("group-by", group_adjacent)
				if group_adjacent.was_expression_replaced then
					group_adjacent := group_adjacent.replacement_expression
				end
				if not any_compile_errors then
					create a_type_checker
					create a_role.make (Instruction_role, "xsl:for-each-group/group-adjacent", 1, "", "XTTE1100")
					create an_atomic_sequence.make_single_atomic
					a_type_checker.static_type_check (static_context, group_adjacent, an_atomic_sequence, False, a_role)
					if a_type_checker.is_static_type_check_error	then
						report_compile_error (a_type_checker.static_type_check_error)
					else
						group_adjacent := a_type_checker.checked_expression
					end					
				end
			end
			if group_starting_with /= Void then
				type_check_pattern ("group-starting-with", group_starting_with)
			end
			if group_ending_with /= Void then
				type_check_pattern ("group-ending-with", group_ending_with)
			end
			if group_starting_with /= Void or else group_ending_with /= Void then
				create a_type_checker
				create a_role.make (Instruction_role, "xsl:for-each-group/select", 1, "", "XTTE1120")
				create a_node_sequence.make_node_sequence
				a_type_checker.static_type_check (static_context, select_expression, a_node_sequence, False, a_role)
				if a_type_checker.is_static_type_check_error	then
					report_compile_error (a_type_checker.static_type_check_error)
				end					
			end
			validated := True
		end

	compile (an_executable: XM_XSLT_EXECUTABLE) is
			-- Compile `Current' to an excutable instruction.
		local
			algorithm: INTEGER
			a_key, an_action: XM_XPATH_EXPRESSION
			-- TODO: a_key_pattern: XM_XSLT_PATTERN_EXPRESSION
			a_key_pattern: XM_XSLT_PATTERN
			is_pattern: BOOLEAN
		do
			if group_by /= Void then
				algorithm := Group_by_algorithm
				a_key := group_by
			elseif group_adjacent /= Void then
				algorithm := Group_adjacent_algorithm
				a_key := group_adjacent
			elseif group_starting_with /= Void then
				algorithm := Group_starting_with_algorithm
				-- TODO: create a_key_pattern.make (group_starting_with)
				a_key_pattern := group_starting_with
				is_pattern := True
			elseif group_ending_with /= Void then
				algorithm := Group_ending_with_algorithm
				-- TODO: create a_key_pattern.make (group_ending_with)
				a_key_pattern := group_ending_with
				is_pattern := True
			end
			compile_sequence_constructor (an_executable, new_axis_iterator (Child_axis), True)
			an_action := last_generated_expression
			if an_action = Void then create {XM_XPATH_EMPTY_SEQUENCE} an_action.make end
			if is_pattern then
				create {XM_XSLT_COMPILED_FOR_EACH_GROUP} last_generated_expression.make_pattern (an_executable, select_expression, an_action, a_key_pattern, algorithm, sort_keys, collation_name, default_collation_name)
			else
				create {XM_XSLT_COMPILED_FOR_EACH_GROUP} last_generated_expression.make (an_executable, select_expression, an_action, a_key, algorithm, sort_keys, collation_name, default_collation_name)
			end
		end

feature {NONE} -- Implementation

	select_expression: XM_XPATH_EXPRESSION
			-- Population selector
	
	collation_name: XM_XPATH_EXPRESSION
			-- Name of collation

	group_by: XM_XPATH_EXPRESSION
			-- Group-by expression

	group_adjacent: XM_XPATH_EXPRESSION
			-- Group-ajacent expression

	group_starting_with: XM_XSLT_PATTERN
			-- Group-starting-with pattern

	group_ending_with: XM_XSLT_PATTERN
			-- Group-ending-with pattern
	
	prepare_attributes_2 (a_select_attribute, a_group_by_attribute, a_group_starting_with_attribute,
								 a_group_adjacent_attribute,	a_group_ending_with_attribute, a_collation_attribute: STRING) is
			-- Prepare attributes some more.
		local
			count_of_grouping_attributes: INTEGER
			an_error: XM_XPATH_ERROR_VALUE
		do
			if a_select_attribute /= Void then
				generate_expression (a_select_attribute)
				select_expression := last_generated_expression
				if select_expression.is_error then
					report_compile_error (select_expression.error_value)
				end
			else
				report_absence ("select")
			end
			if a_collation_attribute /= Void then
				generate_attribute_value_template (a_collation_attribute, static_context)
				collation_name := last_generated_expression
				if collation_name.is_error then
					report_compile_error (collation_name.error_value)
				end
			end

			if a_group_by_attribute /= Void then
				count_of_grouping_attributes := count_of_grouping_attributes + 1
				generate_expression (a_group_by_attribute)
				group_by := last_generated_expression
				if group_by.is_error then
					report_compile_error (group_by.error_value)
				end
			end
			if a_group_adjacent_attribute /= Void then
				count_of_grouping_attributes := count_of_grouping_attributes + 1
				generate_expression (a_group_adjacent_attribute)
				group_adjacent := last_generated_expression
				if group_adjacent.is_error then
					report_compile_error (group_adjacent.error_value)
				end
			end
			if a_group_starting_with_attribute /= Void then
				count_of_grouping_attributes := count_of_grouping_attributes + 1
				generate_pattern (a_group_starting_with_attribute)
				group_starting_with := last_generated_pattern
				if group_starting_with.is_error then
					report_compile_error (group_starting_with.error_value)
				end
			end
			if a_group_ending_with_attribute /= Void then
				count_of_grouping_attributes := count_of_grouping_attributes + 1
				generate_pattern (a_group_ending_with_attribute)
				group_ending_with := last_generated_pattern
				if group_ending_with.is_error then
					report_compile_error (group_ending_with.error_value)
				end				
			end

			if count_of_grouping_attributes /= 1 then
				create an_error.make_from_string ("Exactly one of the attributes group-by, group-adjacent, group-starting-with, and group-ending-with must be specified", "", "XTSE1080", Static_error)
				report_compile_error (an_error)
			end
			if a_collation_attribute /= Void and then a_group_by_attribute = Void and then a_group_adjacent_attribute = Void then
				create an_error.make_from_string ("A collation may be specified only if group-by or group-adjacent is specified", "", "XTSE1090", Static_error)
				report_compile_error (an_error)
			end
		end

invariant

	instruction: is_instruction = True
	only_one_algorithm: validated implies group_by /= Void xor group_adjacent /= Void xor group_starting_with /= Void xor group_ending_with /= Void
	collation_name: collation_name /= Void implies group_by /= Void xor group_adjacent /= Void

end
