indexing

	description:

		"Objects that represent an XPath boolean value"

	library: "Gobo Eiffel XPath Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_BOOLEAN_VALUE

inherit

	XM_XPATH_ATOMIC_VALUE
		redefine
			effective_boolean_value
		end

creation

	make

feature {NONE} -- Initialization

	make (a_value: BOOLEAN) is
		do
			make_atomic_value
			value := a_value
		ensure
			set: value = a_value
		end

feature -- Access

	value: BOOLEAN
			-- Value of expression

	item_type: XM_XPATH_ITEM_TYPE is
			-- Data type of the expression, where know
		do
			Result := type_factory.boolean_type
			if Result /= Void then
				-- Bug in SE 1.0 and 1.1: Make sure that
				-- that `Result' is not optimized away.
			end
		end

	string_value: STRING is
			--Value of the item as a string
		do
			if value then
				Result := "true"
			else
				Result := "false"
			end
		end

feature -- Comparison

	same_expression (other: XM_XPATH_EXPRESSION): BOOLEAN is
			-- Are `Current' and `other' the same expression?
		local
			other_boolean: XM_XPATH_BOOLEAN_VALUE
		do
			other_boolean ?= other
			if other_boolean /= Void then
				Result := value = other_boolean.value
			end
		end
	
	three_way_comparison (other: XM_XPATH_ATOMIC_VALUE): INTEGER is
			-- Compare `Current' to `other'
		local
			a_boolean_value: XM_XPATH_BOOLEAN_VALUE
		do
			a_boolean_value ?= other
				check
					a_boolean_value /= Void
					-- From pre-condition `comparable_other'
				end
			if value = a_boolean_value.value then
				Result := 0
			elseif value = True then
				Result := 1
			else
				Result := -1
			end
		end

feature -- Status report

	is_comparable (other: XM_XPATH_ATOMIC_VALUE): BOOLEAN is
			-- Is `other' comparable to `Current'?
		local
			a_boolean_value: XM_XPATH_BOOLEAN_VALUE
		do
			a_boolean_value ?= other
			Result := a_boolean_value /= Void
		end

	is_convertible (a_required_type: XM_XPATH_ITEM_TYPE): BOOLEAN is
			-- Is `Current' convertible to `a_required_type'?
		do
			if	a_required_type = any_item or else 	a_required_type = type_factory.any_atomic_type
				or else a_required_type = type_factory.boolean_type
				or else a_required_type = type_factory.string_type
				or else a_required_type = type_factory.numeric_type
				or else a_required_type = type_factory.integer_type
				or else a_required_type = type_factory.decimal_type
				or else a_required_type = type_factory.float_type
				or else a_required_type = type_factory.double_type then
				Result := True
			else
				Result := False
			end
		end

	display (a_level: INTEGER; a_pool: XM_XPATH_NAME_POOL) is
			-- Diagnostic print of expression structure to `std.error'
		local
			a_string: STRING
		do
			a_string := STRING_.appended_string (indentation (a_level), "boolean (")
			a_string := STRING_.appended_string (a_string, string_value)
			a_string := STRING_.appended_string (a_string, ")")
			std.error.put_string (a_string)
			if is_error then
				std.error.put_string (" in error%N")
			else
				std.error.put_new_line
			end
		end

feature -- Evaluation
	
	effective_boolean_value (context: XM_XPATH_CONTEXT): XM_XPATH_BOOLEAN_VALUE is
			-- Effective boolean value of the expression
		do
			Result := Current
		end

feature -- Conversions
	
	convert_to_type (a_required_type: XM_XPATH_ITEM_TYPE): XM_XPATH_ATOMIC_VALUE is
			-- Convert `Current' to `a_required_type'
		local
			a_value: INTEGER
			an_integer: XM_XPATH_INTEGER_VALUE
		do
			if value then a_value := 1 end
			if	a_required_type = type_factory.boolean_type  then
				Result := Current
			elseif a_required_type = type_factory.any_atomic_type  then
				Result := Current
			elseif a_required_type = any_item  then
				Result := Current
			elseif a_required_type = type_factory.numeric_type then
				create {XM_XPATH_INTEGER_VALUE} Result.make (a_value)
			elseif a_required_type = type_factory.integer_type then
				create {XM_XPATH_INTEGER_VALUE} Result.make (a_value)
			elseif a_required_type = type_factory.decimal_type then
				create an_integer.make (a_value)
				Result := an_integer.convert_to_type (a_required_type)
			elseif a_required_type = type_factory.double_type then
				create an_integer.make (a_value)
				Result := an_integer.convert_to_type (a_required_type)
			elseif a_required_type = type_factory.float_type then
				create an_integer.make (a_value)
				Result := an_integer.convert_to_type (a_required_type)
			elseif a_required_type = type_factory.string_type then
				create {XM_XPATH_STRING_VALUE} Result.make (string_value)
			end
		end
end
