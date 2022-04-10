/* Copyright 2021
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


// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ @ │ [ │ { │ ( │ + │ = │ ) │ } │ ] │ % │ * │ & │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ F │ P │ B │ J │ L │ U │ Y │ ; │ - │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ R │ S │ T │ G │ M │ N │ E │ I │ O │ ' │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ Z │ X │ C │ D │ V │ K │ H │ , │ . │ / │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define CL_GRV  GRAVE  // `
#define CL_AT   N1    // @
#define CL_LBRC N2    // [
#define CL_LCBR N3    // {
#define CL_LPRN N4    // (
#define CL_PLUS N5    // +
#define CL_EQL  N6    // =
#define CL_RPRN N7    // )
#define CL_RCBR N8    // }
#define CL_RBRC N9    // ]
#define CL_PERC N0    // %
#define CL_ASTR MINUS // *
#define CL_AMPR EQUAL  // &
// Row 2
#define CL_Q    Q    // Q
#define CL_W    W    // W
#define CL_F    E    // F
#define CL_P    R    // P
#define CL_B    T    // B
#define CL_J    Y    // J
#define CL_L    U    // L
#define CL_U    I    // U
#define CL_Y    O    // Y
#define CL_SCLN P    // ;
#define CL_MINS LBRC // -
#define CL_DLR  RBRC // $
// Row 3
#define CL_A    A    // A
#define CL_R    S    // R
#define CL_S    D    // S
#define CL_T    F    // T
#define CL_G    G    // G
#define CL_M    H    // M
#define CL_N    J    // N
#define CL_E    K    // E
#define CL_I    L    // I
#define CL_O    SEMI // O
#define CL_QUOT SQT  // '
#define CL_BSLS BSLH // (backslash)
// Row 4
#define CL_Z    Z    // Z
#define CL_X    X    // X
#define CL_C    C    // C
#define CL_D    V    // D
#define CL_V    B    // V
#define CL_K    N    // K
#define CL_H    M    // H
#define CL_COMM COMMA // ,
#define CL_DOT  DOT  // .
#define CL_SLSH SLASH // /

/* Shifted symbols
   ~1234567890#!QWFPBJLUY:_^
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ # │ ! │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │ : │ _ │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ " │ | │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │ < │ > │ ? │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define CL_TILD LS(CL_GRV)   // ~
#define CL_1    LS(CL_AT)    // 1
#define CL_2    LS(CL_LBRC)  // 2
#define CL_3    LS(CL_LCBR)  // 3
#define CL_4    LS(CL_LPRN)  // 4
#define CL_5    LS(CL_PLUS)  // 6
#define CL_6    LS(CL_EQL)   // 6
#define CL_7    LS(CL_RPRN)  // 7
#define CL_8    LS(CL_RCBR)  // 8
#define CL_9    LS(CL_RBRC)  // 9
#define CL_0    LS(CL_PERC)  // 0
#define CL_HASH LS(CL_ASTR)  // #
#define CL_EXLM LS(CL_AMPR)  // !

// Row 2
#define CL_COLN LS(CL_SCLN)  // :
#define CL_UNDS LS(CL_MINS)  // _
#define CL_CIRC LS(CL_DLR)   // ^
// Row 3
#define CL_DQUO LS(CL_QUOT) // "
#define CL_PIPE LS(CL_BSLS) // |
// Row 4
#define CL_LABK LS(CL_COMM) // <
#define CL_RABK LS(CL_DOT)  // >
#define CL_QUES LS(CL_SLSH) // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │ Ü │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │ Ş │   │ İ │   │   │   │ İ │ Ö │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │ Ç │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define CL_GBRV RALT(CL_G)
#define CL_CCED RALT(CL_C)
#define CL_ODIA RALT(CL_O)
#define CL_UDIA RALT(CL_U)
#define CL_IDOT RALT(CL_I)
#define CL_SCED RALT(CL_S)
