/***************************************************************************
                           tomsmocompfilter_mmx.cpp
                           ------------------------
    begin                : Sat Jul 10 2004
    copyright            : (C) 2004 by Dirk Ziegelmeier
    email                : dziegel@gmx.de
***************************************************************************/

/*
 * TomsMoComp algorithm taken from DScaler.
 * Copyright (c) 2002 Tom Barry.  All rights reserved.
 *
 * Ported by: Dirk Ziegelmeier
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 */

#include "tomsmocompfilter.h"

#ifdef HAVE_ASM_MMX
#define IS_MMX
#define SSE_TYPE MMX
#define FUNCT_NAME filterDScaler_MMX
#include "TomsMoCompAll.inc"
#undef  IS_MMX
#undef  SSE_TYPE
#undef  FUNCT_NAME
#endif
