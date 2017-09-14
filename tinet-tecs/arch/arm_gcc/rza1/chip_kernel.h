/*
 *  TOPPERS/ASP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Advanced Standard Profile Kernel
 *
 *  Copyright (C) 2006-2016 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 *
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
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
 *  $Id: chip_kernel.h 936 2016-05-02 11:18:27Z coas-nagasima $
 */

/*
 *		kernel.hのターゲット依存部（RZ/A1用）
 *
 *  このヘッダファイルは，kernel.hからインクルードされる．他のファイル
 *  から直接インクルードすることはない．このファイルをインクルードする
 *  前に，t_stddef.hがインクルードされるので，それに依存してもよい．
 */

#ifndef TOPPERS_CHIP_KERNEL_H
#define TOPPERS_CHIP_KERNEL_H

/*
 *  割込み優先度の範囲
 */
#define TMIN_INTPRI		(-31)		/* 割込み優先度の最小値（最高値）*/
#define TMAX_INTPRI		(-1)		/* 割込み優先度の最大値（最低値）*/

/*
 *  ターゲット定義の割込み要求ライン属性
 */
#define TA_NEGEDGE		0x04U		/* ネガティブエッジトリガ */
#define TA_POSEDGE		0x08U		/* ポジティブエッジトリガ */
#define TA_BOTHEDGE		0x0cU		/* 両エッジトリガ */

/*
 *  サポートできる機能の定義
 *
 *  ena_int／dis_intとオーバランハンドラをサポートすることができる．
 */
#define TOPPERS_TARGET_SUPPORT_ENA_INT		/* ena_int */
#define TOPPERS_TARGET_SUPPORT_DIS_INT		/* dis_int */
#define TOPPERS_TARGET_SUPPORT_OVRHDR

/*
 *  高分解能タイマのタイマ周期
 *
 *  2^32 / 33.33…を丸めた値とする．
 */
#define TCYC_HRTCNT		128849019U

/*
 *  高分解能タイマのカウント値の進み幅
 */
#define TSTEP_HRTCNT	1U

/*
 *  オーバランハンドラの残りプロセッサ時間に指定できる最大値
 *
 *  この値をOSタイマへの設定値に変換してタイマに設定した後，タイマの現
 *  在値を読み出してμ秒単位に変換できる値としている．タイマの現在値を
 *  μ秒単位に変換する時に34を加えるため，以下の条件を満たす最大の値と
 *  する．
 *		(TMAX_OVRTIM * 33 + TMAX_OVRTIM / 3 + 1) + 34 < 2^32
 */
#define TMAX_OVRTIM		128849017U

/*
 *  コアで共通な定義
 */
#include "core_kernel.h"

#endif /* TOPPERS_CHIP_KERNEL_H */
