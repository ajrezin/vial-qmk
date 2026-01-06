/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// Vial Keyboard UID
#define VIAL_KEYBOARD_UID {0x35, 0xCA, 0x8D, 0xE4, 0xFA, 0x27, 0xC9, 0x56}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

// Make more space by undefining some things
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define LAYER_STATE_8BIT
