indexing

	description:

		"Internal errors"

	library: "Gobo Eiffel Tools Library"
	copyright: "Copyright (c) 2003-2004, Eric Bezault and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class ET_INTERNAL_ERROR

inherit

	ET_ERROR

creation

	make_giaaa,
	make_giaab,
	make_giaac,
	make_giaad,
	make_giaae,
	make_giaaf,
	make_giaag,
	make_giaah,
	make_giaai,
	make_giaaj,
	make_giaak,
	make_giaal,
	make_giaam,
	make_giaan,
	make_giaao,
	make_giaap,
	make_giaaq,
	make_giaar,
	make_giaas,
	make_giaat,
	make_giaau,
	make_giaav,
	make_giaaw,
	make_giaax,
	make_giaay,
	make_giaaz,
	make_giaba,
	make_giabb,
	make_giabc,
	make_giabd,
	make_giabe,
	make_giabf,
	make_giabg,
	make_giabh,
	make_giabi,
	make_giabj,
	make_giabk,
	make_giabl,
	make_giabm,
	make_giabn,
	make_giabo,
	make_giabp,
	make_giabq,
	make_giabr,
	make_giabs,
	make_giabt,
	make_giabu,
	make_giabv,
	make_giabw,
	make_giabx,
	make_giaby,
	make_giabz,
	make_giaca,
	make_giacb,
	make_giacc,
	make_giacd,
	make_giace,
	make_giacf,
	make_giacg,
	make_giach,
	make_giaci,
	make_giacj,
	make_giack,
	make_giacl,
	make_giacm,
	make_giacn,
	make_giaco,
	make_giacp,
	make_giacq,
	make_giacr,
	make_giacs,
	make_giact,
	make_giacu,
	make_giacv,
	make_giacw,
	make_giacx,
	make_giacy,
	make_giacz,
	make_giada,
	make_giadb,
	make_giadc,
	make_giadd,
	make_giade,
	make_giadf,
	make_giadg,
	make_giadh,
	make_giadi,
	make_giadj,
	make_giadk,
	make_giadl,
	make_giadm,
	make_giadn,
	make_giado,
	make_giadp,
	make_giadq,
	make_giadr,
	make_giads,
	make_giadt,
	make_giadu,
	make_giadv,
	make_giadw,
	make_giadx,
	make_giady,
	make_giadz,
	make_giaea,
	make_giaeb,
	make_giaec,
	make_giaed,
	make_gibaa,
	make_gibab,
	make_gibac,
	make_gibad,
	make_gibae,
	make_gibaf,
	make_gibag,
	make_gibah,
	make_gibai,
	make_gibaj,
	make_gibak,
	make_gibal,
	make_gibam,
	make_giban,
	make_gibao,
	make_gibap,
	make_gibaq,
	make_gibar,
	make_gibas,
	make_gibat,
	make_gibau,
	make_gibav,
	make_gibaw,
	make_gibax,
	make_gibay,
	make_gibaz,
	make_gibba,
	make_gibbb,
	make_gibbc,
	make_gibbd,
	make_gibbe,
	make_gibbf,
	make_gibbg,
	make_gibbh,
	make_gibbi,
	make_gibbj,
	make_gibbk,
	make_gibbl,
	make_gibbm,
	make_gibbn,
	make_gibbo,
	make_gibbp,
	make_gibbq,
	make_gibbr,
	make_gibbs,
	make_gibbt,
	make_gibbu,
	make_gibbv,
	make_gibbw,
	make_gibbx,
	make_gibby,
	make_gibbz,
	make_gibca,
	make_gibcb,
	make_gibcc

feature {NONE} -- Initialization

	make_giaaa is
			-- Create a new GIAAA error.
		do
			code := giaaa_template_code
			etl_code := giaaa_etl_code
			default_template := giaaa_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaab is
			-- Create a new GIAAB error.
		do
			code := giaab_template_code
			etl_code := giaab_etl_code
			default_template := giaab_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaac is
			-- Create a new GIAAC error.
		do
			code := giaac_template_code
			etl_code := giaac_etl_code
			default_template := giaac_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaad is
			-- Create a new GIAAD error.
		do
			code := giaad_template_code
			etl_code := giaad_etl_code
			default_template := giaad_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaae is
			-- Create a new GIAAE error.
		do
			code := giaae_template_code
			etl_code := giaae_etl_code
			default_template := giaae_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaaf is
			-- Create a new GIAAF error.
		do
			code := giaaf_template_code
			etl_code := giaaf_etl_code
			default_template := giaaf_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaag is
			-- Create a new GIAAG error.
		do
			code := giaag_template_code
			etl_code := giaag_etl_code
			default_template := giaag_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaah is
			-- Create a new GIAAH error.
		do
			code := giaah_template_code
			etl_code := giaah_etl_code
			default_template := giaah_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaai is
			-- Create a new GIAAI error.
		do
			code := giaai_template_code
			etl_code := giaai_etl_code
			default_template := giaai_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaaj is
			-- Create a new GIAAJ error.
		do
			code := giaaj_template_code
			etl_code := giaaj_etl_code
			default_template := giaaj_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaak is
			-- Create a new GIAAK error.
		do
			code := giaak_template_code
			etl_code := giaak_etl_code
			default_template := giaak_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaal is
			-- Create a new GIAAL error.
		do
			code := giaal_template_code
			etl_code := giaal_etl_code
			default_template := giaal_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaam is
			-- Create a new GIAAM error.
		do
			code := giaam_template_code
			etl_code := giaam_etl_code
			default_template := giaam_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaan is
			-- Create a new GIAAN error.
		do
			code := giaan_template_code
			etl_code := giaan_etl_code
			default_template := giaan_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaao is
			-- Create a new GIAAO error.
		do
			code := giaao_template_code
			etl_code := giaao_etl_code
			default_template := giaao_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaap is
			-- Create a new GIAAP error.
		do
			code := giaap_template_code
			etl_code := giaap_etl_code
			default_template := giaap_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaaq is
			-- Create a new GIAAQ error.
		do
			code := giaaq_template_code
			etl_code := giaaq_etl_code
			default_template := giaaq_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaar is
			-- Create a new GIAAR error.
		do
			code := giaar_template_code
			etl_code := giaar_etl_code
			default_template := giaar_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaas is
			-- Create a new GIAAS error.
		do
			code := giaas_template_code
			etl_code := giaas_etl_code
			default_template := giaas_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaat is
			-- Create a new GIAAT error.
		do
			code := giaat_template_code
			etl_code := giaat_etl_code
			default_template := giaat_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaau is
			-- Create a new GIAAU error.
		do
			code := giaau_template_code
			etl_code := giaau_etl_code
			default_template := giaau_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaav is
			-- Create a new GIAAV error.
		do
			code := giaav_template_code
			etl_code := giaav_etl_code
			default_template := giaav_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaaw is
			-- Create a new GIAAW error.
		do
			code := giaaw_template_code
			etl_code := giaaw_etl_code
			default_template := giaaw_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaax is
			-- Create a new GIAAX error.
		do
			code := giaax_template_code
			etl_code := giaax_etl_code
			default_template := giaax_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaay is
			-- Create a new GIAAY error.
		do
			code := giaay_template_code
			etl_code := giaay_etl_code
			default_template := giaay_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaaz is
			-- Create a new GIAAZ error.
		do
			code := giaaz_template_code
			etl_code := giaaz_etl_code
			default_template := giaaz_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaba is
			-- Create a new GIABA error.
		do
			code := giaba_template_code
			etl_code := giaba_etl_code
			default_template := giaba_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabb is
			-- Create a new GIABB error.
		do
			code := giabb_template_code
			etl_code := giabb_etl_code
			default_template := giabb_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabc is
			-- Create a new GIABC error.
		do
			code := giabc_template_code
			etl_code := giabc_etl_code
			default_template := giabc_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabd is
			-- Create a new GIABD error.
		do
			code := giabd_template_code
			etl_code := giabd_etl_code
			default_template := giabd_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabe is
			-- Create a new GIABE error.
		do
			code := giabe_template_code
			etl_code := giabe_etl_code
			default_template := giabe_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabf is
			-- Create a new GIABF error.
		do
			code := giabf_template_code
			etl_code := giabf_etl_code
			default_template := giabf_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabg is
			-- Create a new GIABG error.
		do
			code := giabg_template_code
			etl_code := giabg_etl_code
			default_template := giabg_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabh is
			-- Create a new GIABH error.
		do
			code := giabh_template_code
			etl_code := giabh_etl_code
			default_template := giabh_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabi is
			-- Create a new GIABI error.
		do
			code := giabi_template_code
			etl_code := giabi_etl_code
			default_template := giabi_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabj is
			-- Create a new GIABJ error.
		do
			code := giabj_template_code
			etl_code := giabj_etl_code
			default_template := giabj_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabk is
			-- Create a new GIABK error.
		do
			code := giabk_template_code
			etl_code := giabk_etl_code
			default_template := giabk_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabl is
			-- Create a new GIABL error.
		do
			code := giabl_template_code
			etl_code := giabl_etl_code
			default_template := giabl_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabm is
			-- Create a new GIABM error.
		do
			code := giabm_template_code
			etl_code := giabm_etl_code
			default_template := giabm_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabn is
			-- Create a new GIABN error.
		do
			code := giabn_template_code
			etl_code := giabn_etl_code
			default_template := giabn_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabo is
			-- Create a new GIABO error.
		do
			code := giabo_template_code
			etl_code := giabo_etl_code
			default_template := giabo_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabp is
			-- Create a new GIABP error.
		do
			code := giabp_template_code
			etl_code := giabp_etl_code
			default_template := giabp_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabq is
			-- Create a new GIABQ error.
		do
			code := giabq_template_code
			etl_code := giabq_etl_code
			default_template := giabq_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabr is
			-- Create a new GIABR error.
		do
			code := giabr_template_code
			etl_code := giabr_etl_code
			default_template := giabr_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabs is
			-- Create a new GIABS error.
		do
			code := giabs_template_code
			etl_code := giabs_etl_code
			default_template := giabs_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabt is
			-- Create a new GIABT error.
		do
			code := giabt_template_code
			etl_code := giabt_etl_code
			default_template := giabt_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabu is
			-- Create a new GIABU error.
		do
			code := giabu_template_code
			etl_code := giabu_etl_code
			default_template := giabu_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabv is
			-- Create a new GIABV error.
		do
			code := giabv_template_code
			etl_code := giabv_etl_code
			default_template := giabv_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabw is
			-- Create a new GIABW error.
		do
			code := giabw_template_code
			etl_code := giabw_etl_code
			default_template := giabw_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabx is
			-- Create a new GIABX error.
		do
			code := giabx_template_code
			etl_code := giabx_etl_code
			default_template := giabx_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaby is
			-- Create a new GIABY error.
		do
			code := giaby_template_code
			etl_code := giaby_etl_code
			default_template := giaby_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giabz is
			-- Create a new GIABZ error.
		do
			code := giabz_template_code
			etl_code := giabz_etl_code
			default_template := giabz_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaca is
			-- Create a new GIACA error.
		do
			code := giaca_template_code
			etl_code := giaca_etl_code
			default_template := giaca_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacb is
			-- Create a new GIACB error.
		do
			code := giacb_template_code
			etl_code := giacb_etl_code
			default_template := giacb_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacc is
			-- Create a new GIACC error.
		do
			code := giacc_template_code
			etl_code := giacc_etl_code
			default_template := giacc_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacd is
			-- Create a new GIACD error.
		do
			code := giacd_template_code
			etl_code := giacd_etl_code
			default_template := giacd_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giace is
			-- Create a new GIACE error.
		do
			code := giace_template_code
			etl_code := giace_etl_code
			default_template := giace_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacf is
			-- Create a new GIACF error.
		do
			code := giacf_template_code
			etl_code := giacf_etl_code
			default_template := giacf_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacg is
			-- Create a new GIACG error.
		do
			code := giacg_template_code
			etl_code := giacg_etl_code
			default_template := giacg_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giach is
			-- Create a new GIACH error.
		do
			code := giach_template_code
			etl_code := giach_etl_code
			default_template := giach_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaci is
			-- Create a new GIACI error.
		do
			code := giaci_template_code
			etl_code := giaci_etl_code
			default_template := giaci_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacj is
			-- Create a new GIACJ error.
		do
			code := giacj_template_code
			etl_code := giacj_etl_code
			default_template := giacj_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giack is
			-- Create a new GIACK error.
		do
			code := giack_template_code
			etl_code := giack_etl_code
			default_template := giack_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacl is
			-- Create a new GIACL error.
		do
			code := giacl_template_code
			etl_code := giacl_etl_code
			default_template := giacl_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacm is
			-- Create a new GIACM error.
		do
			code := giacm_template_code
			etl_code := giacm_etl_code
			default_template := giacm_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacn is
			-- Create a new GIACN error.
		do
			code := giacn_template_code
			etl_code := giacn_etl_code
			default_template := giacn_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaco is
			-- Create a new GIACO error.
		do
			code := giaco_template_code
			etl_code := giaco_etl_code
			default_template := giaco_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacp is
			-- Create a new GIACP error.
		do
			code := giacp_template_code
			etl_code := giacp_etl_code
			default_template := giacp_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacq is
			-- Create a new GIACQ error.
		do
			code := giacq_template_code
			etl_code := giacq_etl_code
			default_template := giacq_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacr is
			-- Create a new GIACR error.
		do
			code := giacr_template_code
			etl_code := giacr_etl_code
			default_template := giacr_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacs is
			-- Create a new GIACS error.
		do
			code := giacs_template_code
			etl_code := giacs_etl_code
			default_template := giacs_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giact is
			-- Create a new GIACT error.
		do
			code := giact_template_code
			etl_code := giact_etl_code
			default_template := giact_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacu is
			-- Create a new GIACU error.
		do
			code := giacu_template_code
			etl_code := giacu_etl_code
			default_template := giacu_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacv is
			-- Create a new GIACV error.
		do
			code := giacv_template_code
			etl_code := giacv_etl_code
			default_template := giacv_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacw is
			-- Create a new GIACW error.
		do
			code := giacw_template_code
			etl_code := giacw_etl_code
			default_template := giacw_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacx is
			-- Create a new GIACX error.
		do
			code := giacx_template_code
			etl_code := giacx_etl_code
			default_template := giacx_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacy is
			-- Create a new GIACY error.
		do
			code := giacy_template_code
			etl_code := giacy_etl_code
			default_template := giacy_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giacz is
			-- Create a new GIACZ error.
		do
			code := giacz_template_code
			etl_code := giacz_etl_code
			default_template := giacz_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giada is
			-- Create a new GIADA error.
		do
			code := giada_template_code
			etl_code := giada_etl_code
			default_template := giada_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadb is
			-- Create a new GIADB error.
		do
			code := giadb_template_code
			etl_code := giadb_etl_code
			default_template := giadb_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadc is
			-- Create a new GIADC error.
		do
			code := giadc_template_code
			etl_code := giadc_etl_code
			default_template := giadc_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadd is
			-- Create a new GIADD error.
		do
			code := giadd_template_code
			etl_code := giadd_etl_code
			default_template := giadd_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giade is
			-- Create a new GIADE error.
		do
			code := giade_template_code
			etl_code := giade_etl_code
			default_template := giade_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadf is
			-- Create a new GIADF error.
		do
			code := giadf_template_code
			etl_code := giadf_etl_code
			default_template := giadf_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadg is
			-- Create a new GIADG error.
		do
			code := giadg_template_code
			etl_code := giadg_etl_code
			default_template := giadg_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadh is
			-- Create a new GIADH error.
		do
			code := giadh_template_code
			etl_code := giadh_etl_code
			default_template := giadh_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadi is
			-- Create a new GIADI error.
		do
			code := giadi_template_code
			etl_code := giadi_etl_code
			default_template := giadi_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadj is
			-- Create a new GIADJ error.
		do
			code := giadj_template_code
			etl_code := giadj_etl_code
			default_template := giadj_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadk is
			-- Create a new GIADK error.
		do
			code := giadk_template_code
			etl_code := giadk_etl_code
			default_template := giadk_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadl is
			-- Create a new GIADL error.
		do
			code := giadl_template_code
			etl_code := giadl_etl_code
			default_template := giadl_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadm is
			-- Create a new GIADM error.
		do
			code := giadm_template_code
			etl_code := giadm_etl_code
			default_template := giadm_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadn is
			-- Create a new GIADN error.
		do
			code := giadn_template_code
			etl_code := giadn_etl_code
			default_template := giadn_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giado is
			-- Create a new GIADO error.
		do
			code := giado_template_code
			etl_code := giado_etl_code
			default_template := giado_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadp is
			-- Create a new GIADP error.
		do
			code := giadp_template_code
			etl_code := giadp_etl_code
			default_template := giadp_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadq is
			-- Create a new GIADQ error.
		do
			code := giadq_template_code
			etl_code := giadq_etl_code
			default_template := giadq_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadr is
			-- Create a new GIADR error.
		do
			code := giadr_template_code
			etl_code := giadr_etl_code
			default_template := giadr_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giads is
			-- Create a new GIADS error.
		do
			code := giads_template_code
			etl_code := giads_etl_code
			default_template := giads_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadt is
			-- Create a new GIADT error.
		do
			code := giadt_template_code
			etl_code := giadt_etl_code
			default_template := giadt_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadu is
			-- Create a new GIADU error.
		do
			code := giadu_template_code
			etl_code := giadu_etl_code
			default_template := giadu_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadv is
			-- Create a new GIADV error.
		do
			code := giadv_template_code
			etl_code := giadv_etl_code
			default_template := giadv_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadw is
			-- Create a new GIADW error.
		do
			code := giadw_template_code
			etl_code := giadw_etl_code
			default_template := giadw_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadx is
			-- Create a new GIADX error.
		do
			code := giadx_template_code
			etl_code := giadx_etl_code
			default_template := giadx_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giady is
			-- Create a new GIADY error.
		do
			code := giady_template_code
			etl_code := giady_etl_code
			default_template := giady_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giadz is
			-- Create a new GIADZ error.
		do
			code := giadz_template_code
			etl_code := giadz_etl_code
			default_template := giadz_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaea is
			-- Create a new GIAEA error.
		do
			code := giaea_template_code
			etl_code := giaea_etl_code
			default_template := giaea_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaeb is
			-- Create a new GIAEB error.
		do
			code := giaeb_template_code
			etl_code := giaeb_etl_code
			default_template := giaeb_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaec is
			-- Create a new GIAEC error.
		do
			code := giaec_template_code
			etl_code := giaec_etl_code
			default_template := giaec_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giaed is
			-- Create a new GIAED error.
		do
			code := giaed_template_code
			etl_code := giaed_etl_code
			default_template := giaed_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibaa is
			-- Create a new GIBAA error.
		do
			code := gibaa_template_code
			etl_code := gibaa_etl_code
			default_template := gibaa_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibab is
			-- Create a new GIBAB error.
		do
			code := gibab_template_code
			etl_code := gibab_etl_code
			default_template := gibab_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibac is
			-- Create a new GIBAC error.
		do
			code := gibac_template_code
			etl_code := gibac_etl_code
			default_template := gibac_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibad is
			-- Create a new GIBAD error.
		do
			code := gibad_template_code
			etl_code := gibad_etl_code
			default_template := gibad_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibae is
			-- Create a new GIBAE error.
		do
			code := gibae_template_code
			etl_code := gibae_etl_code
			default_template := gibae_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibaf is
			-- Create a new GIBAF error.
		do
			code := gibaf_template_code
			etl_code := gibaf_etl_code
			default_template := gibaf_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibag is
			-- Create a new GIBAG error.
		do
			code := gibag_template_code
			etl_code := gibag_etl_code
			default_template := gibag_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibah is
			-- Create a new GIBAH error.
		do
			code := gibah_template_code
			etl_code := gibah_etl_code
			default_template := gibah_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibai is
			-- Create a new GIBAI error.
		do
			code := gibai_template_code
			etl_code := gibai_etl_code
			default_template := gibai_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibaj is
			-- Create a new GIBAJ error.
		do
			code := gibaj_template_code
			etl_code := gibaj_etl_code
			default_template := gibaj_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibak is
			-- Create a new GIBAK error.
		do
			code := gibak_template_code
			etl_code := gibak_etl_code
			default_template := gibak_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibal is
			-- Create a new GIBAL error.
		do
			code := gibal_template_code
			etl_code := gibal_etl_code
			default_template := gibal_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibam is
			-- Create a new GIBAM error.
		do
			code := gibam_template_code
			etl_code := gibam_etl_code
			default_template := gibam_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_giban is
			-- Create a new GIBAN error.
		do
			code := giban_template_code
			etl_code := giban_etl_code
			default_template := giban_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibao is
			-- Create a new GIBAO error.
		do
			code := gibao_template_code
			etl_code := gibao_etl_code
			default_template := gibao_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibap is
			-- Create a new GIBAP error.
		do
			code := gibap_template_code
			etl_code := gibap_etl_code
			default_template := gibap_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibaq is
			-- Create a new GIBAQ error.
		do
			code := gibaq_template_code
			etl_code := gibaq_etl_code
			default_template := gibaq_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibar is
			-- Create a new GIBAR error.
		do
			code := gibar_template_code
			etl_code := gibar_etl_code
			default_template := gibar_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibas is
			-- Create a new GIBAS error.
		do
			code := gibas_template_code
			etl_code := gibas_etl_code
			default_template := gibas_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibat is
			-- Create a new GIBAT error.
		do
			code := gibat_template_code
			etl_code := gibat_etl_code
			default_template := gibat_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibau is
			-- Create a new GIBAU error.
		do
			code := gibau_template_code
			etl_code := gibau_etl_code
			default_template := gibau_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibav is
			-- Create a new GIBAV error.
		do
			code := gibav_template_code
			etl_code := gibav_etl_code
			default_template := gibav_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibaw is
			-- Create a new GIBAW error.
		do
			code := gibaw_template_code
			etl_code := gibaw_etl_code
			default_template := gibaw_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibax is
			-- Create a new GIBAX error.
		do
			code := gibax_template_code
			etl_code := gibax_etl_code
			default_template := gibax_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibay is
			-- Create a new GIBAY error.
		do
			code := gibay_template_code
			etl_code := gibay_etl_code
			default_template := gibay_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibaz is
			-- Create a new GIBAZ error.
		do
			code := gibaz_template_code
			etl_code := gibaz_etl_code
			default_template := gibaz_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibba is
			-- Create a new GIBBA error.
		do
			code := gibba_template_code
			etl_code := gibba_etl_code
			default_template := gibba_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbb is
			-- Create a new GIBBB error.
		do
			code := gibbb_template_code
			etl_code := gibbb_etl_code
			default_template := gibbb_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbc is
			-- Create a new GIBBC error.
		do
			code := gibbc_template_code
			etl_code := gibbc_etl_code
			default_template := gibbc_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbd is
			-- Create a new GIBBD error.
		do
			code := gibbd_template_code
			etl_code := gibbd_etl_code
			default_template := gibbd_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbe is
			-- Create a new GIBBE error.
		do
			code := gibbe_template_code
			etl_code := gibbe_etl_code
			default_template := gibbe_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbf is
			-- Create a new GIBBF error.
		do
			code := gibbf_template_code
			etl_code := gibbf_etl_code
			default_template := gibbf_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbg is
			-- Create a new GIBBG error.
		do
			code := gibbg_template_code
			etl_code := gibbg_etl_code
			default_template := gibbg_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbh is
			-- Create a new GIBBH error.
		do
			code := gibbh_template_code
			etl_code := gibbh_etl_code
			default_template := gibbh_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbi is
			-- Create a new GIBBI error.
		do
			code := gibbi_template_code
			etl_code := gibbi_etl_code
			default_template := gibbi_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbj is
			-- Create a new GIBBJ error.
		do
			code := gibbj_template_code
			etl_code := gibbj_etl_code
			default_template := gibbj_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbk is
			-- Create a new GIBBK error.
		do
			code := gibbk_template_code
			etl_code := gibbk_etl_code
			default_template := gibbk_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbl is
			-- Create a new GIBBL error.
		do
			code := gibbl_template_code
			etl_code := gibbl_etl_code
			default_template := gibbl_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbm is
			-- Create a new GIBBM error.
		do
			code := gibbm_template_code
			etl_code := gibbm_etl_code
			default_template := gibbm_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbn is
			-- Create a new GIBBN error.
		do
			code := gibbn_template_code
			etl_code := gibbn_etl_code
			default_template := gibbn_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbo is
			-- Create a new GIBBO error.
		do
			code := gibbo_template_code
			etl_code := gibbo_etl_code
			default_template := gibbo_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbp is
			-- Create a new GIBBP error.
		do
			code := gibbp_template_code
			etl_code := gibbp_etl_code
			default_template := gibbp_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbq is
			-- Create a new GIBBQ error.
		do
			code := gibbq_template_code
			etl_code := gibbq_etl_code
			default_template := gibbq_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbr is
			-- Create a new GIBBR error.
		do
			code := gibbr_template_code
			etl_code := gibbr_etl_code
			default_template := gibbr_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbs is
			-- Create a new GIBBS error.
		do
			code := gibbs_template_code
			etl_code := gibbs_etl_code
			default_template := gibbs_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbt is
			-- Create a new GIBBT error.
		do
			code := gibbt_template_code
			etl_code := gibbt_etl_code
			default_template := gibbt_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbu is
			-- Create a new GIBBU error.
		do
			code := gibbu_template_code
			etl_code := gibbu_etl_code
			default_template := gibbu_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbv is
			-- Create a new GIBBV error.
		do
			code := gibbv_template_code
			etl_code := gibbv_etl_code
			default_template := gibbv_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbw is
			-- Create a new GIBBW error.
		do
			code := gibbw_template_code
			etl_code := gibbw_etl_code
			default_template := gibbw_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbx is
			-- Create a new GIBBX error.
		do
			code := gibbx_template_code
			etl_code := gibbx_etl_code
			default_template := gibbx_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibby is
			-- Create a new GIBBY error.
		do
			code := gibby_template_code
			etl_code := gibby_etl_code
			default_template := gibby_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibbz is
			-- Create a new GIBBZ error.
		do
			code := gibbz_template_code
			etl_code := gibbz_etl_code
			default_template := gibbz_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibca is
			-- Create a new GIBCA error.
		do
			code := gibca_template_code
			etl_code := gibca_etl_code
			default_template := gibca_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibcb is
			-- Create a new GIBCB error.
		do
			code := gibcb_template_code
			etl_code := gibcb_etl_code
			default_template := gibcb_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

	make_gibcc is
			-- Create a new GIBCC error.
		do
			code := gibcc_template_code
			etl_code := gibcc_etl_code
			default_template := gibcc_default_template
			create parameters.make (1, 1)
			parameters.put (etl_code, 1)
		ensure
			-- dollar0: $0 = program name
			-- dollar1: $1 = ETL code
		end

feature {NONE} -- Implementation

	giaaa_default_template: STRING is "[$1] internal error."
	giaab_default_template: STRING is "[$1] internal error."
	giaac_default_template: STRING is "[$1] internal error."
	giaad_default_template: STRING is "[$1] internal error."
	giaae_default_template: STRING is "[$1] internal error."
	giaaf_default_template: STRING is "[$1] internal error."
	giaag_default_template: STRING is "[$1] internal error."
	giaah_default_template: STRING is "[$1] internal error."
	giaai_default_template: STRING is "[$1] internal error."
	giaaj_default_template: STRING is "[$1] internal error."
	giaak_default_template: STRING is "[$1] internal error."
	giaal_default_template: STRING is "[$1] internal error."
	giaam_default_template: STRING is "[$1] internal error."
	giaan_default_template: STRING is "[$1] internal error."
	giaao_default_template: STRING is "[$1] internal error."
	giaap_default_template: STRING is "[$1] internal error."
	giaaq_default_template: STRING is "[$1] internal error."
	giaar_default_template: STRING is "[$1] internal error."
	giaas_default_template: STRING is "[$1] internal error."
	giaat_default_template: STRING is "[$1] internal error."
	giaau_default_template: STRING is "[$1] internal error."
	giaav_default_template: STRING is "[$1] internal error."
	giaaw_default_template: STRING is "[$1] internal error."
	giaax_default_template: STRING is "[$1] internal error."
	giaay_default_template: STRING is "[$1] internal error."
	giaaz_default_template: STRING is "[$1] internal error."
	giaba_default_template: STRING is "[$1] internal error."
	giabb_default_template: STRING is "[$1] internal error."
	giabc_default_template: STRING is "[$1] internal error."
	giabd_default_template: STRING is "[$1] internal error."
	giabe_default_template: STRING is "[$1] internal error."
	giabf_default_template: STRING is "[$1] internal error."
	giabg_default_template: STRING is "[$1] internal error."
	giabh_default_template: STRING is "[$1] internal error."
	giabi_default_template: STRING is "[$1] internal error."
	giabj_default_template: STRING is "[$1] internal error."
	giabk_default_template: STRING is "[$1] internal error."
	giabl_default_template: STRING is "[$1] internal error."
	giabm_default_template: STRING is "[$1] internal error."
	giabn_default_template: STRING is "[$1] internal error."
	giabo_default_template: STRING is "[$1] internal error."
	giabp_default_template: STRING is "[$1] internal error."
	giabq_default_template: STRING is "[$1] internal error."
	giabr_default_template: STRING is "[$1] internal error."
	giabs_default_template: STRING is "[$1] internal error."
	giabt_default_template: STRING is "[$1] internal error."
	giabu_default_template: STRING is "[$1] internal error."
	giabv_default_template: STRING is "[$1] internal error."
	giabw_default_template: STRING is "[$1] internal error."
	giabx_default_template: STRING is "[$1] internal error."
	giaby_default_template: STRING is "[$1] internal error."
	giabz_default_template: STRING is "[$1] internal error."
	giaca_default_template: STRING is "[$1] internal error."
	giacb_default_template: STRING is "[$1] internal error."
	giacc_default_template: STRING is "[$1] internal error."
	giacd_default_template: STRING is "[$1] internal error."
	giace_default_template: STRING is "[$1] internal error."
	giacf_default_template: STRING is "[$1] internal error."
	giacg_default_template: STRING is "[$1] internal error."
	giach_default_template: STRING is "[$1] internal error."
	giaci_default_template: STRING is "[$1] internal error."
	giacj_default_template: STRING is "[$1] internal error."
	giack_default_template: STRING is "[$1] internal error."
	giacl_default_template: STRING is "[$1] internal error."
	giacm_default_template: STRING is "[$1] internal error."
	giacn_default_template: STRING is "[$1] internal error."
	giaco_default_template: STRING is "[$1] internal error."
	giacp_default_template: STRING is "[$1] internal error."
	giacq_default_template: STRING is "[$1] internal error."
	giacr_default_template: STRING is "[$1] internal error."
	giacs_default_template: STRING is "[$1] internal error."
	giact_default_template: STRING is "[$1] internal error."
	giacu_default_template: STRING is "[$1] internal error."
	giacv_default_template: STRING is "[$1] internal error."
	giacw_default_template: STRING is "[$1] internal error."
	giacx_default_template: STRING is "[$1] internal error."
	giacy_default_template: STRING is "[$1] internal error."
	giacz_default_template: STRING is "[$1] internal error."
	giada_default_template: STRING is "[$1] internal error."
	giadb_default_template: STRING is "[$1] internal error."
	giadc_default_template: STRING is "[$1] internal error."
	giadd_default_template: STRING is "[$1] internal error."
	giade_default_template: STRING is "[$1] internal error."
	giadf_default_template: STRING is "[$1] internal error."
	giadg_default_template: STRING is "[$1] internal error."
	giadh_default_template: STRING is "[$1] internal error."
	giadi_default_template: STRING is "[$1] internal error."
	giadj_default_template: STRING is "[$1] internal error."
	giadk_default_template: STRING is "[$1] internal error."
	giadl_default_template: STRING is "[$1] internal error."
	giadm_default_template: STRING is "[$1] internal error."
	giadn_default_template: STRING is "[$1] internal error."
	giado_default_template: STRING is "[$1] internal error."
	giadp_default_template: STRING is "[$1] internal error."
	giadq_default_template: STRING is "[$1] internal error."
	giadr_default_template: STRING is "[$1] internal error."
	giads_default_template: STRING is "[$1] internal error."
	giadt_default_template: STRING is "[$1] internal error."
	giadu_default_template: STRING is "[$1] internal error."
	giadv_default_template: STRING is "[$1] internal error."
	giadw_default_template: STRING is "[$1] internal error."
	giadx_default_template: STRING is "[$1] internal error."
	giady_default_template: STRING is "[$1] internal error."
	giadz_default_template: STRING is "[$1] internal error."
	giaea_default_template: STRING is "[$1] internal error."
	giaeb_default_template: STRING is "[$1] internal error."
	giaec_default_template: STRING is "[$1] internal error."
	giaed_default_template: STRING is "[$1] internal error."
	gibaa_default_template: STRING is "[$1] internal error."
	gibab_default_template: STRING is "[$1] internal error."
	gibac_default_template: STRING is "[$1] internal error."
	gibad_default_template: STRING is "[$1] internal error."
	gibae_default_template: STRING is "[$1] internal error."
	gibaf_default_template: STRING is "[$1] internal error."
	gibag_default_template: STRING is "[$1] internal error."
	gibah_default_template: STRING is "[$1] internal error."
	gibai_default_template: STRING is "[$1] internal error."
	gibaj_default_template: STRING is "[$1] internal error."
	gibak_default_template: STRING is "[$1] internal error."
	gibal_default_template: STRING is "[$1] internal error."
	gibam_default_template: STRING is "[$1] internal error."
	giban_default_template: STRING is "[$1] internal error."
	gibao_default_template: STRING is "[$1] internal error."
	gibap_default_template: STRING is "[$1] internal error."
	gibaq_default_template: STRING is "[$1] internal error."
	gibar_default_template: STRING is "[$1] internal error."
	gibas_default_template: STRING is "[$1] internal error."
	gibat_default_template: STRING is "[$1] internal error."
	gibau_default_template: STRING is "[$1] internal error."
	gibav_default_template: STRING is "[$1] internal error."
	gibaw_default_template: STRING is "[$1] internal error."
	gibax_default_template: STRING is "[$1] internal error."
	gibay_default_template: STRING is "[$1] internal error."
	gibaz_default_template: STRING is "[$1] internal error."
	gibba_default_template: STRING is "[$1] internal error."
	gibbb_default_template: STRING is "[$1] internal error."
	gibbc_default_template: STRING is "[$1] internal error."
	gibbd_default_template: STRING is "[$1] internal error."
	gibbe_default_template: STRING is "[$1] internal error."
	gibbf_default_template: STRING is "[$1] internal error."
	gibbg_default_template: STRING is "[$1] internal error."
	gibbh_default_template: STRING is "[$1] internal error."
	gibbi_default_template: STRING is "[$1] internal error."
	gibbj_default_template: STRING is "[$1] internal error."
	gibbk_default_template: STRING is "[$1] internal error."
	gibbl_default_template: STRING is "[$1] internal error."
	gibbm_default_template: STRING is "[$1] internal error."
	gibbn_default_template: STRING is "[$1] internal error."
	gibbo_default_template: STRING is "[$1] internal error."
	gibbp_default_template: STRING is "[$1] internal error."
	gibbq_default_template: STRING is "[$1] internal error."
	gibbr_default_template: STRING is "[$1] internal error."
	gibbs_default_template: STRING is "[$1] internal error."
	gibbt_default_template: STRING is "[$1] internal error."
	gibbu_default_template: STRING is "[$1] internal error."
	gibbv_default_template: STRING is "[$1] internal error."
	gibbw_default_template: STRING is "[$1] internal error."
	gibbx_default_template: STRING is "[$1] internal error."
	gibby_default_template: STRING is "[$1] internal error."
	gibbz_default_template: STRING is "[$1] internal error."
	gibca_default_template: STRING is "[$1] internal error."
	gibcb_default_template: STRING is "[$1] internal error."
	gibcc_default_template: STRING is "[$1] internal error."
			-- Default templates

	giaaa_etl_code: STRING is "GIAAA"
	giaab_etl_code: STRING is "GIAAB"
	giaac_etl_code: STRING is "GIAAC"
	giaad_etl_code: STRING is "GIAAD"
	giaae_etl_code: STRING is "GIAAE"
	giaaf_etl_code: STRING is "GIAAF"
	giaag_etl_code: STRING is "GIAAG"
	giaah_etl_code: STRING is "GIAAH"
	giaai_etl_code: STRING is "GIAAI"
	giaaj_etl_code: STRING is "GIAAJ"
	giaak_etl_code: STRING is "GIAAK"
	giaal_etl_code: STRING is "GIAAL"
	giaam_etl_code: STRING is "GIAAM"
	giaan_etl_code: STRING is "GIAAN"
	giaao_etl_code: STRING is "GIAAO"
	giaap_etl_code: STRING is "GIAAP"
	giaaq_etl_code: STRING is "GIAAQ"
	giaar_etl_code: STRING is "GIAAR"
	giaas_etl_code: STRING is "GIAAS"
	giaat_etl_code: STRING is "GIAAT"
	giaau_etl_code: STRING is "GIAAU"
	giaav_etl_code: STRING is "GIAAV"
	giaaw_etl_code: STRING is "GIAAW"
	giaax_etl_code: STRING is "GIAAX"
	giaay_etl_code: STRING is "GIAAY"
	giaaz_etl_code: STRING is "GIAAZ"
	giaba_etl_code: STRING is "GIABA"
	giabb_etl_code: STRING is "GIABB"
	giabc_etl_code: STRING is "GIABC"
	giabd_etl_code: STRING is "GIABD"
	giabe_etl_code: STRING is "GIABE"
	giabf_etl_code: STRING is "GIABF"
	giabg_etl_code: STRING is "GIABG"
	giabh_etl_code: STRING is "GIABH"
	giabi_etl_code: STRING is "GIABI"
	giabj_etl_code: STRING is "GIABJ"
	giabk_etl_code: STRING is "GIABK"
	giabl_etl_code: STRING is "GIABL"
	giabm_etl_code: STRING is "GIABM"
	giabn_etl_code: STRING is "GIABN"
	giabo_etl_code: STRING is "GIABO"
	giabp_etl_code: STRING is "GIABP"
	giabq_etl_code: STRING is "GIABQ"
	giabr_etl_code: STRING is "GIABR"
	giabs_etl_code: STRING is "GIABS"
	giabt_etl_code: STRING is "GIABT"
	giabu_etl_code: STRING is "GIABU"
	giabv_etl_code: STRING is "GIABV"
	giabw_etl_code: STRING is "GIABW"
	giabx_etl_code: STRING is "GIABX"
	giaby_etl_code: STRING is "GIABY"
	giabz_etl_code: STRING is "GIABZ"
	giaca_etl_code: STRING is "GIACA"
	giacb_etl_code: STRING is "GIACB"
	giacc_etl_code: STRING is "GIACC"
	giacd_etl_code: STRING is "GIACD"
	giace_etl_code: STRING is "GIACE"
	giacf_etl_code: STRING is "GIACF"
	giacg_etl_code: STRING is "GIACG"
	giach_etl_code: STRING is "GIACH"
	giaci_etl_code: STRING is "GIACI"
	giacj_etl_code: STRING is "GIACJ"
	giack_etl_code: STRING is "GIACK"
	giacl_etl_code: STRING is "GIACL"
	giacm_etl_code: STRING is "GIACM"
	giacn_etl_code: STRING is "GIACN"
	giaco_etl_code: STRING is "GIACO"
	giacp_etl_code: STRING is "GIACP"
	giacq_etl_code: STRING is "GIACQ"
	giacr_etl_code: STRING is "GIACR"
	giacs_etl_code: STRING is "GIACS"
	giact_etl_code: STRING is "GIACT"
	giacu_etl_code: STRING is "GIACU"
	giacv_etl_code: STRING is "GIACV"
	giacw_etl_code: STRING is "GIACW"
	giacx_etl_code: STRING is "GIACX"
	giacy_etl_code: STRING is "GIACY"
	giacz_etl_code: STRING is "GIACZ"
	giada_etl_code: STRING is "GIADA"
	giadb_etl_code: STRING is "GIADB"
	giadc_etl_code: STRING is "GIADC"
	giadd_etl_code: STRING is "GIADD"
	giade_etl_code: STRING is "GIADE"
	giadf_etl_code: STRING is "GIADF"
	giadg_etl_code: STRING is "GIADG"
	giadh_etl_code: STRING is "GIADH"
	giadi_etl_code: STRING is "GIADI"
	giadj_etl_code: STRING is "GIADJ"
	giadk_etl_code: STRING is "GIADK"
	giadl_etl_code: STRING is "GIADL"
	giadm_etl_code: STRING is "GIADM"
	giadn_etl_code: STRING is "GIADN"
	giado_etl_code: STRING is "GIADO"
	giadp_etl_code: STRING is "GIADP"
	giadq_etl_code: STRING is "GIADQ"
	giadr_etl_code: STRING is "GIADR"
	giads_etl_code: STRING is "GIADS"
	giadt_etl_code: STRING is "GIADT"
	giadu_etl_code: STRING is "GIADU"
	giadv_etl_code: STRING is "GIADV"
	giadw_etl_code: STRING is "GIADW"
	giadx_etl_code: STRING is "GIADX"
	giady_etl_code: STRING is "GIADY"
	giadz_etl_code: STRING is "GIADZ"
	giaea_etl_code: STRING is "GIAEA"
	giaeb_etl_code: STRING is "GIAEB"
	giaec_etl_code: STRING is "GIAEC"
	giaed_etl_code: STRING is "GIAED"
	gibaa_etl_code: STRING is "GIBAA"
	gibab_etl_code: STRING is "GIBAB"
	gibac_etl_code: STRING is "GIBAC"
	gibad_etl_code: STRING is "GIBAD"
	gibae_etl_code: STRING is "GIBAE"
	gibaf_etl_code: STRING is "GIBAF"
	gibag_etl_code: STRING is "GIBAG"
	gibah_etl_code: STRING is "GIBAH"
	gibai_etl_code: STRING is "GIBAI"
	gibaj_etl_code: STRING is "GIBAJ"
	gibak_etl_code: STRING is "GIBAK"
	gibal_etl_code: STRING is "GIBAL"
	gibam_etl_code: STRING is "GIBAM"
	giban_etl_code: STRING is "GIBAN"
	gibao_etl_code: STRING is "GIBAO"
	gibap_etl_code: STRING is "GIBAP"
	gibaq_etl_code: STRING is "GIBAQ"
	gibar_etl_code: STRING is "GIBAR"
	gibas_etl_code: STRING is "GIBAS"
	gibat_etl_code: STRING is "GIBAT"
	gibau_etl_code: STRING is "GIBAU"
	gibav_etl_code: STRING is "GIBAV"
	gibaw_etl_code: STRING is "GIBAW"
	gibax_etl_code: STRING is "GIBAX"
	gibay_etl_code: STRING is "GIBAY"
	gibaz_etl_code: STRING is "GIBAZ"
	gibba_etl_code: STRING is "GIBBA"
	gibbb_etl_code: STRING is "GIBBB"
	gibbc_etl_code: STRING is "GIBBC"
	gibbd_etl_code: STRING is "GIBBD"
	gibbe_etl_code: STRING is "GIBBE"
	gibbf_etl_code: STRING is "GIBBF"
	gibbg_etl_code: STRING is "GIBBG"
	gibbh_etl_code: STRING is "GIBBH"
	gibbi_etl_code: STRING is "GIBBI"
	gibbj_etl_code: STRING is "GIBBJ"
	gibbk_etl_code: STRING is "GIBBK"
	gibbl_etl_code: STRING is "GIBBL"
	gibbm_etl_code: STRING is "GIBBM"
	gibbn_etl_code: STRING is "GIBBN"
	gibbo_etl_code: STRING is "GIBBO"
	gibbp_etl_code: STRING is "GIBBP"
	gibbq_etl_code: STRING is "GIBBQ"
	gibbr_etl_code: STRING is "GIBBR"
	gibbs_etl_code: STRING is "GIBBS"
	gibbt_etl_code: STRING is "GIBBT"
	gibbu_etl_code: STRING is "GIBBU"
	gibbv_etl_code: STRING is "GIBBV"
	gibbw_etl_code: STRING is "GIBBW"
	gibbx_etl_code: STRING is "GIBBX"
	gibby_etl_code: STRING is "GIBBY"
	gibbz_etl_code: STRING is "GIBBZ"
	gibca_etl_code: STRING is "GIBCA"
	gibcb_etl_code: STRING is "GIBCB"
	gibcc_etl_code: STRING is "GIBCC"
			-- ETL validity codes

	giaaa_template_code: STRING is "giaaa"
	giaab_template_code: STRING is "giaab"
	giaac_template_code: STRING is "giaac"
	giaad_template_code: STRING is "giaad"
	giaae_template_code: STRING is "giaae"
	giaaf_template_code: STRING is "giaaf"
	giaag_template_code: STRING is "giaag"
	giaah_template_code: STRING is "giaah"
	giaai_template_code: STRING is "giaai"
	giaaj_template_code: STRING is "giaaj"
	giaak_template_code: STRING is "giaak"
	giaal_template_code: STRING is "giaal"
	giaam_template_code: STRING is "giaam"
	giaan_template_code: STRING is "giaan"
	giaao_template_code: STRING is "giaao"
	giaap_template_code: STRING is "giaap"
	giaaq_template_code: STRING is "giaaq"
	giaar_template_code: STRING is "giaar"
	giaas_template_code: STRING is "giaas"
	giaat_template_code: STRING is "giaat"
	giaau_template_code: STRING is "giaau"
	giaav_template_code: STRING is "giaav"
	giaaw_template_code: STRING is "giaaw"
	giaax_template_code: STRING is "giaax"
	giaay_template_code: STRING is "giaay"
	giaaz_template_code: STRING is "giaaz"
	giaba_template_code: STRING is "giaba"
	giabb_template_code: STRING is "giabb"
	giabc_template_code: STRING is "giabc"
	giabd_template_code: STRING is "giabd"
	giabe_template_code: STRING is "giabe"
	giabf_template_code: STRING is "giabf"
	giabg_template_code: STRING is "giabg"
	giabh_template_code: STRING is "giabh"
	giabi_template_code: STRING is "giabi"
	giabj_template_code: STRING is "giabj"
	giabk_template_code: STRING is "giabk"
	giabl_template_code: STRING is "giabl"
	giabm_template_code: STRING is "giabm"
	giabn_template_code: STRING is "giabn"
	giabo_template_code: STRING is "giabo"
	giabp_template_code: STRING is "giabp"
	giabq_template_code: STRING is "giabq"
	giabr_template_code: STRING is "giabr"
	giabs_template_code: STRING is "giabs"
	giabt_template_code: STRING is "giabt"
	giabu_template_code: STRING is "giabu"
	giabv_template_code: STRING is "giabv"
	giabw_template_code: STRING is "giabw"
	giabx_template_code: STRING is "giabx"
	giaby_template_code: STRING is "giaby"
	giabz_template_code: STRING is "giabz"
	giaca_template_code: STRING is "giaca"
	giacb_template_code: STRING is "giacb"
	giacc_template_code: STRING is "giacc"
	giacd_template_code: STRING is "giacd"
	giace_template_code: STRING is "giace"
	giacf_template_code: STRING is "giacf"
	giacg_template_code: STRING is "giacg"
	giach_template_code: STRING is "giach"
	giaci_template_code: STRING is "giaci"
	giacj_template_code: STRING is "giacj"
	giack_template_code: STRING is "giack"
	giacl_template_code: STRING is "giacl"
	giacm_template_code: STRING is "giacm"
	giacn_template_code: STRING is "giacn"
	giaco_template_code: STRING is "giaco"
	giacp_template_code: STRING is "giacp"
	giacq_template_code: STRING is "giacq"
	giacr_template_code: STRING is "giacr"
	giacs_template_code: STRING is "giacs"
	giact_template_code: STRING is "giact"
	giacu_template_code: STRING is "giacu"
	giacv_template_code: STRING is "giacv"
	giacw_template_code: STRING is "giacw"
	giacx_template_code: STRING is "giacx"
	giacy_template_code: STRING is "giacy"
	giacz_template_code: STRING is "giacz"
	giada_template_code: STRING is "giada"
	giadb_template_code: STRING is "giadb"
	giadc_template_code: STRING is "giadc"
	giadd_template_code: STRING is "giadd"
	giade_template_code: STRING is "giade"
	giadf_template_code: STRING is "giadf"
	giadg_template_code: STRING is "giadg"
	giadh_template_code: STRING is "giadh"
	giadi_template_code: STRING is "giadi"
	giadj_template_code: STRING is "giadj"
	giadk_template_code: STRING is "giadk"
	giadl_template_code: STRING is "giadl"
	giadm_template_code: STRING is "giadm"
	giadn_template_code: STRING is "giadn"
	giado_template_code: STRING is "giado"
	giadp_template_code: STRING is "giadp"
	giadq_template_code: STRING is "giadq"
	giadr_template_code: STRING is "giadr"
	giads_template_code: STRING is "giads"
	giadt_template_code: STRING is "giadt"
	giadu_template_code: STRING is "giadu"
	giadv_template_code: STRING is "giadv"
	giadw_template_code: STRING is "giadw"
	giadx_template_code: STRING is "giadx"
	giady_template_code: STRING is "giady"
	giadz_template_code: STRING is "giadz"
	giaea_template_code: STRING is "giaea"
	giaeb_template_code: STRING is "giaeb"
	giaec_template_code: STRING is "giaec"
	giaed_template_code: STRING is "giaed"
	gibaa_template_code: STRING is "gibaa"
	gibab_template_code: STRING is "gibab"
	gibac_template_code: STRING is "gibac"
	gibad_template_code: STRING is "gibad"
	gibae_template_code: STRING is "gibae"
	gibaf_template_code: STRING is "gibaf"
	gibag_template_code: STRING is "gibag"
	gibah_template_code: STRING is "gibah"
	gibai_template_code: STRING is "gibai"
	gibaj_template_code: STRING is "gibaj"
	gibak_template_code: STRING is "gibak"
	gibal_template_code: STRING is "gibal"
	gibam_template_code: STRING is "gibam"
	giban_template_code: STRING is "giban"
	gibao_template_code: STRING is "gibao"
	gibap_template_code: STRING is "gibap"
	gibaq_template_code: STRING is "gibaq"
	gibar_template_code: STRING is "gibar"
	gibas_template_code: STRING is "gibas"
	gibat_template_code: STRING is "gibat"
	gibau_template_code: STRING is "gibau"
	gibav_template_code: STRING is "gibav"
	gibaw_template_code: STRING is "gibaw"
	gibax_template_code: STRING is "gibax"
	gibay_template_code: STRING is "gibay"
	gibaz_template_code: STRING is "gibaz"
	gibba_template_code: STRING is "gibba"
	gibbb_template_code: STRING is "gibbb"
	gibbc_template_code: STRING is "gibbc"
	gibbd_template_code: STRING is "gibbd"
	gibbe_template_code: STRING is "gibbe"
	gibbf_template_code: STRING is "gibbf"
	gibbg_template_code: STRING is "gibbg"
	gibbh_template_code: STRING is "gibbh"
	gibbi_template_code: STRING is "gibbi"
	gibbj_template_code: STRING is "gibbj"
	gibbk_template_code: STRING is "gibbk"
	gibbl_template_code: STRING is "gibbl"
	gibbm_template_code: STRING is "gibbm"
	gibbn_template_code: STRING is "gibbn"
	gibbo_template_code: STRING is "gibbo"
	gibbp_template_code: STRING is "gibbp"
	gibbq_template_code: STRING is "gibbq"
	gibbr_template_code: STRING is "gibbr"
	gibbs_template_code: STRING is "gibbs"
	gibbt_template_code: STRING is "gibbt"
	gibbu_template_code: STRING is "gibbu"
	gibbv_template_code: STRING is "gibbv"
	gibbw_template_code: STRING is "gibbw"
	gibbx_template_code: STRING is "gibbx"
	gibby_template_code: STRING is "gibby"
	gibbz_template_code: STRING is "gibbz"
	gibca_template_code: STRING is "gibca"
	gibcb_template_code: STRING is "gibcb"
	gibcc_template_code: STRING is "gibcc"
			-- Template error codes

end
