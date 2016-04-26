note

	description:

		"Options that are not flags and need a parameter"

	library: "Gobo Eiffel Argument Library"
	copyright: "Copyright (c) 2006, Bernd Schoeller and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

deferred class AP_OPTION_WITH_PARAMETER [G]

inherit

	AP_OPTION
		redefine
			initialize,
			example,
			names
		end

feature {NONE} -- Initialization

	initialize
			-- Perform the common initialization steps.
		do
			Precursor
			parameter_description := "arg"
		end

feature -- Access

	default_value: like parameter

	example: STRING
			-- Example for the usage of the option
		local
			l_long_form: like long_form
		do
			create Result.make (20)
			if not is_mandatory then
				Result.append_character ('[')
			end
			Result.append_character (short_option_introduction)
			if has_short_form then
				Result.append_character (short_form)
				Result.append_character (' ')
				Result.append_string (parameter_description)
			else
				Result.append_character (long_option_introduction)
				l_long_form := long_form
				check
						-- implied by inherited invariant has_short_or_long
					has_short_or_long: l_long_form /= Void
				end
				Result.append_string (l_long_form)
				if not needs_parameter then
					Result.append_character ('[')
				end
				Result.append_character (long_option_parameter_introduction)
				Result.append_string (parameter_description)
				if not needs_parameter then
					Result.append_character (']')
				end
			end
			if not is_mandatory then
				Result.append_character (']')
			end
		end

	names: STRING
			-- Names of the option (short and long)
		do
			Result := Precursor
			if has_long_form then
				if not needs_parameter then
					Result.append_character ('[')
				end
				Result.append_string (long_option_parameter_introduction.out)
				Result.append_string (parameter_description)
				if not needs_parameter then
					Result.append_character (']')
				end
			else
				Result.append_character (' ')
				Result.append_string (parameter_description)
			end
		end

	parameter_description: STRING
			-- Name of the parameter

	parameter: detachable G
			-- Last value give to the option
		require
			was_found: was_found or has_default_value
		do
			if parameters.is_empty then
				Result := default_value
			else
				Result := parameters.last
			end
		end

	parameters: DS_LIST [detachable G]
			-- All parameters given to the option
		deferred
		end

	occurrences: INTEGER
			-- Number of times this flag was encountered
		do
			Result := parameters.count
		end

feature -- Status report

	allows_parameter: BOOLEAN
			-- Does this option allow a parameter ?
		do
			Result := True
		end

	has_default_value: BOOLEAN
			-- Has a default value been given to this parameter?


feature -- Status setting

	set_parameter_description (a_string: STRING)
			-- Set the parameter name to `a_string'.
		require
			a_string_not_void: a_string /= Void
		do
			parameter_description := a_string
		ensure
			parameter_description_set: parameter_description = a_string
		end


feature -- Commands

	set_default_value (a_value: like default_value)
			-- Set `default_value' to `a_value'.
		do
			default_value := a_value
			has_default_value := True
		ensure
			definition: default_value = a_value
		end


invariant

	options_allows_parameter: allows_parameter
	parameters_not_void: parameters /= Void

end
