/* c/zx-sp11-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_sp11_data_h
#define _c_zx_sp11_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- sp11_AttributeQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_AttributeQuery_EXT
#define zx_sp11_AttributeQuery_EXT
#endif

struct zx_sp11_AttributeQuery_s* zx_DEC_sp11_AttributeQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_AttributeQuery_s* zx_NEW_sp11_AttributeQuery(struct zx_ctx* c);
void zx_FREE_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_AttributeQuery_s* zx_DEEP_CLONE_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);
int zx_WALK_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);
int zx_LEN_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);
char* zx_ENC_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, char* p);
char* zx_ENC_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_AttributeQuery(struct zx_ctx* c, struct zx_sp11_AttributeQuery_s* x);

struct zx_sp11_AttributeQuery_s {
  ZX_ELEM_EXT
  zx_sp11_AttributeQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_AttributeDesignator_s* AttributeDesignator;	/* {0,-1} nada */
  struct zx_str* Resource;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp11_AttributeQuery_GET_Resource(struct zx_sp11_AttributeQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_AttributeQuery_GET_Subject(struct zx_sp11_AttributeQuery_s* x, int n);
struct zx_sa11_AttributeDesignator_s* zx_sp11_AttributeQuery_GET_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n);

int zx_sp11_AttributeQuery_NUM_Subject(struct zx_sp11_AttributeQuery_s* x);
int zx_sp11_AttributeQuery_NUM_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_AttributeQuery_POP_Subject(struct zx_sp11_AttributeQuery_s* x);
struct zx_sa11_AttributeDesignator_s* zx_sp11_AttributeQuery_POP_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x);

void zx_sp11_AttributeQuery_PUSH_Subject(struct zx_sp11_AttributeQuery_s* x, struct zx_sa11_Subject_s* y);
void zx_sp11_AttributeQuery_PUSH_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, struct zx_sa11_AttributeDesignator_s* y);

void zx_sp11_AttributeQuery_PUT_Resource(struct zx_sp11_AttributeQuery_s* x, struct zx_str* y);

void zx_sp11_AttributeQuery_PUT_Subject(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sp11_AttributeQuery_PUT_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_AttributeDesignator_s* y);

void zx_sp11_AttributeQuery_ADD_Subject(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sp11_AttributeQuery_ADD_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n, struct zx_sa11_AttributeDesignator_s* z);

void zx_sp11_AttributeQuery_DEL_Subject(struct zx_sp11_AttributeQuery_s* x, int n);
void zx_sp11_AttributeQuery_DEL_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x, int n);

void zx_sp11_AttributeQuery_REV_Subject(struct zx_sp11_AttributeQuery_s* x);
void zx_sp11_AttributeQuery_REV_AttributeDesignator(struct zx_sp11_AttributeQuery_s* x);

#endif
/* -------------------------- sp11_AuthenticationQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_AuthenticationQuery_EXT
#define zx_sp11_AuthenticationQuery_EXT
#endif

struct zx_sp11_AuthenticationQuery_s* zx_DEC_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_AuthenticationQuery_s* zx_NEW_sp11_AuthenticationQuery(struct zx_ctx* c);
void zx_FREE_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_AuthenticationQuery_s* zx_DEEP_CLONE_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);
int zx_WALK_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);
int zx_LEN_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);
char* zx_ENC_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, char* p);
char* zx_ENC_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_AuthenticationQuery(struct zx_ctx* c, struct zx_sp11_AuthenticationQuery_s* x);

struct zx_sp11_AuthenticationQuery_s {
  ZX_ELEM_EXT
  zx_sp11_AuthenticationQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_str* AuthenticationMethod;	/* {0,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp11_AuthenticationQuery_GET_AuthenticationMethod(struct zx_sp11_AuthenticationQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_AuthenticationQuery_GET_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n);

int zx_sp11_AuthenticationQuery_NUM_Subject(struct zx_sp11_AuthenticationQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_AuthenticationQuery_POP_Subject(struct zx_sp11_AuthenticationQuery_s* x);

void zx_sp11_AuthenticationQuery_PUSH_Subject(struct zx_sp11_AuthenticationQuery_s* x, struct zx_sa11_Subject_s* y);

void zx_sp11_AuthenticationQuery_PUT_AuthenticationMethod(struct zx_sp11_AuthenticationQuery_s* x, struct zx_str* y);

void zx_sp11_AuthenticationQuery_PUT_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n, struct zx_sa11_Subject_s* y);

void zx_sp11_AuthenticationQuery_ADD_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n, struct zx_sa11_Subject_s* z);

void zx_sp11_AuthenticationQuery_DEL_Subject(struct zx_sp11_AuthenticationQuery_s* x, int n);

void zx_sp11_AuthenticationQuery_REV_Subject(struct zx_sp11_AuthenticationQuery_s* x);

#endif
/* -------------------------- sp11_AuthorizationDecisionQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_AuthorizationDecisionQuery_EXT
#define zx_sp11_AuthorizationDecisionQuery_EXT
#endif

struct zx_sp11_AuthorizationDecisionQuery_s* zx_DEC_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_NEW_sp11_AuthorizationDecisionQuery(struct zx_ctx* c);
void zx_FREE_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_AuthorizationDecisionQuery_s* zx_DEEP_CLONE_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);
int zx_WALK_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);
int zx_LEN_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);
char* zx_ENC_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, char* p);
char* zx_ENC_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_AuthorizationDecisionQuery(struct zx_ctx* c, struct zx_sp11_AuthorizationDecisionQuery_s* x);

struct zx_sp11_AuthorizationDecisionQuery_s {
  ZX_ELEM_EXT
  zx_sp11_AuthorizationDecisionQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
  struct zx_sa11_Action_s* Action;	/* {1,-1} nada */
  struct zx_sa11_Evidence_s* Evidence;	/* {0,1} nada */
  struct zx_str* Resource;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp11_AuthorizationDecisionQuery_GET_Resource(struct zx_sp11_AuthorizationDecisionQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_AuthorizationDecisionQuery_GET_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
struct zx_sa11_Action_s* zx_sp11_AuthorizationDecisionQuery_GET_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
struct zx_sa11_Evidence_s* zx_sp11_AuthorizationDecisionQuery_GET_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);

int zx_sp11_AuthorizationDecisionQuery_NUM_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x);
int zx_sp11_AuthorizationDecisionQuery_NUM_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x);
int zx_sp11_AuthorizationDecisionQuery_NUM_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_AuthorizationDecisionQuery_POP_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_sa11_Action_s* zx_sp11_AuthorizationDecisionQuery_POP_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x);
struct zx_sa11_Evidence_s* zx_sp11_AuthorizationDecisionQuery_POP_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x);

void zx_sp11_AuthorizationDecisionQuery_PUSH_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Subject_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUSH_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Action_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUSH_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_sa11_Evidence_s* y);

void zx_sp11_AuthorizationDecisionQuery_PUT_Resource(struct zx_sp11_AuthorizationDecisionQuery_s* x, struct zx_str* y);

void zx_sp11_AuthorizationDecisionQuery_PUT_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Subject_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUT_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Action_s* y);
void zx_sp11_AuthorizationDecisionQuery_PUT_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Evidence_s* y);

void zx_sp11_AuthorizationDecisionQuery_ADD_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Subject_s* z);
void zx_sp11_AuthorizationDecisionQuery_ADD_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Action_s* z);
void zx_sp11_AuthorizationDecisionQuery_ADD_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n, struct zx_sa11_Evidence_s* z);

void zx_sp11_AuthorizationDecisionQuery_DEL_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
void zx_sp11_AuthorizationDecisionQuery_DEL_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);
void zx_sp11_AuthorizationDecisionQuery_DEL_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x, int n);

void zx_sp11_AuthorizationDecisionQuery_REV_Subject(struct zx_sp11_AuthorizationDecisionQuery_s* x);
void zx_sp11_AuthorizationDecisionQuery_REV_Action(struct zx_sp11_AuthorizationDecisionQuery_s* x);
void zx_sp11_AuthorizationDecisionQuery_REV_Evidence(struct zx_sp11_AuthorizationDecisionQuery_s* x);

#endif
/* -------------------------- sp11_Request -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp11_Request_EXT
#define zx_sp11_Request_EXT
#endif

struct zx_sp11_Request_s* zx_DEC_sp11_Request(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_Request_s* zx_NEW_sp11_Request(struct zx_ctx* c);
void zx_FREE_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_Request_s* zx_DEEP_CLONE_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, int dup_strs);
void zx_DUP_STRS_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);
int zx_WALK_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);
int zx_LEN_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);
char* zx_ENC_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, char* p);
char* zx_ENC_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_Request(struct zx_ctx* c, struct zx_sp11_Request_s* x);

struct zx_sp11_Request_s {
  ZX_ELEM_EXT
  zx_sp11_Request_EXT
  struct zx_elem_s* RespondWith;	/* {0,-1} xs:QName */
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_elem_s* Query;	/* {0,1} sp11:QueryAbstractType */
  struct zx_sp11_SubjectQuery_s* SubjectQuery;	/* {0,1}  */
  struct zx_sp11_AuthenticationQuery_s* AuthenticationQuery;	/* {0,1} nada */
  struct zx_sp11_AttributeQuery_s* AttributeQuery;	/* {0,1} nada */
  struct zx_sp11_AuthorizationDecisionQuery_s* AuthorizationDecisionQuery;	/* {0,1} nada */
  struct zx_elem_s* AssertionIDReference;	/* {1,-1} xs:NCName */
  struct zx_elem_s* AssertionArtifact;	/* {1,-1} xs:string */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* RequestID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp11_Request_GET_IssueInstant(struct zx_sp11_Request_s* x);
struct zx_str* zx_sp11_Request_GET_MajorVersion(struct zx_sp11_Request_s* x);
struct zx_str* zx_sp11_Request_GET_MinorVersion(struct zx_sp11_Request_s* x);
struct zx_str* zx_sp11_Request_GET_RequestID(struct zx_sp11_Request_s* x);

struct zx_elem_s* zx_sp11_Request_GET_RespondWith(struct zx_sp11_Request_s* x, int n);
struct zx_ds_Signature_s* zx_sp11_Request_GET_Signature(struct zx_sp11_Request_s* x, int n);
struct zx_elem_s* zx_sp11_Request_GET_Query(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_SubjectQuery_s* zx_sp11_Request_GET_SubjectQuery(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_AuthenticationQuery_s* zx_sp11_Request_GET_AuthenticationQuery(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_AttributeQuery_s* zx_sp11_Request_GET_AttributeQuery(struct zx_sp11_Request_s* x, int n);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_sp11_Request_GET_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n);
struct zx_elem_s* zx_sp11_Request_GET_AssertionIDReference(struct zx_sp11_Request_s* x, int n);
struct zx_elem_s* zx_sp11_Request_GET_AssertionArtifact(struct zx_sp11_Request_s* x, int n);

int zx_sp11_Request_NUM_RespondWith(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_Signature(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_Query(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_SubjectQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AuthenticationQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AttributeQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AssertionIDReference(struct zx_sp11_Request_s* x);
int zx_sp11_Request_NUM_AssertionArtifact(struct zx_sp11_Request_s* x);

struct zx_elem_s* zx_sp11_Request_POP_RespondWith(struct zx_sp11_Request_s* x);
struct zx_ds_Signature_s* zx_sp11_Request_POP_Signature(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_Query(struct zx_sp11_Request_s* x);
struct zx_sp11_SubjectQuery_s* zx_sp11_Request_POP_SubjectQuery(struct zx_sp11_Request_s* x);
struct zx_sp11_AuthenticationQuery_s* zx_sp11_Request_POP_AuthenticationQuery(struct zx_sp11_Request_s* x);
struct zx_sp11_AttributeQuery_s* zx_sp11_Request_POP_AttributeQuery(struct zx_sp11_Request_s* x);
struct zx_sp11_AuthorizationDecisionQuery_s* zx_sp11_Request_POP_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_AssertionIDReference(struct zx_sp11_Request_s* x);
struct zx_elem_s* zx_sp11_Request_POP_AssertionArtifact(struct zx_sp11_Request_s* x);

void zx_sp11_Request_PUSH_RespondWith(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUSH_Signature(struct zx_sp11_Request_s* x, struct zx_ds_Signature_s* y);
void zx_sp11_Request_PUSH_Query(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUSH_SubjectQuery(struct zx_sp11_Request_s* x, struct zx_sp11_SubjectQuery_s* y);
void zx_sp11_Request_PUSH_AuthenticationQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AuthenticationQuery_s* y);
void zx_sp11_Request_PUSH_AttributeQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AttributeQuery_s* y);
void zx_sp11_Request_PUSH_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, struct zx_sp11_AuthorizationDecisionQuery_s* y);
void zx_sp11_Request_PUSH_AssertionIDReference(struct zx_sp11_Request_s* x, struct zx_elem_s* y);
void zx_sp11_Request_PUSH_AssertionArtifact(struct zx_sp11_Request_s* x, struct zx_elem_s* y);

void zx_sp11_Request_PUT_IssueInstant(struct zx_sp11_Request_s* x, struct zx_str* y);
void zx_sp11_Request_PUT_MajorVersion(struct zx_sp11_Request_s* x, struct zx_str* y);
void zx_sp11_Request_PUT_MinorVersion(struct zx_sp11_Request_s* x, struct zx_str* y);
void zx_sp11_Request_PUT_RequestID(struct zx_sp11_Request_s* x, struct zx_str* y);

void zx_sp11_Request_PUT_RespondWith(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_PUT_Signature(struct zx_sp11_Request_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp11_Request_PUT_Query(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_PUT_SubjectQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_SubjectQuery_s* y);
void zx_sp11_Request_PUT_AuthenticationQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthenticationQuery_s* y);
void zx_sp11_Request_PUT_AttributeQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AttributeQuery_s* y);
void zx_sp11_Request_PUT_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthorizationDecisionQuery_s* y);
void zx_sp11_Request_PUT_AssertionIDReference(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Request_PUT_AssertionArtifact(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* y);

void zx_sp11_Request_ADD_RespondWith(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_ADD_Signature(struct zx_sp11_Request_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp11_Request_ADD_Query(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_ADD_SubjectQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_SubjectQuery_s* z);
void zx_sp11_Request_ADD_AuthenticationQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthenticationQuery_s* z);
void zx_sp11_Request_ADD_AttributeQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AttributeQuery_s* z);
void zx_sp11_Request_ADD_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n, struct zx_sp11_AuthorizationDecisionQuery_s* z);
void zx_sp11_Request_ADD_AssertionIDReference(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Request_ADD_AssertionArtifact(struct zx_sp11_Request_s* x, int n, struct zx_elem_s* z);

void zx_sp11_Request_DEL_RespondWith(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_Signature(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_Query(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_SubjectQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AuthenticationQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AttributeQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AssertionIDReference(struct zx_sp11_Request_s* x, int n);
void zx_sp11_Request_DEL_AssertionArtifact(struct zx_sp11_Request_s* x, int n);

void zx_sp11_Request_REV_RespondWith(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_Signature(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_Query(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_SubjectQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AuthenticationQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AttributeQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AuthorizationDecisionQuery(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AssertionIDReference(struct zx_sp11_Request_s* x);
void zx_sp11_Request_REV_AssertionArtifact(struct zx_sp11_Request_s* x);

#endif
/* -------------------------- sp11_Response -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_sp11_Response_EXT
#define zx_sp11_Response_EXT
#endif

struct zx_sp11_Response_s* zx_DEC_sp11_Response(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_Response_s* zx_NEW_sp11_Response(struct zx_ctx* c);
void zx_FREE_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_Response_s* zx_DEEP_CLONE_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, int dup_strs);
void zx_DUP_STRS_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);
int zx_WALK_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);
int zx_LEN_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);
char* zx_ENC_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, char* p);
char* zx_ENC_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_Response(struct zx_ctx* c, struct zx_sp11_Response_s* x);

struct zx_sp11_Response_s {
  ZX_ELEM_EXT
  zx_sp11_Response_EXT
  struct zx_ds_Signature_s* Signature;	/* {0,1} nada */
  struct zx_sp11_Status_s* Status;	/* {1,1} nada */
  struct zx_sa11_Assertion_s* Assertion;	/* {0,-1} nada */
  struct zx_str* InResponseTo;	/* {0,1} attribute xs:NCName */
  struct zx_str* IssueInstant;	/* {1,1} attribute xs:dateTime */
  struct zx_str* MajorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* MinorVersion;	/* {1,1} attribute xs:integer */
  struct zx_str* Recipient;	/* {0,1} attribute xs:anyURI */
  struct zx_str* ResponseID;	/* {1,1} attribute xs:ID */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp11_Response_GET_InResponseTo(struct zx_sp11_Response_s* x);
struct zx_str* zx_sp11_Response_GET_IssueInstant(struct zx_sp11_Response_s* x);
struct zx_str* zx_sp11_Response_GET_MajorVersion(struct zx_sp11_Response_s* x);
struct zx_str* zx_sp11_Response_GET_MinorVersion(struct zx_sp11_Response_s* x);
struct zx_str* zx_sp11_Response_GET_Recipient(struct zx_sp11_Response_s* x);
struct zx_str* zx_sp11_Response_GET_ResponseID(struct zx_sp11_Response_s* x);

struct zx_ds_Signature_s* zx_sp11_Response_GET_Signature(struct zx_sp11_Response_s* x, int n);
struct zx_sp11_Status_s* zx_sp11_Response_GET_Status(struct zx_sp11_Response_s* x, int n);
struct zx_sa11_Assertion_s* zx_sp11_Response_GET_Assertion(struct zx_sp11_Response_s* x, int n);

int zx_sp11_Response_NUM_Signature(struct zx_sp11_Response_s* x);
int zx_sp11_Response_NUM_Status(struct zx_sp11_Response_s* x);
int zx_sp11_Response_NUM_Assertion(struct zx_sp11_Response_s* x);

struct zx_ds_Signature_s* zx_sp11_Response_POP_Signature(struct zx_sp11_Response_s* x);
struct zx_sp11_Status_s* zx_sp11_Response_POP_Status(struct zx_sp11_Response_s* x);
struct zx_sa11_Assertion_s* zx_sp11_Response_POP_Assertion(struct zx_sp11_Response_s* x);

void zx_sp11_Response_PUSH_Signature(struct zx_sp11_Response_s* x, struct zx_ds_Signature_s* y);
void zx_sp11_Response_PUSH_Status(struct zx_sp11_Response_s* x, struct zx_sp11_Status_s* y);
void zx_sp11_Response_PUSH_Assertion(struct zx_sp11_Response_s* x, struct zx_sa11_Assertion_s* y);

void zx_sp11_Response_PUT_InResponseTo(struct zx_sp11_Response_s* x, struct zx_str* y);
void zx_sp11_Response_PUT_IssueInstant(struct zx_sp11_Response_s* x, struct zx_str* y);
void zx_sp11_Response_PUT_MajorVersion(struct zx_sp11_Response_s* x, struct zx_str* y);
void zx_sp11_Response_PUT_MinorVersion(struct zx_sp11_Response_s* x, struct zx_str* y);
void zx_sp11_Response_PUT_Recipient(struct zx_sp11_Response_s* x, struct zx_str* y);
void zx_sp11_Response_PUT_ResponseID(struct zx_sp11_Response_s* x, struct zx_str* y);

void zx_sp11_Response_PUT_Signature(struct zx_sp11_Response_s* x, int n, struct zx_ds_Signature_s* y);
void zx_sp11_Response_PUT_Status(struct zx_sp11_Response_s* x, int n, struct zx_sp11_Status_s* y);
void zx_sp11_Response_PUT_Assertion(struct zx_sp11_Response_s* x, int n, struct zx_sa11_Assertion_s* y);

void zx_sp11_Response_ADD_Signature(struct zx_sp11_Response_s* x, int n, struct zx_ds_Signature_s* z);
void zx_sp11_Response_ADD_Status(struct zx_sp11_Response_s* x, int n, struct zx_sp11_Status_s* z);
void zx_sp11_Response_ADD_Assertion(struct zx_sp11_Response_s* x, int n, struct zx_sa11_Assertion_s* z);

void zx_sp11_Response_DEL_Signature(struct zx_sp11_Response_s* x, int n);
void zx_sp11_Response_DEL_Status(struct zx_sp11_Response_s* x, int n);
void zx_sp11_Response_DEL_Assertion(struct zx_sp11_Response_s* x, int n);

void zx_sp11_Response_REV_Signature(struct zx_sp11_Response_s* x);
void zx_sp11_Response_REV_Status(struct zx_sp11_Response_s* x);
void zx_sp11_Response_REV_Assertion(struct zx_sp11_Response_s* x);

#endif
/* -------------------------- sp11_Status -------------------------- */
/* refby( zx_ff12_NameIdentifierMappingResponse_s zx_ff12_LogoutResponse_s zx_sp11_Response_s zx_ff12_AuthnResponse_s zx_ff12_RegisterNameIdentifierResponse_s ) */
#ifndef zx_sp11_Status_EXT
#define zx_sp11_Status_EXT
#endif

struct zx_sp11_Status_s* zx_DEC_sp11_Status(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_Status_s* zx_NEW_sp11_Status(struct zx_ctx* c);
void zx_FREE_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_Status_s* zx_DEEP_CLONE_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, int dup_strs);
void zx_DUP_STRS_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);
int zx_WALK_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);
int zx_LEN_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);
char* zx_ENC_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, char* p);
char* zx_ENC_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_Status(struct zx_ctx* c, struct zx_sp11_Status_s* x);

struct zx_sp11_Status_s {
  ZX_ELEM_EXT
  zx_sp11_Status_EXT
  struct zx_sp11_StatusCode_s* StatusCode;	/* {1,1} nada */
  struct zx_elem_s* StatusMessage;	/* {0,1} xs:string */
  struct zx_sp11_StatusDetail_s* StatusDetail;	/* {0,1}  */
};

#ifdef ZX_ENA_GETPUT

struct zx_sp11_StatusCode_s* zx_sp11_Status_GET_StatusCode(struct zx_sp11_Status_s* x, int n);
struct zx_elem_s* zx_sp11_Status_GET_StatusMessage(struct zx_sp11_Status_s* x, int n);
struct zx_sp11_StatusDetail_s* zx_sp11_Status_GET_StatusDetail(struct zx_sp11_Status_s* x, int n);

int zx_sp11_Status_NUM_StatusCode(struct zx_sp11_Status_s* x);
int zx_sp11_Status_NUM_StatusMessage(struct zx_sp11_Status_s* x);
int zx_sp11_Status_NUM_StatusDetail(struct zx_sp11_Status_s* x);

struct zx_sp11_StatusCode_s* zx_sp11_Status_POP_StatusCode(struct zx_sp11_Status_s* x);
struct zx_elem_s* zx_sp11_Status_POP_StatusMessage(struct zx_sp11_Status_s* x);
struct zx_sp11_StatusDetail_s* zx_sp11_Status_POP_StatusDetail(struct zx_sp11_Status_s* x);

void zx_sp11_Status_PUSH_StatusCode(struct zx_sp11_Status_s* x, struct zx_sp11_StatusCode_s* y);
void zx_sp11_Status_PUSH_StatusMessage(struct zx_sp11_Status_s* x, struct zx_elem_s* y);
void zx_sp11_Status_PUSH_StatusDetail(struct zx_sp11_Status_s* x, struct zx_sp11_StatusDetail_s* y);


void zx_sp11_Status_PUT_StatusCode(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusCode_s* y);
void zx_sp11_Status_PUT_StatusMessage(struct zx_sp11_Status_s* x, int n, struct zx_elem_s* y);
void zx_sp11_Status_PUT_StatusDetail(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusDetail_s* y);

void zx_sp11_Status_ADD_StatusCode(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusCode_s* z);
void zx_sp11_Status_ADD_StatusMessage(struct zx_sp11_Status_s* x, int n, struct zx_elem_s* z);
void zx_sp11_Status_ADD_StatusDetail(struct zx_sp11_Status_s* x, int n, struct zx_sp11_StatusDetail_s* z);

void zx_sp11_Status_DEL_StatusCode(struct zx_sp11_Status_s* x, int n);
void zx_sp11_Status_DEL_StatusMessage(struct zx_sp11_Status_s* x, int n);
void zx_sp11_Status_DEL_StatusDetail(struct zx_sp11_Status_s* x, int n);

void zx_sp11_Status_REV_StatusCode(struct zx_sp11_Status_s* x);
void zx_sp11_Status_REV_StatusMessage(struct zx_sp11_Status_s* x);
void zx_sp11_Status_REV_StatusDetail(struct zx_sp11_Status_s* x);

#endif
/* -------------------------- sp11_StatusCode -------------------------- */
/* refby( zx_sp11_StatusCode_s zx_sp11_Status_s ) */
#ifndef zx_sp11_StatusCode_EXT
#define zx_sp11_StatusCode_EXT
#endif

struct zx_sp11_StatusCode_s* zx_DEC_sp11_StatusCode(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_StatusCode_s* zx_NEW_sp11_StatusCode(struct zx_ctx* c);
void zx_FREE_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_StatusCode_s* zx_DEEP_CLONE_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, int dup_strs);
void zx_DUP_STRS_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);
int zx_WALK_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);
int zx_LEN_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);
char* zx_ENC_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, char* p);
char* zx_ENC_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_StatusCode(struct zx_ctx* c, struct zx_sp11_StatusCode_s* x);

struct zx_sp11_StatusCode_s {
  ZX_ELEM_EXT
  zx_sp11_StatusCode_EXT
  struct zx_sp11_StatusCode_s* StatusCode;	/* {0,1} nada */
  struct zx_str* Value;	/* {1,1} attribute xs:anyURI */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_sp11_StatusCode_GET_Value(struct zx_sp11_StatusCode_s* x);

struct zx_sp11_StatusCode_s* zx_sp11_StatusCode_GET_StatusCode(struct zx_sp11_StatusCode_s* x, int n);

int zx_sp11_StatusCode_NUM_StatusCode(struct zx_sp11_StatusCode_s* x);

struct zx_sp11_StatusCode_s* zx_sp11_StatusCode_POP_StatusCode(struct zx_sp11_StatusCode_s* x);

void zx_sp11_StatusCode_PUSH_StatusCode(struct zx_sp11_StatusCode_s* x, struct zx_sp11_StatusCode_s* y);

void zx_sp11_StatusCode_PUT_Value(struct zx_sp11_StatusCode_s* x, struct zx_str* y);

void zx_sp11_StatusCode_PUT_StatusCode(struct zx_sp11_StatusCode_s* x, int n, struct zx_sp11_StatusCode_s* y);

void zx_sp11_StatusCode_ADD_StatusCode(struct zx_sp11_StatusCode_s* x, int n, struct zx_sp11_StatusCode_s* z);

void zx_sp11_StatusCode_DEL_StatusCode(struct zx_sp11_StatusCode_s* x, int n);

void zx_sp11_StatusCode_REV_StatusCode(struct zx_sp11_StatusCode_s* x);

#endif
/* -------------------------- sp11_StatusDetail -------------------------- */
/* refby( zx_sp11_Status_s ) */
#ifndef zx_sp11_StatusDetail_EXT
#define zx_sp11_StatusDetail_EXT
#endif

struct zx_sp11_StatusDetail_s* zx_DEC_sp11_StatusDetail(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_StatusDetail_s* zx_NEW_sp11_StatusDetail(struct zx_ctx* c);
void zx_FREE_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_StatusDetail_s* zx_DEEP_CLONE_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, int dup_strs);
void zx_DUP_STRS_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);
int zx_WALK_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);
int zx_LEN_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);
char* zx_ENC_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, char* p);
char* zx_ENC_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_StatusDetail(struct zx_ctx* c, struct zx_sp11_StatusDetail_s* x);

struct zx_sp11_StatusDetail_s {
  ZX_ELEM_EXT
  zx_sp11_StatusDetail_EXT
};

#ifdef ZX_ENA_GETPUT










#endif
/* -------------------------- sp11_SubjectQuery -------------------------- */
/* refby( zx_sp11_Request_s ) */
#ifndef zx_sp11_SubjectQuery_EXT
#define zx_sp11_SubjectQuery_EXT
#endif

struct zx_sp11_SubjectQuery_s* zx_DEC_sp11_SubjectQuery(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_sp11_SubjectQuery_s* zx_NEW_sp11_SubjectQuery(struct zx_ctx* c);
void zx_FREE_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_sp11_SubjectQuery_s* zx_DEEP_CLONE_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, int dup_strs);
void zx_DUP_STRS_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);
int zx_WALK_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);
int zx_LEN_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);
char* zx_ENC_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, char* p);
char* zx_ENC_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);
struct zx_str* zx_EASY_ENC_WO_sp11_SubjectQuery(struct zx_ctx* c, struct zx_sp11_SubjectQuery_s* x);

struct zx_sp11_SubjectQuery_s {
  ZX_ELEM_EXT
  zx_sp11_SubjectQuery_EXT
  struct zx_sa11_Subject_s* Subject;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_sa11_Subject_s* zx_sp11_SubjectQuery_GET_Subject(struct zx_sp11_SubjectQuery_s* x, int n);

int zx_sp11_SubjectQuery_NUM_Subject(struct zx_sp11_SubjectQuery_s* x);

struct zx_sa11_Subject_s* zx_sp11_SubjectQuery_POP_Subject(struct zx_sp11_SubjectQuery_s* x);

void zx_sp11_SubjectQuery_PUSH_Subject(struct zx_sp11_SubjectQuery_s* x, struct zx_sa11_Subject_s* y);


void zx_sp11_SubjectQuery_PUT_Subject(struct zx_sp11_SubjectQuery_s* x, int n, struct zx_sa11_Subject_s* y);

void zx_sp11_SubjectQuery_ADD_Subject(struct zx_sp11_SubjectQuery_s* x, int n, struct zx_sa11_Subject_s* z);

void zx_sp11_SubjectQuery_DEL_Subject(struct zx_sp11_SubjectQuery_s* x, int n);

void zx_sp11_SubjectQuery_REV_Subject(struct zx_sp11_SubjectQuery_s* x);

#endif

#endif