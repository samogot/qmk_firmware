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

// Replacement header for keymap_ukrainian.h to use unicodemap.
// Inside macro, tap-dance and other you can use tap_unicodemap_code

#pragma once

#include "unicodemap_cyrillic.h"

#define UA_A XP_CYR_A  // А
#define UA_BE XP_CYR_BE  // Б
#define UA_VE XP_CYR_VE  // В
#define UA_HE XP_CYR_GHE  // Г
#define UA_DE XP_CYR_DE  // Д
#define UA_E XP_CYR_IE  // Е
#define UA_ZHE XP_CYR_ZHE  // Ж
#define UA_ZE XP_CYR_ZE  // З
#define UA_Y XP_CYR_I  // И
#define UA_YOT XP_CYR_SHTI  // Й
#define UA_KA XP_CYR_KA  // К
#define UA_EL XP_CYR_EL  // Л
#define UA_EM XP_CYR_EM  // М
#define UA_EN XP_CYR_EN  // Н
#define UA_O XP_CYR_O  // О
#define UA_PE XP_CYR_PE  // П
#define UA_ER XP_CYR_ER  // Р
#define UA_ES XP_CYR_ES  // С
#define UA_TE XP_CYR_TE  // Т
#define UA_U XP_CYR_U  // У
#define UA_EF XP_CYR_EF  // Ф
#define UA_KHA XP_CYR_HA  // Х
#define UA_TSE XP_CYR_TSE  // Ц
#define UA_CHE XP_CYR_CHE  // Ч
#define UA_SHA XP_CYR_SHA  // Ш
#define UA_SHCH XP_CYR_SHCHA  // Щ
#define UA_SOFT XP_CYR_SOFT  // Ь
#define UA_YU XP_CYR_YU  // Ю
#define UA_YA XP_CYR_YA  // Я
#define UA_YE XP_CYR_UKR_YE  // Є
#define UA_I XP_CYR_UKR_I  // І
#define UA_YI XP_CYR_YI  // Ї
#define UA_GE XP_CYR_GHE_UPT  // Ґ


// keymap_contributions.h
#define UA_28 XP_CYR_A  // А
#define UA_13 XP_CYR_BE  // Б
#define UA_29 XP_CYR_VE  // В
#define UA_38 XP_CYR_GHE  // Г
#define UA_23 XP_CYR_DE  // Д
#define UA_40 XP_CYR_IE  // Е
#define UA_22 XP_CYR_ZHE  // Ж
#define UA_34 XP_CYR_ZE  // З
#define UA_16 XP_CYR_I  // И
#define UA_44 XP_CYR_SHTI  // Й
#define UA_41 XP_CYR_KA  // К
#define UA_24 XP_CYR_EL  // Л
#define UA_17 XP_CYR_EM  // М
#define UA_39 XP_CYR_EN  // Н
#define UA_25 XP_CYR_O  // О
#define UA_27 XP_CYR_PE  // П
#define UA_26 XP_CYR_ER  // Р
#define UA_18 XP_CYR_ES  // С
#define UA_15 XP_CYR_TE  // Т
#define UA_42 XP_CYR_U  // У
#define UA_31 XP_CYR_EF  // Ф
#define UA_33 XP_CYR_HA  // Х
#define UA_43 XP_CYR_TSE  // Ц
#define UA_19 XP_CYR_CHE  // Ч
#define UA_36 XP_CYR_SHA  // Ш
#define UA_35 XP_CYR_SHCHA  // Щ
#define UA_14 XP_CYR_SOFT  // Ь
#define UA_12 XP_CYR_YU  // Ю
#define UA_20 XP_CYR_YA  // Я
#define UA_21 XP_CYR_UKR_YE  // Є
#define UA_30 XP_CYR_UKR_I  // І
#define UA_32 XP_CYR_YI  // Ї
#define UA_37 XP_CYR_GHE_UPT  // Ґ
