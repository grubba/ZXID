/* c/zx-pmm-data.h - WARNING: This header was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Datastructure design, topography, and layout
 * Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for
 * terms and conditions of use. Element and attributes names as well
 * as some topography are derived from schema descriptions that were used as
 * input and may be subject to their own copright. */

#ifndef _c_zx_pmm_data_h
#define _c_zx_pmm_data_h

#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"

#ifndef ZX_ELEM_EXT
#define ZX_ELEM_EXT  /* This extension point should be defined by who includes this file. */
#endif

/* -------------------------- pmm_PMActivate -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMActivate_EXT
#define zx_pmm_PMActivate_EXT
#endif

struct zx_pmm_PMActivate_s* zx_DEC_pmm_PMActivate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMActivate_s* zx_NEW_pmm_PMActivate(struct zx_ctx* c);
void zx_FREE_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMActivate_s* zx_DEEP_CLONE_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x);
int zx_WALK_SO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x);
int zx_LEN_WO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x);
char* zx_ENC_SO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x, char* p);
char* zx_ENC_WO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMActivate(struct zx_ctx* c, struct zx_pmm_PMActivate_s* x);

struct zx_pmm_PMActivate_s {
  ZX_ELEM_EXT
  zx_pmm_PMActivate_EXT
  struct zx_pmm_PMActivateItem_s* PMActivateItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_pmm_PMActivateItem_s* zx_pmm_PMActivate_GET_PMActivateItem(struct zx_pmm_PMActivate_s* x, int n);
struct zx_elem_s* zx_pmm_PMActivate_GET_NotifyTo(struct zx_pmm_PMActivate_s* x, int n);

int zx_pmm_PMActivate_NUM_PMActivateItem(struct zx_pmm_PMActivate_s* x);
int zx_pmm_PMActivate_NUM_NotifyTo(struct zx_pmm_PMActivate_s* x);

struct zx_pmm_PMActivateItem_s* zx_pmm_PMActivate_POP_PMActivateItem(struct zx_pmm_PMActivate_s* x);
struct zx_elem_s* zx_pmm_PMActivate_POP_NotifyTo(struct zx_pmm_PMActivate_s* x);

void zx_pmm_PMActivate_PUSH_PMActivateItem(struct zx_pmm_PMActivate_s* x, struct zx_pmm_PMActivateItem_s* y);
void zx_pmm_PMActivate_PUSH_NotifyTo(struct zx_pmm_PMActivate_s* x, struct zx_elem_s* y);


void zx_pmm_PMActivate_PUT_PMActivateItem(struct zx_pmm_PMActivate_s* x, int n, struct zx_pmm_PMActivateItem_s* y);
void zx_pmm_PMActivate_PUT_NotifyTo(struct zx_pmm_PMActivate_s* x, int n, struct zx_elem_s* y);

void zx_pmm_PMActivate_ADD_PMActivateItem(struct zx_pmm_PMActivate_s* x, int n, struct zx_pmm_PMActivateItem_s* z);
void zx_pmm_PMActivate_ADD_NotifyTo(struct zx_pmm_PMActivate_s* x, int n, struct zx_elem_s* z);

void zx_pmm_PMActivate_DEL_PMActivateItem(struct zx_pmm_PMActivate_s* x, int n);
void zx_pmm_PMActivate_DEL_NotifyTo(struct zx_pmm_PMActivate_s* x, int n);

void zx_pmm_PMActivate_REV_PMActivateItem(struct zx_pmm_PMActivate_s* x);
void zx_pmm_PMActivate_REV_NotifyTo(struct zx_pmm_PMActivate_s* x);

#endif
/* -------------------------- pmm_PMActivateItem -------------------------- */
/* refby( zx_pmm_PMActivate_s ) */
#ifndef zx_pmm_PMActivateItem_EXT
#define zx_pmm_PMActivateItem_EXT
#endif

struct zx_pmm_PMActivateItem_s* zx_DEC_pmm_PMActivateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMActivateItem_s* zx_NEW_pmm_PMActivateItem(struct zx_ctx* c);
void zx_FREE_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMActivateItem_s* zx_DEEP_CLONE_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x);
int zx_WALK_SO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x);
int zx_LEN_WO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x);
char* zx_ENC_SO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x, char* p);
char* zx_ENC_WO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMActivateItem(struct zx_ctx* c, struct zx_pmm_PMActivateItem_s* x);

struct zx_pmm_PMActivateItem_s {
  ZX_ELEM_EXT
  zx_pmm_PMActivateItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_str* at;	/* {0,1} attribute xs:dateTime */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_pmm_PMActivateItem_GET_at(struct zx_pmm_PMActivateItem_s* x);
struct zx_str* zx_pmm_PMActivateItem_GET_itemID(struct zx_pmm_PMActivateItem_s* x);

struct zx_prov_PMID_s* zx_pmm_PMActivateItem_GET_PMID(struct zx_pmm_PMActivateItem_s* x, int n);

int zx_pmm_PMActivateItem_NUM_PMID(struct zx_pmm_PMActivateItem_s* x);

struct zx_prov_PMID_s* zx_pmm_PMActivateItem_POP_PMID(struct zx_pmm_PMActivateItem_s* x);

void zx_pmm_PMActivateItem_PUSH_PMID(struct zx_pmm_PMActivateItem_s* x, struct zx_prov_PMID_s* y);

void zx_pmm_PMActivateItem_PUT_at(struct zx_pmm_PMActivateItem_s* x, struct zx_str* y);
void zx_pmm_PMActivateItem_PUT_itemID(struct zx_pmm_PMActivateItem_s* x, struct zx_str* y);

void zx_pmm_PMActivateItem_PUT_PMID(struct zx_pmm_PMActivateItem_s* x, int n, struct zx_prov_PMID_s* y);

void zx_pmm_PMActivateItem_ADD_PMID(struct zx_pmm_PMActivateItem_s* x, int n, struct zx_prov_PMID_s* z);

void zx_pmm_PMActivateItem_DEL_PMID(struct zx_pmm_PMActivateItem_s* x, int n);

void zx_pmm_PMActivateItem_REV_PMID(struct zx_pmm_PMActivateItem_s* x);

#endif
/* -------------------------- pmm_PMActivateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMActivateResponse_EXT
#define zx_pmm_PMActivateResponse_EXT
#endif

struct zx_pmm_PMActivateResponse_s* zx_DEC_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMActivateResponse_s* zx_NEW_pmm_PMActivateResponse(struct zx_ctx* c);
void zx_FREE_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMActivateResponse_s* zx_DEEP_CLONE_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x);
int zx_WALK_SO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x);
int zx_LEN_WO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x);
char* zx_ENC_SO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x, char* p);
char* zx_ENC_WO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMActivateResponse(struct zx_ctx* c, struct zx_pmm_PMActivateResponse_s* x);

struct zx_pmm_PMActivateResponse_s {
  ZX_ELEM_EXT
  zx_pmm_PMActivateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_PMActivateResponse_GET_Status(struct zx_pmm_PMActivateResponse_s* x, int n);

int zx_pmm_PMActivateResponse_NUM_Status(struct zx_pmm_PMActivateResponse_s* x);

struct zx_lu_Status_s* zx_pmm_PMActivateResponse_POP_Status(struct zx_pmm_PMActivateResponse_s* x);

void zx_pmm_PMActivateResponse_PUSH_Status(struct zx_pmm_PMActivateResponse_s* x, struct zx_lu_Status_s* y);


void zx_pmm_PMActivateResponse_PUT_Status(struct zx_pmm_PMActivateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_pmm_PMActivateResponse_ADD_Status(struct zx_pmm_PMActivateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_pmm_PMActivateResponse_DEL_Status(struct zx_pmm_PMActivateResponse_s* x, int n);

void zx_pmm_PMActivateResponse_REV_Status(struct zx_pmm_PMActivateResponse_s* x);

#endif
/* -------------------------- pmm_PMDeactivate -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMDeactivate_EXT
#define zx_pmm_PMDeactivate_EXT
#endif

struct zx_pmm_PMDeactivate_s* zx_DEC_pmm_PMDeactivate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMDeactivate_s* zx_NEW_pmm_PMDeactivate(struct zx_ctx* c);
void zx_FREE_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMDeactivate_s* zx_DEEP_CLONE_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x);
int zx_WALK_SO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x);
int zx_LEN_WO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x);
char* zx_ENC_SO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x, char* p);
char* zx_ENC_WO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMDeactivate(struct zx_ctx* c, struct zx_pmm_PMDeactivate_s* x);

struct zx_pmm_PMDeactivate_s {
  ZX_ELEM_EXT
  zx_pmm_PMDeactivate_EXT
  struct zx_pmm_PMDeactivateItem_s* PMDeactivateItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_pmm_PMDeactivateItem_s* zx_pmm_PMDeactivate_GET_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x, int n);
struct zx_elem_s* zx_pmm_PMDeactivate_GET_NotifyTo(struct zx_pmm_PMDeactivate_s* x, int n);

int zx_pmm_PMDeactivate_NUM_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x);
int zx_pmm_PMDeactivate_NUM_NotifyTo(struct zx_pmm_PMDeactivate_s* x);

struct zx_pmm_PMDeactivateItem_s* zx_pmm_PMDeactivate_POP_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x);
struct zx_elem_s* zx_pmm_PMDeactivate_POP_NotifyTo(struct zx_pmm_PMDeactivate_s* x);

void zx_pmm_PMDeactivate_PUSH_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x, struct zx_pmm_PMDeactivateItem_s* y);
void zx_pmm_PMDeactivate_PUSH_NotifyTo(struct zx_pmm_PMDeactivate_s* x, struct zx_elem_s* y);


void zx_pmm_PMDeactivate_PUT_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x, int n, struct zx_pmm_PMDeactivateItem_s* y);
void zx_pmm_PMDeactivate_PUT_NotifyTo(struct zx_pmm_PMDeactivate_s* x, int n, struct zx_elem_s* y);

void zx_pmm_PMDeactivate_ADD_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x, int n, struct zx_pmm_PMDeactivateItem_s* z);
void zx_pmm_PMDeactivate_ADD_NotifyTo(struct zx_pmm_PMDeactivate_s* x, int n, struct zx_elem_s* z);

void zx_pmm_PMDeactivate_DEL_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x, int n);
void zx_pmm_PMDeactivate_DEL_NotifyTo(struct zx_pmm_PMDeactivate_s* x, int n);

void zx_pmm_PMDeactivate_REV_PMDeactivateItem(struct zx_pmm_PMDeactivate_s* x);
void zx_pmm_PMDeactivate_REV_NotifyTo(struct zx_pmm_PMDeactivate_s* x);

#endif
/* -------------------------- pmm_PMDeactivateItem -------------------------- */
/* refby( zx_pmm_PMDeactivate_s ) */
#ifndef zx_pmm_PMDeactivateItem_EXT
#define zx_pmm_PMDeactivateItem_EXT
#endif

struct zx_pmm_PMDeactivateItem_s* zx_DEC_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMDeactivateItem_s* zx_NEW_pmm_PMDeactivateItem(struct zx_ctx* c);
void zx_FREE_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMDeactivateItem_s* zx_DEEP_CLONE_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x);
int zx_WALK_SO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x);
int zx_LEN_WO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x);
char* zx_ENC_SO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x, char* p);
char* zx_ENC_WO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMDeactivateItem(struct zx_ctx* c, struct zx_pmm_PMDeactivateItem_s* x);

struct zx_pmm_PMDeactivateItem_s {
  ZX_ELEM_EXT
  zx_pmm_PMDeactivateItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_str* at;	/* {0,1} attribute xs:dateTime */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_pmm_PMDeactivateItem_GET_at(struct zx_pmm_PMDeactivateItem_s* x);
struct zx_str* zx_pmm_PMDeactivateItem_GET_itemID(struct zx_pmm_PMDeactivateItem_s* x);

struct zx_prov_PMID_s* zx_pmm_PMDeactivateItem_GET_PMID(struct zx_pmm_PMDeactivateItem_s* x, int n);

int zx_pmm_PMDeactivateItem_NUM_PMID(struct zx_pmm_PMDeactivateItem_s* x);

struct zx_prov_PMID_s* zx_pmm_PMDeactivateItem_POP_PMID(struct zx_pmm_PMDeactivateItem_s* x);

void zx_pmm_PMDeactivateItem_PUSH_PMID(struct zx_pmm_PMDeactivateItem_s* x, struct zx_prov_PMID_s* y);

void zx_pmm_PMDeactivateItem_PUT_at(struct zx_pmm_PMDeactivateItem_s* x, struct zx_str* y);
void zx_pmm_PMDeactivateItem_PUT_itemID(struct zx_pmm_PMDeactivateItem_s* x, struct zx_str* y);

void zx_pmm_PMDeactivateItem_PUT_PMID(struct zx_pmm_PMDeactivateItem_s* x, int n, struct zx_prov_PMID_s* y);

void zx_pmm_PMDeactivateItem_ADD_PMID(struct zx_pmm_PMDeactivateItem_s* x, int n, struct zx_prov_PMID_s* z);

void zx_pmm_PMDeactivateItem_DEL_PMID(struct zx_pmm_PMDeactivateItem_s* x, int n);

void zx_pmm_PMDeactivateItem_REV_PMID(struct zx_pmm_PMDeactivateItem_s* x);

#endif
/* -------------------------- pmm_PMDeactivateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMDeactivateResponse_EXT
#define zx_pmm_PMDeactivateResponse_EXT
#endif

struct zx_pmm_PMDeactivateResponse_s* zx_DEC_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMDeactivateResponse_s* zx_NEW_pmm_PMDeactivateResponse(struct zx_ctx* c);
void zx_FREE_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMDeactivateResponse_s* zx_DEEP_CLONE_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x);
int zx_WALK_SO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x);
int zx_LEN_WO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x);
char* zx_ENC_SO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x, char* p);
char* zx_ENC_WO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMDeactivateResponse(struct zx_ctx* c, struct zx_pmm_PMDeactivateResponse_s* x);

struct zx_pmm_PMDeactivateResponse_s {
  ZX_ELEM_EXT
  zx_pmm_PMDeactivateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_PMDeactivateResponse_GET_Status(struct zx_pmm_PMDeactivateResponse_s* x, int n);

int zx_pmm_PMDeactivateResponse_NUM_Status(struct zx_pmm_PMDeactivateResponse_s* x);

struct zx_lu_Status_s* zx_pmm_PMDeactivateResponse_POP_Status(struct zx_pmm_PMDeactivateResponse_s* x);

void zx_pmm_PMDeactivateResponse_PUSH_Status(struct zx_pmm_PMDeactivateResponse_s* x, struct zx_lu_Status_s* y);


void zx_pmm_PMDeactivateResponse_PUT_Status(struct zx_pmm_PMDeactivateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_pmm_PMDeactivateResponse_ADD_Status(struct zx_pmm_PMDeactivateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_pmm_PMDeactivateResponse_DEL_Status(struct zx_pmm_PMDeactivateResponse_s* x, int n);

void zx_pmm_PMDeactivateResponse_REV_Status(struct zx_pmm_PMDeactivateResponse_s* x);

#endif
/* -------------------------- pmm_PMDelete -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMDelete_EXT
#define zx_pmm_PMDelete_EXT
#endif

struct zx_pmm_PMDelete_s* zx_DEC_pmm_PMDelete(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMDelete_s* zx_NEW_pmm_PMDelete(struct zx_ctx* c);
void zx_FREE_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMDelete_s* zx_DEEP_CLONE_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x);
int zx_WALK_SO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x);
int zx_LEN_WO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x);
char* zx_ENC_SO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x, char* p);
char* zx_ENC_WO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMDelete(struct zx_ctx* c, struct zx_pmm_PMDelete_s* x);

struct zx_pmm_PMDelete_s {
  ZX_ELEM_EXT
  zx_pmm_PMDelete_EXT
  struct zx_pmm_PMDeleteItem_s* PMDeleteItem;	/* {1,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_pmm_PMDeleteItem_s* zx_pmm_PMDelete_GET_PMDeleteItem(struct zx_pmm_PMDelete_s* x, int n);

int zx_pmm_PMDelete_NUM_PMDeleteItem(struct zx_pmm_PMDelete_s* x);

struct zx_pmm_PMDeleteItem_s* zx_pmm_PMDelete_POP_PMDeleteItem(struct zx_pmm_PMDelete_s* x);

void zx_pmm_PMDelete_PUSH_PMDeleteItem(struct zx_pmm_PMDelete_s* x, struct zx_pmm_PMDeleteItem_s* y);


void zx_pmm_PMDelete_PUT_PMDeleteItem(struct zx_pmm_PMDelete_s* x, int n, struct zx_pmm_PMDeleteItem_s* y);

void zx_pmm_PMDelete_ADD_PMDeleteItem(struct zx_pmm_PMDelete_s* x, int n, struct zx_pmm_PMDeleteItem_s* z);

void zx_pmm_PMDelete_DEL_PMDeleteItem(struct zx_pmm_PMDelete_s* x, int n);

void zx_pmm_PMDelete_REV_PMDeleteItem(struct zx_pmm_PMDelete_s* x);

#endif
/* -------------------------- pmm_PMDeleteItem -------------------------- */
/* refby( zx_pmm_PMDelete_s ) */
#ifndef zx_pmm_PMDeleteItem_EXT
#define zx_pmm_PMDeleteItem_EXT
#endif

struct zx_pmm_PMDeleteItem_s* zx_DEC_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMDeleteItem_s* zx_NEW_pmm_PMDeleteItem(struct zx_ctx* c);
void zx_FREE_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMDeleteItem_s* zx_DEEP_CLONE_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x);
int zx_WALK_SO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x);
int zx_LEN_WO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x);
char* zx_ENC_SO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x, char* p);
char* zx_ENC_WO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMDeleteItem(struct zx_ctx* c, struct zx_pmm_PMDeleteItem_s* x);

struct zx_pmm_PMDeleteItem_s {
  ZX_ELEM_EXT
  zx_pmm_PMDeleteItem_EXT
  struct zx_prov_PMID_s* PMID;	/* {1,1} nada */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_pmm_PMDeleteItem_GET_itemID(struct zx_pmm_PMDeleteItem_s* x);

struct zx_prov_PMID_s* zx_pmm_PMDeleteItem_GET_PMID(struct zx_pmm_PMDeleteItem_s* x, int n);

int zx_pmm_PMDeleteItem_NUM_PMID(struct zx_pmm_PMDeleteItem_s* x);

struct zx_prov_PMID_s* zx_pmm_PMDeleteItem_POP_PMID(struct zx_pmm_PMDeleteItem_s* x);

void zx_pmm_PMDeleteItem_PUSH_PMID(struct zx_pmm_PMDeleteItem_s* x, struct zx_prov_PMID_s* y);

void zx_pmm_PMDeleteItem_PUT_itemID(struct zx_pmm_PMDeleteItem_s* x, struct zx_str* y);

void zx_pmm_PMDeleteItem_PUT_PMID(struct zx_pmm_PMDeleteItem_s* x, int n, struct zx_prov_PMID_s* y);

void zx_pmm_PMDeleteItem_ADD_PMID(struct zx_pmm_PMDeleteItem_s* x, int n, struct zx_prov_PMID_s* z);

void zx_pmm_PMDeleteItem_DEL_PMID(struct zx_pmm_PMDeleteItem_s* x, int n);

void zx_pmm_PMDeleteItem_REV_PMID(struct zx_pmm_PMDeleteItem_s* x);

#endif
/* -------------------------- pmm_PMDeleteResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMDeleteResponse_EXT
#define zx_pmm_PMDeleteResponse_EXT
#endif

struct zx_pmm_PMDeleteResponse_s* zx_DEC_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMDeleteResponse_s* zx_NEW_pmm_PMDeleteResponse(struct zx_ctx* c);
void zx_FREE_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMDeleteResponse_s* zx_DEEP_CLONE_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x);
int zx_WALK_SO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x);
int zx_LEN_WO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x);
char* zx_ENC_SO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x, char* p);
char* zx_ENC_WO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMDeleteResponse(struct zx_ctx* c, struct zx_pmm_PMDeleteResponse_s* x);

struct zx_pmm_PMDeleteResponse_s {
  ZX_ELEM_EXT
  zx_pmm_PMDeleteResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_PMDeleteResponse_GET_Status(struct zx_pmm_PMDeleteResponse_s* x, int n);

int zx_pmm_PMDeleteResponse_NUM_Status(struct zx_pmm_PMDeleteResponse_s* x);

struct zx_lu_Status_s* zx_pmm_PMDeleteResponse_POP_Status(struct zx_pmm_PMDeleteResponse_s* x);

void zx_pmm_PMDeleteResponse_PUSH_Status(struct zx_pmm_PMDeleteResponse_s* x, struct zx_lu_Status_s* y);


void zx_pmm_PMDeleteResponse_PUT_Status(struct zx_pmm_PMDeleteResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_pmm_PMDeleteResponse_ADD_Status(struct zx_pmm_PMDeleteResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_pmm_PMDeleteResponse_DEL_Status(struct zx_pmm_PMDeleteResponse_s* x, int n);

void zx_pmm_PMDeleteResponse_REV_Status(struct zx_pmm_PMDeleteResponse_s* x);

#endif
/* -------------------------- pmm_PMGetStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMGetStatus_EXT
#define zx_pmm_PMGetStatus_EXT
#endif

struct zx_pmm_PMGetStatus_s* zx_DEC_pmm_PMGetStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMGetStatus_s* zx_NEW_pmm_PMGetStatus(struct zx_ctx* c);
void zx_FREE_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMGetStatus_s* zx_DEEP_CLONE_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x);
int zx_WALK_SO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x);
int zx_LEN_WO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x);
char* zx_ENC_SO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x, char* p);
char* zx_ENC_WO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMGetStatus(struct zx_ctx* c, struct zx_pmm_PMGetStatus_s* x);

struct zx_pmm_PMGetStatus_s {
  ZX_ELEM_EXT
  zx_pmm_PMGetStatus_EXT
  struct zx_prov_PMID_s* PMID;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMID_s* zx_pmm_PMGetStatus_GET_PMID(struct zx_pmm_PMGetStatus_s* x, int n);

int zx_pmm_PMGetStatus_NUM_PMID(struct zx_pmm_PMGetStatus_s* x);

struct zx_prov_PMID_s* zx_pmm_PMGetStatus_POP_PMID(struct zx_pmm_PMGetStatus_s* x);

void zx_pmm_PMGetStatus_PUSH_PMID(struct zx_pmm_PMGetStatus_s* x, struct zx_prov_PMID_s* y);


void zx_pmm_PMGetStatus_PUT_PMID(struct zx_pmm_PMGetStatus_s* x, int n, struct zx_prov_PMID_s* y);

void zx_pmm_PMGetStatus_ADD_PMID(struct zx_pmm_PMGetStatus_s* x, int n, struct zx_prov_PMID_s* z);

void zx_pmm_PMGetStatus_DEL_PMID(struct zx_pmm_PMGetStatus_s* x, int n);

void zx_pmm_PMGetStatus_REV_PMID(struct zx_pmm_PMGetStatus_s* x);

#endif
/* -------------------------- pmm_PMGetStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMGetStatusResponse_EXT
#define zx_pmm_PMGetStatusResponse_EXT
#endif

struct zx_pmm_PMGetStatusResponse_s* zx_DEC_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMGetStatusResponse_s* zx_NEW_pmm_PMGetStatusResponse(struct zx_ctx* c);
void zx_FREE_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMGetStatusResponse_s* zx_DEEP_CLONE_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x);
int zx_WALK_SO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x);
int zx_LEN_WO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x);
char* zx_ENC_SO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x, char* p);
char* zx_ENC_WO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMGetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMGetStatusResponse_s* x);

struct zx_pmm_PMGetStatusResponse_s {
  ZX_ELEM_EXT
  zx_pmm_PMGetStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
  struct zx_prov_PMStatus_s* PMStatus;	/* {0,-1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_PMGetStatusResponse_GET_Status(struct zx_pmm_PMGetStatusResponse_s* x, int n);
struct zx_prov_PMStatus_s* zx_pmm_PMGetStatusResponse_GET_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x, int n);

int zx_pmm_PMGetStatusResponse_NUM_Status(struct zx_pmm_PMGetStatusResponse_s* x);
int zx_pmm_PMGetStatusResponse_NUM_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x);

struct zx_lu_Status_s* zx_pmm_PMGetStatusResponse_POP_Status(struct zx_pmm_PMGetStatusResponse_s* x);
struct zx_prov_PMStatus_s* zx_pmm_PMGetStatusResponse_POP_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x);

void zx_pmm_PMGetStatusResponse_PUSH_Status(struct zx_pmm_PMGetStatusResponse_s* x, struct zx_lu_Status_s* y);
void zx_pmm_PMGetStatusResponse_PUSH_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x, struct zx_prov_PMStatus_s* y);


void zx_pmm_PMGetStatusResponse_PUT_Status(struct zx_pmm_PMGetStatusResponse_s* x, int n, struct zx_lu_Status_s* y);
void zx_pmm_PMGetStatusResponse_PUT_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x, int n, struct zx_prov_PMStatus_s* y);

void zx_pmm_PMGetStatusResponse_ADD_Status(struct zx_pmm_PMGetStatusResponse_s* x, int n, struct zx_lu_Status_s* z);
void zx_pmm_PMGetStatusResponse_ADD_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x, int n, struct zx_prov_PMStatus_s* z);

void zx_pmm_PMGetStatusResponse_DEL_Status(struct zx_pmm_PMGetStatusResponse_s* x, int n);
void zx_pmm_PMGetStatusResponse_DEL_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x, int n);

void zx_pmm_PMGetStatusResponse_REV_Status(struct zx_pmm_PMGetStatusResponse_s* x);
void zx_pmm_PMGetStatusResponse_REV_PMStatus(struct zx_pmm_PMGetStatusResponse_s* x);

#endif
/* -------------------------- pmm_PMSetStatus -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMSetStatus_EXT
#define zx_pmm_PMSetStatus_EXT
#endif

struct zx_pmm_PMSetStatus_s* zx_DEC_pmm_PMSetStatus(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMSetStatus_s* zx_NEW_pmm_PMSetStatus(struct zx_ctx* c);
void zx_FREE_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMSetStatus_s* zx_DEEP_CLONE_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x);
int zx_WALK_SO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x);
int zx_LEN_WO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x);
char* zx_ENC_SO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x, char* p);
char* zx_ENC_WO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMSetStatus(struct zx_ctx* c, struct zx_pmm_PMSetStatus_s* x);

struct zx_pmm_PMSetStatus_s {
  ZX_ELEM_EXT
  zx_pmm_PMSetStatus_EXT
  struct zx_prov_PMStatus_s* PMStatus;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_prov_PMStatus_s* zx_pmm_PMSetStatus_GET_PMStatus(struct zx_pmm_PMSetStatus_s* x, int n);

int zx_pmm_PMSetStatus_NUM_PMStatus(struct zx_pmm_PMSetStatus_s* x);

struct zx_prov_PMStatus_s* zx_pmm_PMSetStatus_POP_PMStatus(struct zx_pmm_PMSetStatus_s* x);

void zx_pmm_PMSetStatus_PUSH_PMStatus(struct zx_pmm_PMSetStatus_s* x, struct zx_prov_PMStatus_s* y);


void zx_pmm_PMSetStatus_PUT_PMStatus(struct zx_pmm_PMSetStatus_s* x, int n, struct zx_prov_PMStatus_s* y);

void zx_pmm_PMSetStatus_ADD_PMStatus(struct zx_pmm_PMSetStatus_s* x, int n, struct zx_prov_PMStatus_s* z);

void zx_pmm_PMSetStatus_DEL_PMStatus(struct zx_pmm_PMSetStatus_s* x, int n);

void zx_pmm_PMSetStatus_REV_PMStatus(struct zx_pmm_PMSetStatus_s* x);

#endif
/* -------------------------- pmm_PMSetStatusResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMSetStatusResponse_EXT
#define zx_pmm_PMSetStatusResponse_EXT
#endif

struct zx_pmm_PMSetStatusResponse_s* zx_DEC_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMSetStatusResponse_s* zx_NEW_pmm_PMSetStatusResponse(struct zx_ctx* c);
void zx_FREE_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMSetStatusResponse_s* zx_DEEP_CLONE_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x);
int zx_WALK_SO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x);
int zx_LEN_WO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x);
char* zx_ENC_SO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x, char* p);
char* zx_ENC_WO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMSetStatusResponse(struct zx_ctx* c, struct zx_pmm_PMSetStatusResponse_s* x);

struct zx_pmm_PMSetStatusResponse_s {
  ZX_ELEM_EXT
  zx_pmm_PMSetStatusResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_PMSetStatusResponse_GET_Status(struct zx_pmm_PMSetStatusResponse_s* x, int n);

int zx_pmm_PMSetStatusResponse_NUM_Status(struct zx_pmm_PMSetStatusResponse_s* x);

struct zx_lu_Status_s* zx_pmm_PMSetStatusResponse_POP_Status(struct zx_pmm_PMSetStatusResponse_s* x);

void zx_pmm_PMSetStatusResponse_PUSH_Status(struct zx_pmm_PMSetStatusResponse_s* x, struct zx_lu_Status_s* y);


void zx_pmm_PMSetStatusResponse_PUT_Status(struct zx_pmm_PMSetStatusResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_pmm_PMSetStatusResponse_ADD_Status(struct zx_pmm_PMSetStatusResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_pmm_PMSetStatusResponse_DEL_Status(struct zx_pmm_PMSetStatusResponse_s* x, int n);

void zx_pmm_PMSetStatusResponse_REV_Status(struct zx_pmm_PMSetStatusResponse_s* x);

#endif
/* -------------------------- pmm_PMUpdate -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMUpdate_EXT
#define zx_pmm_PMUpdate_EXT
#endif

struct zx_pmm_PMUpdate_s* zx_DEC_pmm_PMUpdate(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMUpdate_s* zx_NEW_pmm_PMUpdate(struct zx_ctx* c);
void zx_FREE_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMUpdate_s* zx_DEEP_CLONE_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x);
int zx_WALK_SO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x);
int zx_LEN_WO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x);
char* zx_ENC_SO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x, char* p);
char* zx_ENC_WO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMUpdate(struct zx_ctx* c, struct zx_pmm_PMUpdate_s* x);

struct zx_pmm_PMUpdate_s {
  ZX_ELEM_EXT
  zx_pmm_PMUpdate_EXT
  struct zx_pmm_PMUpdateItem_s* PMUpdateItem;	/* {1,-1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
};

#ifdef ZX_ENA_GETPUT

struct zx_pmm_PMUpdateItem_s* zx_pmm_PMUpdate_GET_PMUpdateItem(struct zx_pmm_PMUpdate_s* x, int n);
struct zx_elem_s* zx_pmm_PMUpdate_GET_NotifyTo(struct zx_pmm_PMUpdate_s* x, int n);

int zx_pmm_PMUpdate_NUM_PMUpdateItem(struct zx_pmm_PMUpdate_s* x);
int zx_pmm_PMUpdate_NUM_NotifyTo(struct zx_pmm_PMUpdate_s* x);

struct zx_pmm_PMUpdateItem_s* zx_pmm_PMUpdate_POP_PMUpdateItem(struct zx_pmm_PMUpdate_s* x);
struct zx_elem_s* zx_pmm_PMUpdate_POP_NotifyTo(struct zx_pmm_PMUpdate_s* x);

void zx_pmm_PMUpdate_PUSH_PMUpdateItem(struct zx_pmm_PMUpdate_s* x, struct zx_pmm_PMUpdateItem_s* y);
void zx_pmm_PMUpdate_PUSH_NotifyTo(struct zx_pmm_PMUpdate_s* x, struct zx_elem_s* y);


void zx_pmm_PMUpdate_PUT_PMUpdateItem(struct zx_pmm_PMUpdate_s* x, int n, struct zx_pmm_PMUpdateItem_s* y);
void zx_pmm_PMUpdate_PUT_NotifyTo(struct zx_pmm_PMUpdate_s* x, int n, struct zx_elem_s* y);

void zx_pmm_PMUpdate_ADD_PMUpdateItem(struct zx_pmm_PMUpdate_s* x, int n, struct zx_pmm_PMUpdateItem_s* z);
void zx_pmm_PMUpdate_ADD_NotifyTo(struct zx_pmm_PMUpdate_s* x, int n, struct zx_elem_s* z);

void zx_pmm_PMUpdate_DEL_PMUpdateItem(struct zx_pmm_PMUpdate_s* x, int n);
void zx_pmm_PMUpdate_DEL_NotifyTo(struct zx_pmm_PMUpdate_s* x, int n);

void zx_pmm_PMUpdate_REV_PMUpdateItem(struct zx_pmm_PMUpdate_s* x);
void zx_pmm_PMUpdate_REV_NotifyTo(struct zx_pmm_PMUpdate_s* x);

#endif
/* -------------------------- pmm_PMUpdateItem -------------------------- */
/* refby( zx_pmm_PMUpdate_s ) */
#ifndef zx_pmm_PMUpdateItem_EXT
#define zx_pmm_PMUpdateItem_EXT
#endif

struct zx_pmm_PMUpdateItem_s* zx_DEC_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMUpdateItem_s* zx_NEW_pmm_PMUpdateItem(struct zx_ctx* c);
void zx_FREE_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMUpdateItem_s* zx_DEEP_CLONE_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x);
int zx_WALK_SO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x);
int zx_LEN_WO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x);
char* zx_ENC_SO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x, char* p);
char* zx_ENC_WO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMUpdateItem(struct zx_ctx* c, struct zx_pmm_PMUpdateItem_s* x);

struct zx_pmm_PMUpdateItem_s {
  ZX_ELEM_EXT
  zx_pmm_PMUpdateItem_EXT
  struct zx_prov_PMDescriptor_s* PMDescriptor;	/* {1,1} nada */
  struct zx_str* at;	/* {0,1} attribute xs:dateTime */
  struct zx_str* itemID;	/* {1,1} attribute xs:string */
  struct zx_str* type;	/* {1,1} attribute hrxml:ExtendedAssociationTypeType */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_pmm_PMUpdateItem_GET_at(struct zx_pmm_PMUpdateItem_s* x);
struct zx_str* zx_pmm_PMUpdateItem_GET_itemID(struct zx_pmm_PMUpdateItem_s* x);
struct zx_str* zx_pmm_PMUpdateItem_GET_type(struct zx_pmm_PMUpdateItem_s* x);

struct zx_prov_PMDescriptor_s* zx_pmm_PMUpdateItem_GET_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x, int n);

int zx_pmm_PMUpdateItem_NUM_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x);

struct zx_prov_PMDescriptor_s* zx_pmm_PMUpdateItem_POP_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x);

void zx_pmm_PMUpdateItem_PUSH_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x, struct zx_prov_PMDescriptor_s* y);

void zx_pmm_PMUpdateItem_PUT_at(struct zx_pmm_PMUpdateItem_s* x, struct zx_str* y);
void zx_pmm_PMUpdateItem_PUT_itemID(struct zx_pmm_PMUpdateItem_s* x, struct zx_str* y);
void zx_pmm_PMUpdateItem_PUT_type(struct zx_pmm_PMUpdateItem_s* x, struct zx_str* y);

void zx_pmm_PMUpdateItem_PUT_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x, int n, struct zx_prov_PMDescriptor_s* y);

void zx_pmm_PMUpdateItem_ADD_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x, int n, struct zx_prov_PMDescriptor_s* z);

void zx_pmm_PMUpdateItem_DEL_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x, int n);

void zx_pmm_PMUpdateItem_REV_PMDescriptor(struct zx_pmm_PMUpdateItem_s* x);

#endif
/* -------------------------- pmm_PMUpdateResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_PMUpdateResponse_EXT
#define zx_pmm_PMUpdateResponse_EXT
#endif

struct zx_pmm_PMUpdateResponse_s* zx_DEC_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_PMUpdateResponse_s* zx_NEW_pmm_PMUpdateResponse(struct zx_ctx* c);
void zx_FREE_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_PMUpdateResponse_s* zx_DEEP_CLONE_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x);
int zx_WALK_SO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x);
int zx_LEN_WO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x);
char* zx_ENC_SO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x, char* p);
char* zx_ENC_WO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_PMUpdateResponse(struct zx_ctx* c, struct zx_pmm_PMUpdateResponse_s* x);

struct zx_pmm_PMUpdateResponse_s {
  ZX_ELEM_EXT
  zx_pmm_PMUpdateResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_PMUpdateResponse_GET_Status(struct zx_pmm_PMUpdateResponse_s* x, int n);

int zx_pmm_PMUpdateResponse_NUM_Status(struct zx_pmm_PMUpdateResponse_s* x);

struct zx_lu_Status_s* zx_pmm_PMUpdateResponse_POP_Status(struct zx_pmm_PMUpdateResponse_s* x);

void zx_pmm_PMUpdateResponse_PUSH_Status(struct zx_pmm_PMUpdateResponse_s* x, struct zx_lu_Status_s* y);


void zx_pmm_PMUpdateResponse_PUT_Status(struct zx_pmm_PMUpdateResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_pmm_PMUpdateResponse_ADD_Status(struct zx_pmm_PMUpdateResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_pmm_PMUpdateResponse_DEL_Status(struct zx_pmm_PMUpdateResponse_s* x, int n);

void zx_pmm_PMUpdateResponse_REV_Status(struct zx_pmm_PMUpdateResponse_s* x);

#endif
/* -------------------------- pmm_Provision -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_Provision_EXT
#define zx_pmm_Provision_EXT
#endif

struct zx_pmm_Provision_s* zx_DEC_pmm_Provision(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_Provision_s* zx_NEW_pmm_Provision(struct zx_ctx* c);
void zx_FREE_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_Provision_s* zx_DEEP_CLONE_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x, int dup_strs);
void zx_DUP_STRS_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x);
int zx_WALK_SO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x);
int zx_LEN_WO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x);
char* zx_ENC_SO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x, char* p);
char* zx_ENC_WO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_Provision(struct zx_ctx* c, struct zx_pmm_Provision_s* x);

struct zx_pmm_Provision_s {
  ZX_ELEM_EXT
  zx_pmm_Provision_EXT
  struct zx_prov_ProvisioningHandle_s* ProvisioningHandle;	/* {0,1} nada */
  struct zx_prov_PMDescriptor_s* PMDescriptor;	/* {0,1} nada */
  struct zx_elem_s* NotifyTo;	/* {0,1} a:EndpointReference */
  struct zx_str* wait;	/* {0,1} attribute xs:boolean */
};

#ifdef ZX_ENA_GETPUT
struct zx_str* zx_pmm_Provision_GET_wait(struct zx_pmm_Provision_s* x);

struct zx_prov_ProvisioningHandle_s* zx_pmm_Provision_GET_ProvisioningHandle(struct zx_pmm_Provision_s* x, int n);
struct zx_prov_PMDescriptor_s* zx_pmm_Provision_GET_PMDescriptor(struct zx_pmm_Provision_s* x, int n);
struct zx_elem_s* zx_pmm_Provision_GET_NotifyTo(struct zx_pmm_Provision_s* x, int n);

int zx_pmm_Provision_NUM_ProvisioningHandle(struct zx_pmm_Provision_s* x);
int zx_pmm_Provision_NUM_PMDescriptor(struct zx_pmm_Provision_s* x);
int zx_pmm_Provision_NUM_NotifyTo(struct zx_pmm_Provision_s* x);

struct zx_prov_ProvisioningHandle_s* zx_pmm_Provision_POP_ProvisioningHandle(struct zx_pmm_Provision_s* x);
struct zx_prov_PMDescriptor_s* zx_pmm_Provision_POP_PMDescriptor(struct zx_pmm_Provision_s* x);
struct zx_elem_s* zx_pmm_Provision_POP_NotifyTo(struct zx_pmm_Provision_s* x);

void zx_pmm_Provision_PUSH_ProvisioningHandle(struct zx_pmm_Provision_s* x, struct zx_prov_ProvisioningHandle_s* y);
void zx_pmm_Provision_PUSH_PMDescriptor(struct zx_pmm_Provision_s* x, struct zx_prov_PMDescriptor_s* y);
void zx_pmm_Provision_PUSH_NotifyTo(struct zx_pmm_Provision_s* x, struct zx_elem_s* y);

void zx_pmm_Provision_PUT_wait(struct zx_pmm_Provision_s* x, struct zx_str* y);

void zx_pmm_Provision_PUT_ProvisioningHandle(struct zx_pmm_Provision_s* x, int n, struct zx_prov_ProvisioningHandle_s* y);
void zx_pmm_Provision_PUT_PMDescriptor(struct zx_pmm_Provision_s* x, int n, struct zx_prov_PMDescriptor_s* y);
void zx_pmm_Provision_PUT_NotifyTo(struct zx_pmm_Provision_s* x, int n, struct zx_elem_s* y);

void zx_pmm_Provision_ADD_ProvisioningHandle(struct zx_pmm_Provision_s* x, int n, struct zx_prov_ProvisioningHandle_s* z);
void zx_pmm_Provision_ADD_PMDescriptor(struct zx_pmm_Provision_s* x, int n, struct zx_prov_PMDescriptor_s* z);
void zx_pmm_Provision_ADD_NotifyTo(struct zx_pmm_Provision_s* x, int n, struct zx_elem_s* z);

void zx_pmm_Provision_DEL_ProvisioningHandle(struct zx_pmm_Provision_s* x, int n);
void zx_pmm_Provision_DEL_PMDescriptor(struct zx_pmm_Provision_s* x, int n);
void zx_pmm_Provision_DEL_NotifyTo(struct zx_pmm_Provision_s* x, int n);

void zx_pmm_Provision_REV_ProvisioningHandle(struct zx_pmm_Provision_s* x);
void zx_pmm_Provision_REV_PMDescriptor(struct zx_pmm_Provision_s* x);
void zx_pmm_Provision_REV_NotifyTo(struct zx_pmm_Provision_s* x);

#endif
/* -------------------------- pmm_ProvisionResponse -------------------------- */
/* refby( zx_e_Body_s ) */
#ifndef zx_pmm_ProvisionResponse_EXT
#define zx_pmm_ProvisionResponse_EXT
#endif

struct zx_pmm_ProvisionResponse_s* zx_DEC_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_ns_s* ns);
struct zx_pmm_ProvisionResponse_s* zx_NEW_pmm_ProvisionResponse(struct zx_ctx* c);
void zx_FREE_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x, int free_strs);
#ifdef ZX_ENA_AUX
struct zx_pmm_ProvisionResponse_s* zx_DEEP_CLONE_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x, int dup_strs);
void zx_DUP_STRS_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x);
int zx_WALK_SO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
int zx_WALK_WO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x, void* ctx, int (*callback)(struct zx_node_s* node, void* ctx));
#endif
int zx_LEN_SO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x);
int zx_LEN_WO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x);
char* zx_ENC_SO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x, char* p);
char* zx_ENC_WO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x, char* p);
struct zx_str* zx_EASY_ENC_SO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x);
struct zx_str* zx_EASY_ENC_WO_pmm_ProvisionResponse(struct zx_ctx* c, struct zx_pmm_ProvisionResponse_s* x);

struct zx_pmm_ProvisionResponse_s {
  ZX_ELEM_EXT
  zx_pmm_ProvisionResponse_EXT
  struct zx_lu_Status_s* Status;	/* {1,1} nada */
};

#ifdef ZX_ENA_GETPUT

struct zx_lu_Status_s* zx_pmm_ProvisionResponse_GET_Status(struct zx_pmm_ProvisionResponse_s* x, int n);

int zx_pmm_ProvisionResponse_NUM_Status(struct zx_pmm_ProvisionResponse_s* x);

struct zx_lu_Status_s* zx_pmm_ProvisionResponse_POP_Status(struct zx_pmm_ProvisionResponse_s* x);

void zx_pmm_ProvisionResponse_PUSH_Status(struct zx_pmm_ProvisionResponse_s* x, struct zx_lu_Status_s* y);


void zx_pmm_ProvisionResponse_PUT_Status(struct zx_pmm_ProvisionResponse_s* x, int n, struct zx_lu_Status_s* y);

void zx_pmm_ProvisionResponse_ADD_Status(struct zx_pmm_ProvisionResponse_s* x, int n, struct zx_lu_Status_s* z);

void zx_pmm_ProvisionResponse_DEL_Status(struct zx_pmm_ProvisionResponse_s* x, int n);

void zx_pmm_ProvisionResponse_REV_Status(struct zx_pmm_ProvisionResponse_s* x);

#endif

#endif