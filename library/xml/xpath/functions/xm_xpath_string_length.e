indexing

	description:

		"Objects that implement the XPath string-length() function"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_STRING_LENGTH

inherit

	XM_XPATH_SYSTEM_FUNCTION
		redefine
			simplified_expression, evaluate_item
		end

creation

	make

feature {NONE} -- Initialization

	make is
			-- Establish invariant
		do
			name := "string-length"
			minimum_argument_count := 0
			maximum_argument_count := 1
			create arguments.make (1)
			arguments.set_equality_tester (expression_tester)
			compute_static_properties
		end

feature -- Access

	item_type: XM_XPATH_ITEM_TYPE is
			-- Data type of the expression, where known
		do
			Result := type_factory.integer_type
			if Result /= Void then
				-- Bug in SE 1.0 and 1.1: Make sure that
				-- that `Result' is not optimized away.
			end
		end

feature -- Status report

	required_type (argument_number: INTEGER): XM_XPATH_SEQUENCE_TYPE is
			-- Type of argument number `argument_number'
		do
			create Result.make_optional_string
		end

	is_test_for_zero: BOOLEAN
			-- If this is set we return 0 for a zero length string, 1 for any other;
			-- Set by the optimizer.

feature -- Status setting

	set_test_for_zero is
			-- Set `is_test_for_zero'.
		do
			is_test_for_zero := True
		ensure
			is_test_for_zero = True
		end

feature -- Optimization

		simplified_expression: XM_XPATH_EXPRESSION is
			-- Simplified expression as a result of context-independent static optimizations
			-- This default implementation does nothing.
		local
			a_result_expression: XM_XPATH_STRING_LENGTH
			a_simplifier: XM_XPATH_ARGUMENT_SIMPLIFIER
		do
			a_result_expression := clone (Current)
			a_result_expression.use_context_item_as_default
			create a_simplifier
			a_simplifier.simplify_arguments (arguments)
			if not a_simplifier.is_error then
				a_result_expression.set_arguments (a_simplifier.simplified_arguments)
			else
				a_result_expression.set_last_error (a_simplifier.error_value)
			end
			Result := a_result_expression
		end

feature -- Evaluation

	evaluate_item (a_context: XM_XPATH_CONTEXT) is
			-- Evaluate as a single item
		local
			an_atomic_value: XM_XPATH_ATOMIC_VALUE
			a_string: STRING
		do
			arguments.item (1).evaluate_item (a_context)
			an_atomic_value ?= arguments.item (1).last_evaluated_item
			if an_atomic_value = Void then
				create {XM_XPATH_STRING_VALUE} an_atomic_value.make ("")
			end
			a_string := an_atomic_value.string_value
			if is_test_for_zero then
				if a_string.count = 0 then
					create {XM_XPATH_INTEGER_VALUE} last_evaluated_item.make_from_integer (0)
				else
					create {XM_XPATH_INTEGER_VALUE} last_evaluated_item.make_from_integer (1)
				end
			else
				create {XM_XPATH_INTEGER_VALUE} last_evaluated_item.make_from_integer (a_string.count)
			end
		end

feature {XM_XPATH_EXPRESSION} -- Restricted

	compute_cardinality is
			-- Compute cardinality.
		do
			set_cardinality_exactly_one
		end

end
	
