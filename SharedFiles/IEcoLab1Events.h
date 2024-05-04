﻿/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoLab1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoLab1
 * </описание>
 *
 * <ссылка>
 *
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECOLAB1EVENTS_H__
#define __I_ECOLAB1EVENTS_H__

#include "IEcoBase1.h"

/* IEcoLab1Events IID = {B6D38661-6827-46D9-9135-FD4B204A68D7} */
#ifndef __IID_IEcoLab1Events
static const UGUID IID_IEcoLab1Events = {0x01, 0x10, 0xB6, 0xD3, 0x86, 0x61, 0x68, 0x27, 0x46, 0xD9, 0x91, 0x35, 0xFD, 0x4B, 0x20, 0x4A, 0x68, 0xD7};
#endif /* __IID_IEcoLab1Events */

/* Обратный интерфейс */
typedef struct IEcoLab1VTblEvents {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ struct IEcoLab1Events* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ struct IEcoLab1Events* me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ struct IEcoLab1Events* me);

    /* IEcoLab1Events */
	    int16_t (ECOCALLMETHOD *OnInsertionSortCalled)(struct IEcoLab1Events* me, const void *startPtr, size_t elem_count);
    int16_t (ECOCALLMETHOD *OnInsertionSortEnded)(struct IEcoLab1Events* me, const void *startPtr, size_t elem_count);
    int16_t (ECOCALLMETHOD *OnInsertionSortIteration)(struct IEcoLab1Events* me, const void *startPtr, size_t elem_count, int leftIdx, int rightIdx);
    //int16_t(ECOCALLMETHOD* OnPrintStringCallback)(/* in */ struct IEcoLab1Events* me, char_t* to_print);
    //int16_t(ECOCALLMETHOD* OnSubarrayToSortCallback)(/* in */ struct IEcoLab1Events* me, void* arr, int num, int size, int lower, int upper);
    //int16_t (ECOCALLMETHOD* OnMedianIsReadyCallback)(/* in */ struct IEcoLab1Events* me, void* arr, int num, int size, int lower, int mid, int upper);
    //int16_t(ECOCALLMETHOD* OnPartitionIterationCallback)(/* in */ struct IEcoLab1Events* me, void* arr, int num, int size, int lower, int upper, int i, int j, int is_swapped, int pivot);

} IEcoLab1VTblEvents, *IEcoLab1VTblEventsPtr;

interface IEcoLab1Events {
    struct IEcoLab1VTblEvents *pVTbl;
} IEcoLab1Events;


#endif /* __I_ECOLAB1EVENTS_H__ */