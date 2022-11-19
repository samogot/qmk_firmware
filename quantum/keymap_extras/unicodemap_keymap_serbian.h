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

// Replacement header for keymap_serbian.h to use unicodemap.
// Inside macro, tap-dance and other you can use tap_unicodemap_code

#pragma once

#include "unicodemap_cyrillic.h"

#define RS_A XP_CYR_A  // А
#define RS_BE XP_CYR_BE  // Б
#define RS_VE XP_CYR_VE  // В
#define RS_GHE XP_CYR_GHE  // Г
#define RS_DE XP_CYR_DE  // Д
#define RS_IE XP_CYR_IE  // Е
#define RS_ZHE XP_CYR_ZHE  // Ж
#define RS_ZE XP_CYR_ZE  // З
#define RS_I XP_CYR_I  // И
#define RS_KA XP_CYR_KA  // К
#define RS_EL XP_CYR_EL  // Л
#define RS_EM XP_CYR_EM  // М
#define RS_EN XP_CYR_EN  // Н
#define RS_O XP_CYR_O  // О
#define RS_PE XP_CYR_PE  // П
#define RS_ER XP_CYR_ER  // Р
#define RS_ES XP_CYR_ES  // С
#define RS_TE XP_CYR_TE  // Т
#define RS_U XP_CYR_U  // У
#define RS_EF XP_CYR_EF  // Ф
#define RS_HA XP_CYR_HA  // Х
#define RS_TSE XP_CYR_TSE  // Ц
#define RS_CHE XP_CYR_CHE  // Ч
#define RS_SHA XP_CYR_SHA  // Ш
#define RS_DJE XP_CYR_DJE  // Ђ
#define RS_DZE XP_CYR_DZE  // Ѕ
#define RS_JE XP_CYR_JE  // Ј
#define RS_LJE XP_CYR_LJE  // Љ
#define RS_NJE XP_CYR_NJE  // Њ
#define RS_TSHE XP_CYR_TSHE  // Ћ
#define RS_DZHE XP_CYR_DZHE  // Џ
