/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example`
 */

#include "NeighborCell-Item-Choice-E-UTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_version_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_x2_Xn_established_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_x2_Xn_established_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_hO_validated_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_hO_validated_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_version_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_version_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16,  16,  1,  65535 }	/* (1..65535,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_x2_Xn_established_value2enum_6[] = {
	{ 0,	4,	"true" },
	{ 1,	5,	"false" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_x2_Xn_established_enum2value_6[] = {
	1,	/* false(1) */
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_x2_Xn_established_specs_6 = {
	asn_MAP_x2_Xn_established_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_x2_Xn_established_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_x2_Xn_established_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_x2_Xn_established_6 = {
	"x2-Xn-established",
	"x2-Xn-established",
	&asn_OP_NativeEnumerated,
	asn_DEF_x2_Xn_established_tags_6,
	sizeof(asn_DEF_x2_Xn_established_tags_6)
		/sizeof(asn_DEF_x2_Xn_established_tags_6[0]) - 1, /* 1 */
	asn_DEF_x2_Xn_established_tags_6,	/* Same as above */
	sizeof(asn_DEF_x2_Xn_established_tags_6)
		/sizeof(asn_DEF_x2_Xn_established_tags_6[0]), /* 2 */
	{ &asn_OER_type_x2_Xn_established_constr_6, &asn_PER_type_x2_Xn_established_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_x2_Xn_established_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_hO_validated_value2enum_10[] = {
	{ 0,	4,	"true" },
	{ 1,	5,	"false" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_hO_validated_enum2value_10[] = {
	1,	/* false(1) */
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_hO_validated_specs_10 = {
	asn_MAP_hO_validated_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_hO_validated_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hO_validated_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hO_validated_10 = {
	"hO-validated",
	"hO-validated",
	&asn_OP_NativeEnumerated,
	asn_DEF_hO_validated_tags_10,
	sizeof(asn_DEF_hO_validated_tags_10)
		/sizeof(asn_DEF_hO_validated_tags_10[0]) - 1, /* 1 */
	asn_DEF_hO_validated_tags_10,	/* Same as above */
	sizeof(asn_DEF_hO_validated_tags_10)
		/sizeof(asn_DEF_hO_validated_tags_10[0]), /* 2 */
	{ &asn_OER_type_hO_validated_constr_10, &asn_PER_type_hO_validated_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hO_validated_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NeighborCell_Item_Choice_E_UTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, eUTRA_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-CGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, eUTRA_PCI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_UTRA_PCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-PCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, eUTRA_ARFCN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_UTRA_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-ARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, eUTRA_TAC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_UTRA_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRA-TAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, x2_Xn_established),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_x2_Xn_established_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"x2-Xn-established"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, hO_validated),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hO_validated_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hO-validated"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_E_UTRA, version),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_version_constr_14, &asn_PER_memb_version_constr_14,  memb_version_constraint_1 },
		0, 0, /* No default value */
		"version"
		},
};
static const ber_tlv_tag_t asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighborCell_Item_Choice_E_UTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRA-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eUTRA-PCI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eUTRA-ARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eUTRA-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* x2-Xn-established */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* hO-validated */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* version */
};
asn_SEQUENCE_specifics_t asn_SPC_NeighborCell_Item_Choice_E_UTRA_specs_1 = {
	sizeof(struct NeighborCell_Item_Choice_E_UTRA),
	offsetof(struct NeighborCell_Item_Choice_E_UTRA, _asn_ctx),
	asn_MAP_NeighborCell_Item_Choice_E_UTRA_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NeighborCell_Item_Choice_E_UTRA = {
	"NeighborCell-Item-Choice-E-UTRA",
	"NeighborCell-Item-Choice-E-UTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1,
	sizeof(asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1)
		/sizeof(asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1[0]), /* 1 */
	asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1)
		/sizeof(asn_DEF_NeighborCell_Item_Choice_E_UTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NeighborCell_Item_Choice_E_UTRA_1,
	7,	/* Elements count */
	&asn_SPC_NeighborCell_Item_Choice_E_UTRA_specs_1	/* Additional specs */
};

