/* Copyright 2020
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

#pragma once

enum unicode_names {
    CYR_CAP_A,
    CYR_SML_A,
    CYR_CAP_BE,
    CYR_SML_BE,
    CYR_CAP_VE,
    CYR_SML_VE,
    CYR_CAP_GHE,
    CYR_SML_GHE,
    CYR_CAP_DE,
    CYR_SML_DE,
    CYR_CAP_IE,
    CYR_SML_IE,
    CYR_CAP_ZHE,
    CYR_SML_ZHE,
    CYR_CAP_ZE,
    CYR_SML_ZE,
    CYR_CAP_I,
    CYR_SML_I,
    CYR_CAP_SHTI,
    CYR_SML_SHTI,
    CYR_CAP_KA,
    CYR_SML_KA,
    CYR_CAP_EL,
    CYR_SML_EL,
    CYR_CAP_EM,
    CYR_SML_EM,
    CYR_CAP_EN,
    CYR_SML_EN,
    CYR_CAP_O,
    CYR_SML_O,
    CYR_CAP_PE,
    CYR_SML_PE,
    CYR_CAP_ER,
    CYR_SML_ER,
    CYR_CAP_ES,
    CYR_SML_ES,
    CYR_CAP_TE,
    CYR_SML_TE,
    CYR_CAP_U,
    CYR_SML_U,
    CYR_CAP_EF,
    CYR_SML_EF,
    CYR_CAP_HA,
    CYR_SML_HA,
    CYR_CAP_TSE,
    CYR_SML_TSE,
    CYR_CAP_CHE,
    CYR_SML_CHE,
    CYR_CAP_SHA,
    CYR_SML_SHA,
    CYR_CAP_SHCHA,
    CYR_SML_SHCHA,
    CYR_CAP_HARD,
    CYR_SML_HARD,
    CYR_CAP_YERU,
    CYR_SML_YERU,
    CYR_CAP_SOFT,
    CYR_SML_SOFT,
    CYR_CAP_E,
    CYR_SML_E,
    CYR_CAP_YU,
    CYR_SML_YU,
    CYR_CAP_YA,
    CYR_SML_YA,
    CYR_CAP_IO,
    CYR_SML_IO,
    CYR_CAP_DJE,
    CYR_SML_DJE,
    CYR_CAP_GJE,
    CYR_SML_GJE,
    CYR_CAP_UKR_YE,
    CYR_SML_UKR_YE,
    CYR_CAP_DZE,
    CYR_SML_DZE,
    CYR_CAP_UKR_I,
    CYR_SML_UKR_I,
    CYR_CAP_YI,
    CYR_SML_YI,
    CYR_CAP_JE,
    CYR_SML_JE,
    CYR_CAP_LJE,
    CYR_SML_LJE,
    CYR_CAP_NJE,
    CYR_SML_NJE,
    CYR_CAP_TSHE,
    CYR_SML_TSHE,
    CYR_CAP_KJE,
    CYR_SML_KJE,
    CYR_CAP_SHTU,
    CYR_SML_SHTU,
    CYR_CAP_DZHE,
    CYR_SML_DZHE,
    CYR_CAP_GHE_UPT,
    CYR_SML_GHE_UPT,
    CYR_CAP_GHE_STR,
    CYR_SML_GHE_STR,
    CYR_CAP_KA_DESC,
    CYR_SML_KA_DESC,
    CYR_CAP_EN_DESC,
    CYR_SML_EN_DESC,
    CYR_CAP_Y,
    CYR_SML_Y,
    CYR_CAP_Y_STR,
    CYR_SML_Y_STR,
    CYR_CAP_SHHA,
    CYR_SML_SHHA,
    CYR_CAP_SCHWA,
    CYR_SML_SCHWA,
    CYR_CAP_BARO,
    CYR_SML_BARO,
};

const uint32_t PROGMEM unicode_map[] = {
    [CYR_CAP_A]  = 0x0410,  // А
    [CYR_SML_A]  = 0x0430,  // а
    [CYR_CAP_BE]  = 0x0411,  // Б
    [CYR_SML_BE]  = 0x0431,  // б
    [CYR_CAP_VE]  = 0x0412,  // В
    [CYR_SML_VE]  = 0x0432,  // в
    [CYR_CAP_GHE]  = 0x0413,  // Г
    [CYR_SML_GHE]  = 0x0433,  // г
    [CYR_CAP_DE]  = 0x0414,  // Д
    [CYR_SML_DE]  = 0x0434,  // д
    [CYR_CAP_IE]  = 0x0415,  // Е
    [CYR_SML_IE]  = 0x0435,  // е
    [CYR_CAP_ZHE]  = 0x0416,  // Ж
    [CYR_SML_ZHE]  = 0x0436,  // ж
    [CYR_CAP_ZE]  = 0x0417,  // З
    [CYR_SML_ZE]  = 0x0437,  // з
    [CYR_CAP_I]  = 0x0418,  // И
    [CYR_SML_I]  = 0x0438,  // и
    [CYR_CAP_SHTI]  = 0x0419,  // Й
    [CYR_SML_SHTI]  = 0x0439,  // й
    [CYR_CAP_KA]  = 0x041A,  // К
    [CYR_SML_KA]  = 0x043A,  // к
    [CYR_CAP_EL]  = 0x041B,  // Л
    [CYR_SML_EL]  = 0x043B,  // л
    [CYR_CAP_EM]  = 0x041C,  // М
    [CYR_SML_EM]  = 0x043C,  // м
    [CYR_CAP_EN]  = 0x041D,  // Н
    [CYR_SML_EN]  = 0x043D,  // н
    [CYR_CAP_O]  = 0x041E,  // О
    [CYR_SML_O]  = 0x043E,  // о
    [CYR_CAP_PE]  = 0x041F,  // П
    [CYR_SML_PE]  = 0x043F,  // п
    [CYR_CAP_ER]  = 0x0420,  // Р
    [CYR_SML_ER]  = 0x0440,  // р
    [CYR_CAP_ES]  = 0x0421,  // С
    [CYR_SML_ES]  = 0x0441,  // с
    [CYR_CAP_TE]  = 0x0422,  // Т
    [CYR_SML_TE]  = 0x0442,  // т
    [CYR_CAP_U]  = 0x0423,  // У
    [CYR_SML_U]  = 0x0443,  // у
    [CYR_CAP_EF]  = 0x0424,  // Ф
    [CYR_SML_EF]  = 0x0444,  // ф
    [CYR_CAP_HA]  = 0x0425,  // Х
    [CYR_SML_HA]  = 0x0445,  // х
    [CYR_CAP_TSE]  = 0x0426,  // Ц
    [CYR_SML_TSE]  = 0x0446,  // ц
    [CYR_CAP_CHE]  = 0x0427,  // Ч
    [CYR_SML_CHE]  = 0x0447,  // ч
    [CYR_CAP_SHA]  = 0x0428,  // Ш
    [CYR_SML_SHA]  = 0x0448,  // ш
    [CYR_CAP_SHCHA]  = 0x0429,  // Щ
    [CYR_SML_SHCHA]  = 0x0449,  // щ
    [CYR_CAP_HARD]  = 0x042A,  // Ъ
    [CYR_SML_HARD]  = 0x044A,  // ъ
    [CYR_CAP_YERU]  = 0x042B,  // Ы
    [CYR_SML_YERU]  = 0x044B,  // ы
    [CYR_CAP_SOFT]  = 0x042C,  // Ь
    [CYR_SML_SOFT]  = 0x044C,  // ь
    [CYR_CAP_E]  = 0x042D,  // Э
    [CYR_SML_E]  = 0x044D,  // э
    [CYR_CAP_YU]  = 0x042E,  // Ю
    [CYR_SML_YU]  = 0x044E,  // ю
    [CYR_CAP_YA]  = 0x042F,  // Я
    [CYR_SML_YA]  = 0x044F,  // я
    [CYR_CAP_IO]  = 0x0401,  // Ё
    [CYR_SML_IO]  = 0x0451,  // ё
    [CYR_CAP_DJE]  = 0x0402,  // Ђ
    [CYR_SML_DJE]  = 0x0452,  // ђ
    [CYR_CAP_GJE]  = 0x0403,  // Ѓ
    [CYR_SML_GJE]  = 0x0453,  // ѓ
    [CYR_CAP_UKR_YE]  = 0x0404,  // Є
    [CYR_SML_UKR_YE]  = 0x0454,  // є
    [CYR_CAP_DZE]  = 0x0405,  // Ѕ
    [CYR_SML_DZE]  = 0x0455,  // ѕ
    [CYR_CAP_UKR_I]  = 0x0406,  // І
    [CYR_SML_UKR_I]  = 0x0456,  // і
    [CYR_CAP_YI]  = 0x0407,  // Ї
    [CYR_SML_YI]  = 0x0457,  // ї
    [CYR_CAP_JE]  = 0x0408,  // Ј
    [CYR_SML_JE]  = 0x0458,  // ј
    [CYR_CAP_LJE]  = 0x0409,  // Љ
    [CYR_SML_LJE]  = 0x0459,  // љ
    [CYR_CAP_NJE]  = 0x040A,  // Њ
    [CYR_SML_NJE]  = 0x045A,  // њ
    [CYR_CAP_TSHE]  = 0x040B,  // Ћ
    [CYR_SML_TSHE]  = 0x045B,  // ћ
    [CYR_CAP_KJE]  = 0x040C,  // Ќ
    [CYR_SML_KJE]  = 0x045C,  // ќ
    [CYR_CAP_SHTU]  = 0x040E,  // Ў
    [CYR_SML_SHTU]  = 0x045E,  // ў
    [CYR_CAP_DZHE]  = 0x040F,  // Џ
    [CYR_SML_DZHE]  = 0x045F,  // џ
    [CYR_CAP_GHE_UPT]  = 0x0490,  // Ґ
    [CYR_SML_GHE_UPT]  = 0x0491,  // ґ
    [CYR_CAP_GHE_STR]  = 0x0492,  // Ғ
    [CYR_SML_GHE_STR]  = 0x0493,  // ғ
    [CYR_CAP_KA_DESC]  = 0x049A,  // Қ
    [CYR_SML_KA_DESC]  = 0x049B,  // қ
    [CYR_CAP_EN_DESC]  = 0x04A2,  // Ң
    [CYR_SML_EN_DESC]  = 0x04A3,  // ң
    [CYR_CAP_Y]  = 0x04AE,  // Ү
    [CYR_SML_Y]  = 0x04AF,  // ү
    [CYR_CAP_Y_STR]  = 0x04B0,  // Ұ
    [CYR_SML_Y_STR]  = 0x04B1,  // ұ
    [CYR_CAP_SHHA]  = 0x04BA,  // Һ
    [CYR_SML_SHHA]  = 0x04BB,  // һ
    [CYR_CAP_SCHWA]  = 0x04D8,  // Ә
    [CYR_SML_SCHWA]  = 0x04D9,  // ә
    [CYR_CAP_BARO]  = 0x04E8,  // Ө
    [CYR_SML_BARO]  = 0x04E9,  // ө
};

#define XP_CYR_A XP(CYR_SML_A, CYR_CAP_A)
#define XP_CYR_BE XP(CYR_SML_BE, CYR_CAP_BE)
#define XP_CYR_VE XP(CYR_SML_VE, CYR_CAP_VE)
#define XP_CYR_GHE XP(CYR_SML_GHE, CYR_CAP_GHE)
#define XP_CYR_DE XP(CYR_SML_DE, CYR_CAP_DE)
#define XP_CYR_IE XP(CYR_SML_IE, CYR_CAP_IE)
#define XP_CYR_ZHE XP(CYR_SML_ZHE, CYR_CAP_ZHE)
#define XP_CYR_ZE XP(CYR_SML_ZE, CYR_CAP_ZE)
#define XP_CYR_I XP(CYR_SML_I, CYR_CAP_I)
#define XP_CYR_SHTI XP(CYR_SML_SHTI, CYR_CAP_SHTI)
#define XP_CYR_KA XP(CYR_SML_KA, CYR_CAP_KA)
#define XP_CYR_EL XP(CYR_SML_EL, CYR_CAP_EL)
#define XP_CYR_EM XP(CYR_SML_EM, CYR_CAP_EM)
#define XP_CYR_EN XP(CYR_SML_EN, CYR_CAP_EN)
#define XP_CYR_O XP(CYR_SML_O, CYR_CAP_O)
#define XP_CYR_PE XP(CYR_SML_PE, CYR_CAP_PE)
#define XP_CYR_ER XP(CYR_SML_ER, CYR_CAP_ER)
#define XP_CYR_ES XP(CYR_SML_ES, CYR_CAP_ES)
#define XP_CYR_TE XP(CYR_SML_TE, CYR_CAP_TE)
#define XP_CYR_U XP(CYR_SML_U, CYR_CAP_U)
#define XP_CYR_EF XP(CYR_SML_EF, CYR_CAP_EF)
#define XP_CYR_HA XP(CYR_SML_HA, CYR_CAP_HA)
#define XP_CYR_TSE XP(CYR_SML_TSE, CYR_CAP_TSE)
#define XP_CYR_CHE XP(CYR_SML_CHE, CYR_CAP_CHE)
#define XP_CYR_SHA XP(CYR_SML_SHA, CYR_CAP_SHA)
#define XP_CYR_SHCHA XP(CYR_SML_SHCHA, CYR_CAP_SHCHA)
#define XP_CYR_HARD XP(CYR_SML_HARD, CYR_CAP_HARD)
#define XP_CYR_YERU XP(CYR_SML_YERU, CYR_CAP_YERU)
#define XP_CYR_SOFT XP(CYR_SML_SOFT, CYR_CAP_SOFT)
#define XP_CYR_E XP(CYR_SML_E, CYR_CAP_E)
#define XP_CYR_YU XP(CYR_SML_YU, CYR_CAP_YU)
#define XP_CYR_YA XP(CYR_SML_YA, CYR_CAP_YA)
#define XP_CYR_IO XP(CYR_SML_IO, CYR_CAP_IO)
#define XP_CYR_DJE XP(CYR_SML_DJE, CYR_CAP_DJE)
#define XP_CYR_GJE XP(CYR_SML_GJE, CYR_CAP_GJE)
#define XP_CYR_UKR_YE XP(CYR_SML_UKR_YE, CYR_CAP_UKR_YE)
#define XP_CYR_DZE XP(CYR_SML_DZE, CYR_CAP_DZE)
#define XP_CYR_UKR_I XP(CYR_SML_UKR_I, CYR_CAP_UKR_I)
#define XP_CYR_YI XP(CYR_SML_YI, CYR_CAP_YI)
#define XP_CYR_JE XP(CYR_SML_JE, CYR_CAP_JE)
#define XP_CYR_LJE XP(CYR_SML_LJE, CYR_CAP_LJE)
#define XP_CYR_NJE XP(CYR_SML_NJE, CYR_CAP_NJE)
#define XP_CYR_TSHE XP(CYR_SML_TSHE, CYR_CAP_TSHE)
#define XP_CYR_KJE XP(CYR_SML_KJE, CYR_CAP_KJE)
#define XP_CYR_SHTU XP(CYR_SML_SHTU, CYR_CAP_SHTU)
#define XP_CYR_DZHE XP(CYR_SML_DZHE, CYR_CAP_DZHE)
#define XP_CYR_GHE_UPT XP(CYR_SML_GHE_UPT, CYR_CAP_GHE_UPT)
#define XP_CYR_GHE_STR XP(CYR_SML_GHE_STR, CYR_CAP_GHE_STR)
#define XP_CYR_KA_DESC XP(CYR_SML_KA_DESC, CYR_CAP_KA_DESC)
#define XP_CYR_EN_DESC XP(CYR_SML_EN_DESC, CYR_CAP_EN_DESC)
#define XP_CYR_Y XP(CYR_SML_Y, CYR_CAP_Y)
#define XP_CYR_Y_STR XP(CYR_SML_Y_STR, CYR_CAP_Y_STR)
#define XP_CYR_SHHA XP(CYR_SML_SHHA, CYR_CAP_SHHA)
#define XP_CYR_SCHWA XP(CYR_SML_SCHWA, CYR_CAP_SCHWA)
#define XP_CYR_BARO XP(CYR_SML_BARO, CYR_CAP_BARO)
