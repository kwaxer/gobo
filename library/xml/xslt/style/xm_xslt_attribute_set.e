indexing

	description:

		"xsl:attribute-set element nodes"

	library: "Gobo Eiffel XSLT Library"
	copyright: "Copyright (c) 2004, Colin Adams and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class XM_XSLT_ATTRIBUTE_SET

inherit

	XM_XSLT_STYLE_ELEMENT
		redefine
			validate
		end

	XM_XSLT_PROCEDURE

	XM_XPATH_AXIS

creation {XM_XSLT_NODE_FACTORY}

	make_style_element

feature -- Access

	qname_fingerprint: INTEGER
			-- Fingerprint of QName

	use: STRING
			-- Value of supplied `use' attribute

	attribute_set_elements: DS_ARRAYED_LIST [XM_XSLT_ATTRIBUTE_SET]
			-- Other attribute-sets referenced by `Current'

	instruction: XM_XSLT_COMPILED_ATTRIBUTE_SET
			-- Compiled version of `Current'

	reference_count: INTEGER
			-- Count of references to `Current'

feature -- Element change

	increment_reference_count is
			-- Increment `reference_count'.
		do
			reference_count := reference_count + 1
		ensure
			reference_count_incremented: reference_count = old reference_count + 1
		end

	prepare_attributes is
			-- Set the attribute list for the element.
		local
			a_cursor: DS_ARRAYED_LIST_CURSOR [INTEGER]
			a_name_code: INTEGER
			an_expanded_name, a_name_attribute: STRING
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
				if STRING_.same_string (an_expanded_name, Name_attribute) then
					a_name_attribute := attribute_value_by_index (a_cursor.index)
					STRING_.left_adjust (a_name_attribute)
					STRING_.right_adjust (a_name_attribute)
				elseif STRING_.same_string (an_expanded_name, Use_attribute_sets_attribute) then
					use := attribute_value_by_index (a_cursor.index)
				else
					check_unknown_attribute (a_name_code)
				end
				a_cursor.forth
			end
			if a_name_attribute = Void then
				report_absence ("name")
			else
				generate_name_code (a_name_attribute)
				if last_generated_name_code = -1 then
					report_compile_error (error_message)
				else
					qname_fingerprint := fingerprint_from_name_code (last_generated_name_code)
				end
			end
			attributes_prepared := True
		end

	validate is
			-- Check that the stylesheet element is valid.
			-- This is called once for each element, after the entire tree has been built.
			-- As well as validation, it can perform first-time initialisation.
		local
			an_iterator: XM_XPATH_SEQUENCE_ITERATOR [XM_XPATH_NODE]
			an_attribute: XM_XSLT_ATTRIBUTE
			a_cursor: DS_ARRAYED_LIST_CURSOR [XM_XSLT_ATTRIBUTE_SET]
		do
			check_top_level
			an_iterator := new_axis_iterator (Child_axis)
			from
				an_iterator.start
			until
				any_compile_errors or else an_iterator.after
			loop
				an_attribute ?= an_iterator.item
				if an_attribute = Void then
					report_compile_error ("Only xsl:attribute is allowed within xsl:attribute-set")
				end
				an_iterator.forth
			end

			if use /= Void then

				-- Identify any attribute sets that this one refers to

				create attribute_set_elements.make_default
				accumulate_attribute_sets (use, attribute_set_elements)
				if not any_compile_errors then

					-- Check for circularity

					from
						a_cursor := attribute_set_elements.new_cursor; a_cursor.start
					variant
						attribute_set_elements.count + 1 - a_cursor.index
					until
						a_cursor.after
					loop
						a_cursor.item.check_circularity (Current)
						a_cursor.forth
					end
				end
			end
			validated := True
		end

	check_circularity (an_origin: like Current) is
			-- Check for circularity of reference.
		local
			a_cursor: DS_ARRAYED_LIST_CURSOR [XM_XSLT_ATTRIBUTE_SET]
		do
			if an_origin = Current then
				report_compile_error ("The definition of the attribute set is circular")
			elseif validated then

				-- If this attribute set isn't validated yet, we don't check it.
				-- The circularity will be detected when the last attribute set
				--  in the cycle gets validated.

				if attribute_set_elements /= Void then
					from
						a_cursor := attribute_set_elements.new_cursor; a_cursor.start
					variant
						attribute_set_elements.count + 1 - a_cursor.index
					until
						a_cursor.after
					loop
						a_cursor.item.check_circularity (an_origin)
						a_cursor.forth
					end
				end
			end
		end

	compile (an_executable: XM_XSLT_EXECUTABLE) is
			-- Compile `Current' to an excutable instruction.
		local
			needs_stack_frame: BOOLEAN
			a_body: XM_XSLT_BLOCK
		do
			last_generated_instruction := Void
			if reference_count > 0 then
				principal_stylesheet.allocate_local_slots (number_of_variables)
				needs_stack_frame :=  number_of_variables > 0
				create a_body.make (an_executable)
				compile_children  (an_executable, a_body)
				create instruction.make (used_attribute_sets, a_body, needs_stack_frame)
			end
		end

end
