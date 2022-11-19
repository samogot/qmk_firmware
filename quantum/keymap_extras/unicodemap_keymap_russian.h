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

// Replacement header for keymap_russian.h to use unicodemap.
// Inside macro, tap-dance and other you can use tap_unicodemap_code

#pragma once

#include "unicodemap_cyrillic.h"

#define RU_A XP_CYR_A  // А
#define RU_BE XP_CYR_BE  // Б
#define RU_VE XP_CYR_VE  // В
#define RU_GHE XP_CYR_GHE  // Г
#define RU_DE XP_CYR_DE  // Д
#define RU_IE XP_CYR_IE  // Е
#define RU_ZHE XP_CYR_ZHE  // Ж
#define RU_ZE XP_CYR_ZE  // З
#define RU_I XP_CYR_I  // И
#define RU_SHTI XP_CYR_SHTI  // Й
#define RU_KA XP_CYR_KA  // К
#define RU_EL XP_CYR_EL  // Л
#define RU_EM XP_CYR_EM  // М
#define RU_EN XP_CYR_EN  // Н
#define RU_O XP_CYR_O  // О
#define RU_PE XP_CYR_PE  // П
#define RU_ER XP_CYR_ER  // Р
#define RU_ES XP_CYR_ES  // С
#define RU_TE XP_CYR_TE  // Т
#define RU_U XP_CYR_U  // У
#define RU_EF XP_CYR_EF  // Ф
#define RU_HA XP_CYR_HA  // Х
#define RU_TSE XP_CYR_TSE  // Ц
#define RU_CHE XP_CYR_CHE  // Ч
#define RU_SHA XP_CYR_SHA  // Ш
#define RU_SHCH XP_CYR_SHCHA  // Щ
#define RU_HARD XP_CYR_HARD  // Ъ
#define RU_YERU XP_CYR_YERU  // Ы
#define RU_SOFT XP_CYR_SOFT  // Ь
#define RU_E XP_CYR_E  // Э
#define RU_YU XP_CYR_YU  // Ю
#define RU_YA XP_CYR_YA  // Я
#define RU_YO XP_CYR_IO  // Ё
