/*
 *   Copyright (C) 2008-2017 by TOPPERS Project
 *
 *  上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 * 
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 * 
 *  @(#) $Id: nTECSInfo_tAttrVarInfo.c 2640 2017-06-03 11:27:12Z okuma-top $
 */

/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * name             char_t*          ATTR_name       
 * size_expr        char_t*          ATTR_size_expr  
 * inCB             bool_t           ATTR_inCB       
 * offset           uint32_t         ATTR_offset     
 *
 * 呼び口関数 #_TCPF_#
 * call port: cTypeInfo signature: nTECSInfo_sTypeInfo context:task
 *   ER             cTypeInfo_getName( char_t* name, int_t max_len );
 *   void           cTypeInfo_getNameLength( uint16_t* len );
 *   void           cTypeInfo_getSize( uint32_t* size );
 *   void           cTypeInfo_getKind( int8_t* kind );
 *   void           cTypeInfo_getNType( int32_t* num );
 *   void           cTypeInfo_getTypeInfo( int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc );
 *   [ref_desc]
 *      Descriptor( nTECSInfo_sTypeInfo ) cTypeInfo_refer_to_descriptor();
 *      Descriptor( nTECSInfo_sTypeInfo ) cTypeInfo_ref_desc()      (same as above; abbreviated version);
 *
 * #[</PREAMBLE>]# */

/* Put prototype declaration and/or variale definition here #_PAC_# */
#include "nTECSInfo_tAttrVarInfo_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* entry port function #_TEPF_# */
/* #[<ENTRY_PORT>]# eAttrVarInfo
 * entry port: eAttrVarInfo
 * signature:  nTECSInfo_sAttrVarInfo
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eAttrVarInfo_getName
 * name:         eAttrVarInfo_getName
 * global_name:  nTECSInfo_tAttrVarInfo_eAttrVarInfo_getName
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAttrVarInfo_getName(CELLIDX idx, char_t* name, int_t max_len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eAttrVarInfo_getOffset
 * name:         eAttrVarInfo_getOffset
 * global_name:  nTECSInfo_tAttrVarInfo_eAttrVarInfo_getOffset
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eAttrVarInfo_getOffset(CELLIDX idx, uint32_t* offset)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eAttrVarInfo_getTypeInfo
 * name:         eAttrVarInfo_getTypeInfo
 * global_name:  nTECSInfo_tAttrVarInfo_eAttrVarInfo_getTypeInfo
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eAttrVarInfo_getTypeInfo(CELLIDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eAttrVarInfo_getSizeIsExpr
 * name:         eAttrVarInfo_getSizeIsExpr
 * global_name:  nTECSInfo_tAttrVarInfo_eAttrVarInfo_getSizeIsExpr
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eAttrVarInfo_getSizeIsExpr(CELLIDX idx, uint32_t* expr_str, int32_t max_len)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eAttrVarInfo_getSizeIs
 * name:         eAttrVarInfo_getSizeIs
 * global_name:  nTECSInfo_tAttrVarInfo_eAttrVarInfo_getSizeIs
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAttrVarInfo_getSizeIs(CELLIDX idx, uint32_t* size, const void* p_cb)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eAttrVarInfo_isInCB
 * name:         eAttrVarInfo_isInCB
 * global_name:  nTECSInfo_tAttrVarInfo_eAttrVarInfo_isInCB
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eAttrVarInfo_isInCB(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
