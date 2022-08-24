/*
 * Since ZMK uses US ANSI, we need to remap their keys to norwegian.
 * To do this, change the keyboard layout on your PC to US and press
 * the key you want to re-map. Whatever is output is what you need to remap.
 */

#define NB_AT   RA(N2)     // @
#define NB_LBRC RA(N7)     // }
#define NB_RBRC RA(N0)     // }
#define NB_LPAR LS(N8)     // (
#define NB_RPAR LS(N9)     // )
#define NB_LBKT RA(N8)     // [
#define NB_RBKT RA(N9)     // ]

#define NB_PRCNT LS(N5)    // %
#define NB_DLLR  RA(N4)    // $
#define NB_CARET LS(RBKT)  // ^
#define NB_TILDE LS(GRAVE) // ~
#define NB_GRAVE PIPE      // `
#define NB_PIPE LS(BSLH)   // |
