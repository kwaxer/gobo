note

	description:

		"ECF capability names"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"

class ET_ECF_CAPABILITY_NAMES

feature -- Names

	catcall_detection_capability_name: STRING = "catcall_detection"
			-- Name of capability "catcall_detection"
			--
			-- Values: none|conformance|all
			-- Note: ordered (none<conformance<all).

	code_capability_name: STRING = "code"
			-- Name of "support" capability "code"
			--
			-- Values: standard|dotnet
			-- Note: unordered, "support" can list both.
			-- Note: if not specificed, then any code kind is supported.
			--
			-- Note: this was supposed to supersede the setting 'msil_generation'
			-- in ECF 1.16.0, but ISE does not support the capability 'code' yet
			-- and still uses the setting 'msil_generation'.

	concurrency_capability_name: STRING = "concurrency"
			-- Name of "support" capability "concurrency"
			--
			-- Values: thread|none|scoop
			-- Note: ordered (thread<none<scoop).

	platform_capability_name: STRING = "platform"
			-- Name of "support" capability "platform"
			--
			-- Values: windows|unix|macintosh|vxworks
			-- Note: unordered, "support" can list both.
			-- Note: if not specificed, then any platform is supported.
			--
			-- Note: this was supposed to supersede the setting 'platform'
			-- in ECF 1.16.0, but ISE does not support the capability 'platform' yet
			-- and still uses the setting 'platform'.

	void_safety_capability_name: STRING = "void_safety"
			-- Name of "support" capability "void_safety"
			--
			-- Values: none|conformance|initialization|transitional|all
			-- Note: ordered (none<conformance<initialization<transitional<all).

feature -- Values

	all_capability_value: STRING = "all"
			-- Value "all"
			--
			-- Used in "catcall_detection" and "void_safety".

	all_codes_capability_value: STRING = "standard dotnet"
			-- Value "standard dotnet"
			--
			-- Used in "code".

	all_platforms_capability_value: STRING = "windows unix macintosh vxworks"
			-- Value "windows unix macintosh vxworks"
			--
			-- Used in "platform".

	conformance_capability_value: STRING = "conformance"
			-- Value "conformance"
			--
			-- Used in "catcall_detection" and "void_safety".

	dotnet_capability_value: STRING = "dotnet"
			-- Value "dotnet"
			--
			-- Used in "code".

	initialization_capability_value: STRING = "initialization"
			-- Value "initialization"
			--
			-- Used in "void_safety".

	macintosh_capability_value: STRING = "macintosh"
			-- Value "macintosh"
			--
			-- Used in "platform".

	none_capability_value: STRING = "none"
			-- Value "none"
			--
			-- Used in "catcall_detection", "concurrency" and "void_safety".

	scoop_capability_value: STRING = "scoop"
			-- Value "scoop"
			--
			-- Used in "concurrency".

	standard_capability_value: STRING = "standard"
			-- Value "standard"
			--
			-- Used in "code".

	thread_capability_value: STRING = "thread"
			-- Value "thread"
			--
			-- Used in "concurrency".

	transitional_capability_value: STRING = "transitional"
			-- Value "transitional"
			--
			-- Used in "void_safety".

	unix_capability_value: STRING = "unix"
			-- Value "unix"
			--
			-- Used in "platform".

	value_separator: CHARACTER = ' '
			-- Separator used in case of multiple values

	value_separators: STRING = " "
			-- Separator used in case of multiple values
			-- (To be used in ST_SPLITTER.)

	vxworks_capability_value: STRING = "vxworks"
			-- Value "vxworks"
			--
			-- Used in "platform".

	windows_capability_value: STRING = "windows"
			-- Value "windows"
			--
			-- Used in "platform".

end