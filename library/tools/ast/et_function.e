indexing

	description:

		"Eiffel functions"

	library:    "Gobo Eiffel Tools Library"
	author:     "Eric Bezault <ericb@gobosoft.com>"
	copyright:  "Copyright (c) 1999-2001, Eric Bezault and others"
	license:    "Eiffel Forum Freeware License v1 (see forum.txt)"
	date:       "$Date$"
	revision:   "$Revision$"

deferred class ET_FUNCTION

inherit

	ET_QUERY
		redefine
			signature, undefined_feature,
			has_formal_parameters,
			resolve_formal_parameters,
			resolve_identifier_types,
			add_to_system
		end

	ET_ROUTINE

feature -- Access

	signature: ET_SIGNATURE is
			-- Signature of current function
			-- (Create a new object at each call.)
		do
			!! Result.make (arguments, type)
		end

feature -- Conversion

	undefined_feature (a_name: like name; an_id: INTEGER): ET_DEFERRED_FUNCTION is
			-- Undefined version of current feature
		do
			!! Result.make_with_seeds (a_name, arguments, type, obsolete_message,
				preconditions, postconditions, clients, implementation_class, seeds, an_id)
		end

feature -- System

	add_to_system is
			-- Recursively add to system classes that
			-- appear in current feature.
		do
			type.add_to_system
			if arguments /= Void then
				arguments.add_to_system
			end
		end

feature -- Type processing

	has_formal_parameters (actual_parameters: ET_ACTUAL_GENERIC_PARAMETERS): BOOLEAN is
			-- Does current feature contain formal generic parameter
			-- types whose corresponding actual parameter in
			-- `actual_parameters' is different from the formal
			-- parameter?
		do
			Result := type.has_formal_parameters (actual_parameters)
			if not Result then
				if arguments /= Void then
					Result := arguments.has_formal_parameters (actual_parameters)
				end
			end
		end

	resolve_formal_parameters (actual_parameters: ET_ACTUAL_GENERIC_PARAMETERS) is
			-- Replace in current feature the formal generic parameter
			-- types by those of `actual_parameters' when the 
			-- corresponding actual parameter is different from
			-- the formal parameter.
		do
			if type.has_formal_parameters (actual_parameters) then
				type := type.deep_cloned_type
				type := type.resolved_formal_parameters (actual_parameters)
			end
			if arguments /= Void then
				if arguments.has_formal_parameters (actual_parameters) then
					arguments := arguments.cloned_arguments
					arguments.resolve_formal_parameters (actual_parameters)
				end
			end
		end

	resolve_identifier_types (a_flattener: ET_FEATURE_FLATTENER) is
			-- Replace any 'like identifier' types that appear
			-- in the implementation of current feature by the
			-- corresponding 'like feature' or 'like argument'.
			-- Also resolve 'BIT identifier' types and check
			-- validity of arguments' name.
		do
			if arguments /= Void then
				arguments.resolve_identifier_types (Current, a_flattener)
			end
			type := type.resolved_identifier_types (Current, arguments, a_flattener)
		end

end -- class ET_FUNCTION
