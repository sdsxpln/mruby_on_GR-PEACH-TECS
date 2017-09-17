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
 *  @(#) $Id: nTECSInfo_tCellInfo.c 2640 2017-06-03 11:27:12Z okuma-top $
 */

/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * name             char_t*          ATTR_name       
 * cbp              void*            ATTR_cbp        
 * inibp            void*            ATTR_inibp      
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCelltypeInfo signature: nTECSInfo_sCelltypeInfo context:task
 *   ER             cCelltypeInfo_getName( char_t* name, int_t max_len );
 *   void           cCelltypeInfo_getNameLength( uint16_t* len );
 *   void           cCelltypeInfo_getNAttr( int32_t* nAttr );
 *   void           cCelltypeInfo_getAttrInfo( int32_t ith, Descriptor( nTECSInfo_sAttrVarInfo )* desc );
 *   void           cCelltypeInfo_getNVar( int32_t* nVar );
 *   void           cCelltypeInfo_getVarInfo( int32_t ith, Descriptor( nTECSInfo_sAttrVarInfo )* desc );
 *   void           cCelltypeInfo_getNCall( int32_t* nCall );
 *   void           cCelltypeInfo_getCallInfo( int32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc );
 *   void           cCelltypeInfo_getNEntry( int32_t* nEntry );
 *   void           cCelltypeInfo_getEntryInfo( int32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc );
 *   bool_t         cCelltypeInfo_isSingleton( );
 *   bool_t         cCelltypeInfo_isIDX_is_ID( );
 *   bool_t         cCelltypeInfo_hasCB( );
 *   bool_t         cCelltypeInfo_hasINIB( );
 *   [ref_desc]
 *      Descriptor( nTECSInfo_sCelltypeInfo ) cCelltypeInfo_refer_to_descriptor();
 *      Descriptor( nTECSInfo_sCelltypeInfo ) cCelltypeInfo_ref_desc()      (same as above; abbreviated version);
 *
 * #[</PREAMBLE>]# */

/* Put prototype declaration and/or variale definition here #_PAC_# */
#include "nTECSInfo_tCellInfo_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* entry port function #_TEPF_# */
/* #[<ENTRY_PORT>]# eCellInfo
 * entry port: eCellInfo
 * signature:  nTECSInfo_sCellInfo
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eCellInfo_getName
 * name:         eCellInfo_getName
 * global_name:  nTECSInfo_tCellInfo_eCellInfo_getName
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eCellInfo_getName(CELLIDX idx, char_t* name, int_t max_len)
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

/* #[<ENTRY_FUNC>]# eCellInfo_getCelltypeInfo
 * name:         eCellInfo_getCelltypeInfo
 * global_name:  nTECSInfo_tCellInfo_eCellInfo_getCelltypeInfo
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eCellInfo_getCelltypeInfo(CELLIDX idx, Descriptor( nTECSInfo_sCelltypeInfo )* desc)
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

/* #[<ENTRY_FUNC>]# eCellInfo_getCBP
 * name:         eCellInfo_getCBP
 * global_name:  nTECSInfo_tCellInfo_eCellInfo_getCBP
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eCellInfo_getCBP(CELLIDX idx, void** cbp)
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

/* #[<ENTRY_FUNC>]# eCellInfo_getINIBP
 * name:         eCellInfo_getINIBP
 * global_name:  nTECSInfo_tCellInfo_eCellInfo_getINIBP
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eCellInfo_getINIBP(CELLIDX idx, void** inibp)
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
