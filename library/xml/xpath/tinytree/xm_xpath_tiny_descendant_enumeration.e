indexing

	description:

		"Objects that enumerate the descendant:: and descendant-or-self Axes"

	library: "Gobo Eiffel XPATH Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XPATH_TINY_DESCENDANT_ENUMERATION
	
inherit

	XM_XPATH_AXIS_ITERATOR [XM_XPATH_TINY_NODE]

	XM_XPATH_TYPE
	
	KL_SHARED_STANDARD_FILES

creation

	make
	
feature {NONE} -- Initialization

	make (a_document: XM_XPATH_TINY_DOCUMENT; a_starting_node: XM_XPATH_TINY_NODE; a_node_test: XM_XPATH_NODE_TEST; self: BOOLEAN) is
			-- Establish invariant
		require
			document_not_void: a_document /= Void
			starting_node_not_void: a_starting_node /= Void
			node_test_not_void: a_node_test /= Void
		local
			a_type_code: INTEGER
		do
			document := a_document
			starting_node := a_starting_node
			node_test := a_node_test
			next_node_number := a_starting_node.node_number
			include_self := self

			starting_depth := a_document.depth_of (next_node_number)

			if include_self then
				do_nothing
			else
				next_node_number := next_node_number + 1
				if document.depth_of (next_node_number) <= starting_depth then
					next_node_number := - 1
				end
			end

			-- check if this matches the starting conditions

			if document.retrieve_node_kind (next_node_number) = Element_node then
				a_type_code := document.element_annotation (next_node_number)
			else
				a_type_code := Any_node
			end
			debug ("XPath descendants enumeration")
				std.error.put_string ("Next node is ")
				std.error.put_string (next_node_number.out)
				std.error.put_new_line
			end
			if next_node_number >= 0 and then next_node_number < document.last_node_added and then
				not a_node_test.matches_node (document.retrieve_node_kind (next_node_number), document.name_code_for_node (next_node_number), a_type_code) then
				advance
			end

			debug ("XPath descendants enumeration")
				std.error.put_string ("Initial depth is ")
				std.error.put_string (starting_depth.out)
				std.error.put_string (", next node is ")
				std.error.put_string (next_node_number.out)
				std.error.put_string (", starting node is ")
				std.error.put_string (starting_node.node_number.out)				
				std.error.put_new_line
			end
			
			
		ensure
			document_set: document = a_document
			starting_node_set: starting_node = a_starting_node
			test_set: node_test = a_node_test
			include_self: include_self = self
		end

feature -- Status report

	
	after: BOOLEAN is
			-- Are there any more items in the sequence?
		do
			Result := next_node_number <= 0
		end

feature -- Cursor movement

	forth is
			-- Move to next position
		do
			index := index + 1
			current_item := document.retrieve_node (next_node_number)
			debug ("XPath descendants enumeration")
				std.error.put_string ("Forth: index is now ")
				std.error.put_string (index.out)
				std.error.put_string (", current item's node number is ")
				std.error.put_string (next_node_number.out)
				std.error.put_new_line
			end

			advance
		end

feature -- Duplication

	another: like Current is
			-- Another iterator that iterates over the same items as the original;
			-- The new iterator will be repositioned at the start of the sequence
		do
			create Result.make (document, starting_node, node_test, include_self)
		end
	
feature {NONE} -- Implementation

	document: XM_XPATH_TINY_DOCUMENT
			-- The document within which we enumerate

	starting_node: XM_XPATH_TINY_NODE
			-- The starting node for the enumeration

	node_test: XM_XPATH_NODE_TEST
			-- The node test to apply when selecting nodes

	include_self: BOOLEAN
			-- Include self node in enumeration?

	next_node_number: INTEGER
			-- The next node to be returned by the enumeration

	starting_depth: INTEGER
			-- depth of starting node

	advance is
			-- Move to the next matching node
		local
			finished: BOOLEAN
		do
			from
			until
				finished 
			loop
				next_node_number := next_node_number + 1
				debug ("XPath descendants enumeration")
					std.error.put_string ("Advance: next node is now ")
					std.error.put_string (next_node_number.out)
					std.error.put_new_line
					std.error.put_string ("Node kind is:")
					std.error.put_string (document.retrieve_node_kind (next_node_number).out)
					std.error.put_string (", name code is:")
					std.error.put_string (document.name_code_for_node (next_node_number).out)
					std.error.put_new_line
				end
					
				if next_node_number > document.last_node_added or else document.depth_of (next_node_number) <= starting_depth then
					next_node_number := -1
					finished := True
				elseif node_test.matches_node (document.retrieve_node_kind (next_node_number), document.name_code_for_node (next_node_number), Any_node) then
					finished := True
				end
			end
		end
	
invariant

	document_not_void: document /= Void
	starting_node_not_void: starting_node /= Void
	node_test_not_void: node_test /= Void
	
end
	
