indexing

	description:

		"Output facility switchable between in-memory string and standard output"

	library: "Gobo Eiffel XML Library"
	copyright: "Copyright (c) 2002, Eric Bezault and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_OUTPUT

inherit

	ANY
	
	KL_SHARED_STANDARD_FILES
		export {NONE} all end
		
	KL_IMPORTED_STRING_ROUTINES
		export {NONE} all end

feature -- Output

	set_output_to_string is
			-- Set output to new string.
		do
			last_output := STRING_.make_empty
			output_stream := Void
		ensure
			last_output_not_void: last_output /= Void
			last_output_empty: last_output.count = 0
		end

	set_output_string (a_string: like last_output) is
			-- Set output to given string.
		require
			a_string_not_void: a_string /= Void
		do
			last_output := a_string
			output_stream := Void
		ensure
			definition: last_output = a_string
		end

	set_output_stream (a_stream: like output_stream) is
			-- Set output to stream.
		require
			a_stream_not_void: a_stream /= Void
		do
			output_stream := a_stream
			last_output := Void
		end
		
	set_output_standard is
			-- Set output to standard output (Default).
		do
			output_stream := std.output
			last_output := Void
		end

	set_output_standard_error is
			-- Set output to standard error.
		do
			output_stream := std.error
			last_output := Void
		end

	last_output: STRING
			-- Last output;
			-- May be void if standard output or stream is used.

feature {NONE} -- Output stream

	output_stream: KI_CHARACTER_OUTPUT_STREAM

feature -- Output, interface to descendants

	output (a_string: STRING) is
			-- Output string.
			-- All output from descendants should go through this for
			-- convenient redefinition.
		require
			a_string_not_void: a_string /= Void
		do
			if last_output /= Void then
				last_output := STRING_.appended_string (last_output, a_string)
			else
				if output_stream = Void then
					set_output_standard
				end
				output_stream.put_string (a_string)
			end
			check one_set: output_stream /= Void or last_output /= Void end
		end

end
