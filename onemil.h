/* One million lines of text.
 *
 * Does anyone actually need a million lines of text? No.
 * I wanted it to test my hashmap implementation.
 *     - all lines are unique
 *     - all characters are ascii text (0 - 127)
 *     - single quote, double quote, and backslash have been removed
 *     - all whitespace is merged into a single space character
 *     - lines of original text have been randomized
 *     - lines are truncated to 80 characters
 *     - no blank lines
 *
 * #include "onemil.h"
 *
 * Compile onemil.c into your project and get the strings with
 * onemil[0] to onemil[ONEMIL_SZ - 1].
 *
 * No licence, public domain. I can't take credit for this text.
 * Use it however the heck you want to.
 */

#ifndef _ONEMIL_H_
#define _ONEMIL_H_

#define ONEMIL_SZ 1000000   // duh

extern char onemil[][80];

#endif // _ONEMIL_H_
