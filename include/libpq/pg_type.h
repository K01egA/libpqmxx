/*-------------------------------------------------------------------------
 *
 * pg_type.h
 *	  Hard-wired knowledge about some standard type OIDs.
 *
 * XXX keep this in sync with src/include/catalog/pg_type.h
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/interfaces/ecpg/ecpglib/pg_type.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_TYPE_H
#define PG_TYPE_H

#define 	BOOLOID   16
#define 	BYTEAOID   17
#define 	CHAROID   18
#define 	NAMEOID   19
#define 	INT8OID   20
#define 	INT2OID   21
#define 	INT2VECTOROID   22
#define 	INT4OID   23
#define 	REGPROCOID   24
#define 	TEXTOID   25
#define 	OIDOID   26
#define 	TIDOID   27
#define 	XIDOID   28
#define 	CIDOID   29
#define 	OIDVECTOROID   30
#define 	JSONOID   114
#define 	XMLOID   142
#define 	PGNODETREEOID   194
#define 	PGDDLCOMMANDOID   32
#define 	POINTOID   600
#define 	LSEGOID   601
#define 	PATHOID   602
#define 	BOXOID   603
#define 	POLYGONOID   604
#define 	LINEOID   628
#define 	FLOAT4OID   700
#define 	FLOAT8OID   701
#define 	ABSTIMEOID   702
#define 	RELTIMEOID   703
#define 	TINTERVALOID   704
#define 	UNKNOWNOID   705
#define 	CIRCLEOID   718
#define 	CASHOID   790
#define 	MACADDROID   829
#define 	INETOID   869
#define 	CIDROID   650
#define 	INT2ARRAYOID   1005
#define 	INT4ARRAYOID   1007
#define 	TEXTARRAYOID   1009
#define 	OIDARRAYOID   1028
#define 	FLOAT4ARRAYOID   1021
#define 	ACLITEMOID   1033
#define 	CSTRINGARRAYOID   1263
#define 	BPCHAROID   1042
#define 	VARCHAROID   1043
#define 	DATEOID   1082
#define 	TIMEOID   1083
#define 	TIMESTAMPOID   1114
#define 	TIMESTAMPTZOID   1184
#define 	INTERVALOID   1186
#define 	TIMETZOID   1266
#define 	BITOID   1560
#define 	VARBITOID   1562
#define 	NUMERICOID   1700
#define 	REFCURSOROID   1790
#define 	REGPROCEDUREOID   2202
#define 	REGOPEROID   2203
#define 	REGOPERATOROID   2204
#define 	REGCLASSOID   2205
#define 	REGTYPEOID   2206
#define 	REGROLEOID   4096
#define 	REGNAMESPACEOID   4089
#define 	REGTYPEARRAYOID   2211
#define 	UUIDOID   2950
#define 	LSNOID   3220
#define 	TSVECTOROID   3614
#define 	GTSVECTOROID   3642
#define 	TSQUERYOID   3615
#define 	REGCONFIGOID   3734
#define 	REGDICTIONARYOID   3769
#define 	JSONBOID   3802
#define 	INT4RANGEOID   3904
#define 	RECORDOID   2249
#define 	RECORDARRAYOID   2287
#define 	CSTRINGOID   2275
#define 	ANYOID   2276
#define 	ANYARRAYOID   2277
#define 	VOIDOID   2278
#define 	TRIGGEROID   2279
#define 	EVTTRIGGEROID   3838
#define 	LANGUAGE_HANDLEROID   2280
#define 	INTERNALOID   2281
#define 	OPAQUEOID   2282
#define 	ANYELEMENTOID   2283
#define 	ANYNONARRAYOID   2776
#define 	ANYENUMOID   3500
#define 	FDW_HANDLEROID   3115
#define 	INDEX_AM_HANDLEROID   325
#define 	TSM_HANDLEROID   3310
#define 	ANYRANGEOID   3831
#define 	TYPTYPE_BASE   'b' /* base type (ordinary scalar type) */
#define 	TYPTYPE_COMPOSITE   'c' /* composite (e.g., table's rowtype) */
#define 	TYPTYPE_DOMAIN   'd' /* domain over another type */
#define 	TYPTYPE_ENUM   'e' /* enumerated type */
#define 	TYPTYPE_PSEUDO   'p' /* pseudo-type */
#define 	TYPTYPE_RANGE   'r' /* range type */
#define 	TYPCATEGORY_INVALID   '\0'	/* not an allowed category */
#define 	TYPCATEGORY_ARRAY   'A'
#define 	TYPCATEGORY_BOOLEAN   'B'
#define 	TYPCATEGORY_COMPOSITE   'C'
#define 	TYPCATEGORY_DATETIME   'D'
#define 	TYPCATEGORY_ENUM   'E'
#define 	TYPCATEGORY_GEOMETRIC   'G'
#define 	TYPCATEGORY_NETWORK   'I'	/* think INET */
#define 	TYPCATEGORY_NUMERIC   'N'
#define 	TYPCATEGORY_PSEUDOTYPE   'P'
#define 	TYPCATEGORY_RANGE   'R'
#define 	TYPCATEGORY_STRING   'S'
#define 	TYPCATEGORY_TIMESPAN   'T'
#define 	TYPCATEGORY_USER   'U'
#define 	TYPCATEGORY_BITSTRING   'V'	/* er ... "varbit"? */
#define 	TYPCATEGORY_UNKNOWN   'X'

#endif   /* PG_TYPE_H */
