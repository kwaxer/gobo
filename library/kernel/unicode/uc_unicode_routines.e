indexing

	description:

		"Unicode routines"

	library: "Gobo Eiffel Kernel Library"
	copyright: "Copyright (c) 2001-2002, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class UC_UNICODE_ROUTINES

inherit

	UC_UNICODE_CONSTANTS

	UC_CTYPE_UPPERCASE
		export {NONE} all end

	UC_CTYPE_LOWERCASE
		export {NONE} all end

feature -- Status report

	valid_code (a_code: INTEGER): BOOLEAN is
			-- Is `a_code' a valid unicode?
		do
			Result := (a_code >= minimum_unicode_character_code and
				a_code <= maximum_unicode_character_code)
		ensure
			definition: Result = (a_code >= minimum_unicode_character_code and
				a_code <= maximum_unicode_character_code)
		end

	valid_ascii_code (a_code: INTEGER): BOOLEAN is
			-- Is `a_code' a valid ASCII code?
		do
			Result := (a_code >= minimum_ascii_character_code and
				a_code <= maximum_ascii_character_code)
		ensure
			definition: Result = (a_code >= minimum_ascii_character_code and
				a_code <= maximum_ascii_character_code)
		end

	is_ascii_string (a_string: STRING): BOOLEAN is
			-- Does `a_string' contain only ASCII characters?
		require
			a_string_not_void: a_string /= Void
		local
			a_unicode: UC_STRING
			i: INTEGER
		do
			a_unicode ?= a_string
			if a_unicode /= Void then
				Result := a_unicode.is_ascii
			else
				Result := True
				from i := a_string.count until i < 1 loop
					if maximum_ascii_character_code < a_string.item_code (i) then
						Result := False
						i := 0 -- Jump out of the loop.
					else
						i := i - 1
					end
				end
			end
		end

feature -- Access

	lower_code (a_code: INTEGER): INTEGER is
			-- Code of lowercase character of character with code `a_code'
		require
			valid_code: valid_code (a_code)
		do
 			Result := lowercase.item (a_code // 256 + 1).item (a_code \\ 256 + 1)
			if Result = -1 then
				Result := a_code
			end
		ensure
			valid_lower_code: valid_code (Result)
		end

	upper_code (a_code: INTEGER): INTEGER is
			-- Code of uppercase character of character with code `a_code'
		require
			valid_code: valid_code (a_code)
		do
 			Result := uppercase.item (a_code // 256 + 1).item (a_code \\ 256 + 1)
			if Result = -1 then
				Result := a_code
			end
		ensure
			valid_lower_code: valid_code (Result)
		end

end
