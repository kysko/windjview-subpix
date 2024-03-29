//	WinDjView
//	Copyright (C) 2004-2009 Andrew Zhezherun
//
//	This program is free software; you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation; either version 2 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License along
//	with this program; if not, write to the Free Software Foundation, Inc.,
//	51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//	http://www.gnu.org/copyleft/gpl.html

// $Id: Scaling.h,v 1.4 2009/01/28 16:59:20 zhezherun Exp $

#pragma once

GP<GPixmap> RescaleBitmap_subpix(GP<GBitmap> pSrc, UINT nWidth, UINT nHeight);
GP<GPixmap> RescalePixmap_subpix(GP<GPixmap> pSrc, UINT nWidth, UINT nHeight);
