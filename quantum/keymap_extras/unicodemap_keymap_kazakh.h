/* Copyright 2022
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Replacement header for kazakh in keymap_contribution.h to use unicodemap.
// Inside macro, tap-dance and other you can use tap_unicodemap_code

#pragma once

#include "unicodemap_cyrillic.h"

#define KK_17 XP_CYR_A  // А
#define KK_03 XP_CYR_BE  // Б
#define KK_18 XP_CYR_VE  // В
#define KK_26 XP_CYR_GHE  // Г
#define KK_12 XP_CYR_DE  // Д
#define KK_28 XP_CYR_IE  // Е
#define KK_11 XP_CYR_ZHE  // Ж
#define KK_23 XP_CYR_ZE  // З
#define KK_06 XP_CYR_I  // И
#define KK_32 XP_CYR_SHTI  // Й
#define KK_29 XP_CYR_KA  // К
#define KK_13 XP_CYR_EL  // Л
#define KK_07 XP_CYR_EM  // М
#define KK_27 XP_CYR_EN  // Н
#define KK_14 XP_CYR_O  // О
#define KK_16 XP_CYR_PE  // П
#define KK_15 XP_CYR_ER  // Р
#define KK_05 XP_CYR_TE  // Т
#define KK_30 XP_CYR_U  // У
#define KK_20 XP_CYR_EF  // Ф
#define KK_22 XP_CYR_HA  // Х
#define KK_31 XP_CYR_TSE  // Ц
#define KK_08 XP_CYR_CHE  // Ч
#define KK_25 XP_CYR_SHA  // Ш
#define KK_24 XP_CYR_SHCHA  // Щ
#define KK_21 XP_CYR_HARD  // Ъ
#define KK_19 XP_CYR_YERU  // Ы
#define KK_04 XP_CYR_SOFT  // Ь
#define KK_10 XP_CYR_E  // Э
#define KK_02 XP_CYR_YU  // Ю
#define KK_09 XP_CYR_YA  // Я
#define KK_42 XP_CYR_UKR_I  // І
#define KK_40 XP_CYR_GHE_STR  // Ғ
#define KK_35 XP_CYR_KA_DESC  // Қ
#define KK_41 XP_CYR_EN_DESC  // Ң
#define KK_37 XP_CYR_Y  // Ү
#define KK_36 XP_CYR_Y_STR  // Ұ
#define KK_33 XP_CYR_SHHA  // Һ
#define KK_43 XP_CYR_SCHWA  // Ә
#define KK_34 XP_CYR_BARO  // Ө
