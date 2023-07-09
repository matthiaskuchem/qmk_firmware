/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H
#include "sendstring_german.h"

// bitmasks for modifier keys
#define MODS_SHIFT  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT))

// clang-format off
enum layers{
  MAC_NEO_L1,
  MAC_NEO_L3,
  MAC_NEO_L4,
  FN
};

enum custom_keycodes {
     MAC_NEO_1 = SAFE_RANGE,
     MAC_NEO_2,
     MAC_NEO_3,
     MAC_NEO_4,
     MAC_NEO_5,
     MAC_NEO_6,
     MAC_NEO_7,
     MAC_NEO_8,
     MAC_NEO_9,
     MAC_NEO_0,
     MAC_NEO_MIN,
     MAC_NEO_ACC,
     MAC_NEO_COMM,
     MAC_NEO_DOT,
     MAC_NEO_CIRC,
     MAC_NEO_TILDE,
     MAC_NEO_GRAVE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* transparent layer to copy for new layers
[LAYER_NAME] = LAYOUT_iso_85(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
*/

// Not working on L1 & L2: Hatschek (ˇ), Cedille, capital ß
[MAC_NEO_L1] = LAYOUT_iso_85(
    KC_ESC,         KC_BRID,        KC_BRIU,   KC_MCTL,   KC_LPAD,   RGB_VAD,   RGB_VAI,   KC_MPRV,   KC_MPLY,   KC_MNXT,      KC_MUTE,        KC_VOLD,     KC_VOLU,        KC_SNAP, KC_DEL,  RGB_MOD,
    LSA(DE_6),      MAC_NEO_1,      MAC_NEO_2, MAC_NEO_3, MAC_NEO_4, MAC_NEO_5, MAC_NEO_6, MAC_NEO_7, MAC_NEO_8, MAC_NEO_9,    MAC_NEO_0,      MAC_NEO_MIN, DE_GRV,         KC_BSPC,          KC_PGUP,
    KC_TAB,         DE_X,           DE_V,      DE_L,      DE_C,      DE_W,      DE_K,      DE_H,      DE_G,      DE_F,         DE_Q,           DE_SS,       MAC_NEO_ACC,    KC_ENT,           KC_PGDN,
    MO(MAC_NEO_L3), DE_U,           DE_I,      DE_A,      DE_E,      DE_O,      DE_S,      DE_N,      DE_R,      DE_T,         DE_D,           DE_Y,        MO(MAC_NEO_L3),                   KC_HOME,
    KC_LSFT,        MO(MAC_NEO_L4), DE_UDIA,   DE_ODIA,   DE_ADIA,   DE_P,      DE_Z,      DE_B,      DE_M,      MAC_NEO_COMM, MAC_NEO_DOT,    DE_J,        KC_RSFT,                 KC_UP,   KC_END,
    KC_LCMD,        KC_LOPT,        KC_LCTL,                                    KC_SPC,                                        MO(MAC_NEO_L4), MO(FN),      KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT),

// Not working on L3: turn dead key, super 1-3, °-accent, ſ, dead /
[MAC_NEO_L3] = LAYOUT_iso_85(
    KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,  KC_TRNS,   KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,  LSA(DE_N), LSA(DE_B),     A(DE_4),       A(DE_Y),  A(DE_S),    A(DE_HASH), LSA(DE_HASH), KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  A(DE_DOT), S(DE_MINS), A(DE_5),  A(DE_6),   MAC_NEO_CIRC,  DE_EXLM,       DE_CIRC,  S(DE_CIRC), DE_EQL,     DE_AMPR,      KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  LSA(DE_7), S(DE_7),    A(DE_8),  A(DE_9),   S(DE_PLUS),    S(DE_SS),      S(DE_8),  S(DE_9),    DE_MINS,    S(DE_DOT),    A(DE_L),  KC_TRNS,                      KC_TRNS,
    KC_TRNS,  KC_TRNS,   DE_HASH,    DE_DLR,   A(DE_7),   MAC_NEO_TILDE, MAC_NEO_GRAVE, DE_PLUS,  S(DE_5),    S(DE_2),    DE_QUOT,      DE_SCLN,  KC_TRNS,            KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,   KC_TRNS,                                        KC_TRNS,                                    KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

// mostly navigation and numpad implemented
[MAC_NEO_L4] = LAYOUT_iso_85(
    KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  LCMD(KC_UP),   KC_BSPC,  KC_UP,    C(DE_D),  LCMD(KC_DOWN),  A(DE_1),  DE_7,      DE_8,     DE_9,     DE_PLUS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  LCMD(KC_LEFT), KC_LEFT,  KC_DOWN,  KC_RIGHT, LCMD(KC_RIGHT), A(DE_SS), DE_4,      DE_5,     DE_6,     DE_COMM,  DE_DOT,   KC_TRNS,                      KC_TRNS,
    KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TAB,   KC_TRNS,  KC_ENT,         KC_TRNS,  S(DE_DOT), DE_1,     DE_2,     DE_3,     DE_SCLN,  KC_TRNS,            KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,       KC_TRNS,                                      DE_0,                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[FN] = LAYOUT_iso_85(
    KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  RGB_TOG,
    KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
    KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
     uint8_t active_modifiers = get_mods();
     uint8_t shifted = active_modifiers & MODS_SHIFT;

     // only act on keys pressed and ignore FN-layer
     if(!record->event.pressed || IS_LAYER_ON(FN)) {
          return true;
     }

     if(shifted) {
          // clear mods so they don't interfere with our send keys
          clear_mods();

          switch(keycode) {
                case MAC_NEO_1: // °
                    SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_LBRC))));
                    break;
                case MAC_NEO_2: // §
                    SEND_STRING(SS_LSFT("3"));
                    break;
                case MAC_NEO_3: // ℓ
                    // unicode needed
                    break;
                case MAC_NEO_4: // »
                    SEND_STRING(SS_LALT(SS_LSFT("q")));
                    break;
                case MAC_NEO_5: // «
                    SEND_STRING(SS_LALT("q"));
                    break;
                case MAC_NEO_6: // $
                    SEND_STRING(SS_LSFT("4"));
                    break;
                case MAC_NEO_7: // €
                    SEND_STRING(SS_RALT("e"));
                    break;
                case MAC_NEO_8: // „
                    SEND_STRING(SS_LALT(SS_LSFT("w")));
                    break;
                case MAC_NEO_9: // “
                    SEND_STRING(SS_LALT("2"));
                    break;
                case MAC_NEO_0: // ”
                    SEND_STRING(SS_LALT(SS_LSFT("2")));
                    break;
                case MAC_NEO_MIN: // —
                    SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_SLSH))));
                    break;
                case MAC_NEO_ACC: // ~
                    SEND_STRING(SS_LALT("n"));
                    break;
                case MAC_NEO_COMM: // –
                    SEND_STRING(SS_LALT(SS_TAP(X_SLSH)));
                    break;
                case MAC_NEO_DOT: // •
                    SEND_STRING(SS_LALT(SS_TAP(X_LBRC)));
                    break;
               default:
                    set_mods(active_modifiers);
                    return true;
          }

          set_mods(active_modifiers);
          return false;
     } else {
          switch(keycode) {
                case MAC_NEO_1: // 1
                    SEND_STRING(SS_TAP(X_1));
                    break;
                case MAC_NEO_2: // 2
                    SEND_STRING(SS_TAP(X_2));
                    break;
                case MAC_NEO_3: // 3
                    SEND_STRING(SS_TAP(X_3));
                    break;
                case MAC_NEO_4: // 4
                    SEND_STRING(SS_TAP(X_4));
                    break;
                case MAC_NEO_5: // 5
                    SEND_STRING(SS_TAP(X_5));
                    break;
                case MAC_NEO_6: // 6
                    SEND_STRING(SS_TAP(X_6));
                    break;
                case MAC_NEO_7: // 7
                    SEND_STRING(SS_TAP(X_7));
                    break;
                case MAC_NEO_8: // 8
                    SEND_STRING(SS_TAP(X_8));
                    break;
                case MAC_NEO_9: // 9
                    SEND_STRING(SS_TAP(X_9));
                    break;
                case MAC_NEO_0: // 0
                    SEND_STRING(SS_TAP(X_0));
                    break;
                case MAC_NEO_MIN: // -
                    SEND_STRING(SS_TAP(X_SLSH));
                    break;
                case MAC_NEO_ACC: // ́
                    SEND_STRING(SS_TAP(X_EQL));
                    break;
                case MAC_NEO_COMM: // ,
                    SEND_STRING(SS_TAP(X_COMM));
                    break;
                case MAC_NEO_DOT: // .
                    SEND_STRING(SS_TAP(X_DOT));
                    break;
                case MAC_NEO_TILDE: // ~
                    SEND_STRING(SS_LALT("n") " ");
                    break;
                case MAC_NEO_GRAVE: // `
                    SEND_STRING(SS_LSFT(SS_TAP(X_EQL)) " ");
                    break;
                case MAC_NEO_CIRC: // ^
                    SEND_STRING(SS_LALT(SS_LSFT(SS_TAP(X_6))) " ");
                    break;
               default:
                    return true;
          }

          return false;
     }
}
