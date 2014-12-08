#ifndef CB3_H_
#define CB3_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define CB3_NUM_CELLS 2590
#define CB3_SAMPLERATE 16384
 
const char __attribute__((section(".progmem.data"))) CB3_DATA [] = {-2, -1, -2,
-2, -6, -12, -17, -20, -8, -2, 2, 4, 28, 46, 38, 29, 15, 2, -12, -22, -30, -34,
-34, -40, -53, -57, -47, -29, -5, 19, 43, 60, 104, 120, 96, 70, 31, 26, 7, -37,
-71, -98, -111, -121, -117, -97, -67, -29, 11, 49, 78, 102, 123, 127, 105, 61,
19, -22, -55, -80, -94, -97, -89, -80, -62, -39, 7, 65, 79, 88, 82, 74, 82, 64,
25, -9, -43, -68, -85, -91, -88, -73, -58, -48, -32, -8, 17, 44, 64, 80, 83, 86,
97, 78, 44, 12, 1, -28, -62, -85, -100, -100, -94, -81, -62, -32, -2, 30, 54,
76, 84, 93, 100, 76, 43, 10, -22, -48, -68, -77, -80, -71, -60, -44, -28, 15,
49, 57, 62, 60, 50, 46, 47, 26, 1, -24, -44, -57, -64, -63, -56, -45, -38, -27,
-12, 7, 26, 43, 53, 60, 58, 61, 65, 40, 24, 14, -15, -41, -62, -75, -79, -73,
-63, -51, -33, -9, 14, 36, 51, 62, 64, 67, 64, 43, 20, -5, -25, -43, -53, -57,
-56, -47, -39, -25, 7, 24, 30, 36, 36, 36, 27, 30, 29, 13, -3, -20, -31, -39,
-43, -42, -39, -34, -27, -18, -5, 8, 23, 33, 41, 44, 41, 47, 42, 35, 25, -2,
-23, -43, -55, -62, -61, -54, -45, -33, -15, 2, 20, 35, 45, 48, 45, 50, 42, 26,
8, -9, -24, -36, -42, -45, -40, -36, -23, -2, 7, 13, 19, 22, 23, 20, 19, 25, 20,
8, -2, -14, -21, -27, -30, -33, -32, -26, -20, -12, -2, 8, 19, 26, 32, 32, 32,
38, 41, 28, 7, -12, -29, -41, -48, -51, -47, -39, -30, -18, -5, 8, 22, 32, 37,
35, 35, 38, 29, 16, 1, -12, -23, -30, -35, -35, -32, -19, -6, -4, 3, 5, 12, 13,
16, 15, 18, 22, 16, 7, -2, -10, -17, -22, -28, -28, -25, -20, -16, -8, 1, 9, 18,
22, 27, 24, 30, 40, 30, 13, -4, -19, -31, -38, -43, -41, -35, -28, -20, -10, 3,
13, 22, 27, 28, 27, 30, 30, 19, 9, -4, -13, -22, -28, -29, -29, -16, -10, -8,
-5, -2, 3, 7, 10, 12, 12, 18, 21, 13, 7, 0, -8, -16, -22, -25, -23, -20, -16,
-11, -5, 3, 10, 15, 19, 21, 25, 35, 30, 16, 3, -11, -22, -31, -36, -36, -33,
-27, -19, -11, -2, 7, 15, 19, 23, 23, 23, 26, 23, 13, 4, -5, -14, -20, -25, -24,
-14, -13, -11, -11, -8, -4, 1, 6, 9, 12, 13, 20, 18, 12, 6, -2, -10, -17, -21,
-22, -21, -18, -13, -10, -2, 4, 10, 15, 18, 24, 27, 27, 20, 7, -4, -16, -24,
-28, -30, -30, -25, -19, -13, -7, 3, 9, 13, 17, 20, 20, 20, 23, 18, 9, 1, -8,
-15, -21, -19, -15, -15, -15, -15, -11, -8, -4, 1, 6, 10, 12, 15, 20, 17, 12, 4,
-5, -11, -18, -19, -21, -18, -15, -11, -7, -2, 4, 9, 15, 25, 23, 21, 20, 10, 1,
-8, -18, -22, -26, -26, -24, -19, -13, -8, -2, 3, 7, 12, 15, 17, 17, 18, 20, 14,
6, -2, -10, -16, -13, -13, -16, -16, -16, -15, -12, -8, -2, 3, 7, 12, 14, 18,
20, 15, 9, -1, -7, -13, -18, -20, -18, -16, -13, -10, -5, 1, 4, 14, 20, 20, 17,
17, 14, 4, -4, -12, -18, -21, -23, -21, -18, -13, -8, -5, -2, 3, 7, 12, 14, 15,
15, 19, 17, 9, 3, -5, -10, -10, -13, -16, -18, -18, -17, -15, -12, -5, -1, 6,
11, 14, 16, 20, 19, 12, 4, -4, -9, -15, -17, -18, -17, -15, -12, -9, -4, 1, 11,
17, 17, 16, 12, 12, 8, 1, -7, -12, -17, -20, -20, -18, -15, -10, -7, -5, 0, 3,
8, 11, 14, 14, 14, 17, 14, 8, 0, -4, -5, -12, -15, -18, -20, -18, -17, -13, -9,
-4, 3, 8, 12, 14, 17, 21, 16, 9, 1, -5, -10, -15, -17, -17, -15, -14, -10, -7,
0, 9, 14, 14, 14, 11, 9, 9, 4, -2, -7, -12, -15, -17, -17, -15, -12, -9, -7, -4,
-1, 4, 9, 11, 14, 13, 14, 16, 11, 4, 3, -2, -9, -15, -19, -20, -20, -19, -17,
-12, -5, -1, 6, 11, 14, 16, 18, 18, 13, 6, 0, -7, -12, -15, -17, -17, -15, -12,
-10, -2, 6, 9, 11, 11, 9, 8, 8, 8, 3, -2, -7, -10, -14, -14, -14, -12, -10, -9,
-7, -4, 1, 6, 9, 11, 13, 13, 14, 14, 9, 8, 1, -5, -14, -19, -20, -22, -20, -17,
-14, -9, -2, 4, 9, 13, 16, 16, 18, 14, 9, 3, -4, -9, -12, -16, -17, -16, -14,
-12, -4, 3, 5, 8, 8, 8, 6, 6, 8, 6, 1, -2, -7, -9, -12, -12, -12, -12, -11, -9,
-6, -2, 3, 6, 10, 11, 11, 13, 15, 15, 13, 5, -4, -11, -17, -21, -22, -21, -19,
-16, -11, -6, 1, 8, 11, 15, 15, 15, 16, 13, 6, 1, -6, -11, -14, -16, -16, -14,
-12, -4, 0, 1, 3, 5, 5, 6, 5, 6, 8, 6, 3, -2, -6, -9, -11, -12, -14, -12, -11,
-9, -6, 0, 3, 6, 10, 11, 11, 13, 18, 15, 8, 0, -9, -14, -19, -21, -21, -19, -16,
-12, -7, 0, 5, 10, 13, 13, 13, 15, 15, 10, 5, -2, -7, -11, -14, -16, -16, -12,
-6, -4, -2, 0, 1, 3, 5, 5, 5, 8, 10, 6, 3, -2, -6, -9, -13, -14, -14, -13, -9,
-7, -4, 0, 5, 8, 10, 12, 12, 18, 18, 10, 3, -6, -13, -18, -21, -21, -19, -16,
-13, -9, -4, 3, 8, 10, 12, 13, 12, 15, 13, 8, 3, -4, -9, -13, -14, -16, -11, -7,
-7, -6, -4, -2, 0, 3, 5, 5, 6, 10, 10, 6, 3, -2, -6, -11, -13, -14, -13, -11,
-9, -6, -2, 1, 5, 8, 10, 12, 17, 19, 13, 5, -2, -9, -14, -20, -20, -20, -18,
-14, -9, -6, -1, 5, 8, 10, 12, 12, 12, 14, 12, 7, -1, -6, -9, -13, -15, -11, -9,
-9, -9, -8, -6, -2, -1, 3, 5, 7, 8, 12, 10, 7, 3, -2, -8, -11, -13, -15, -13,
-11, -8, -6, 0, 3, 7, 8, 14, 15, 15, 15, 8, 1, -6, -13, -16, -18, -20, -18, -15,
-11, -8, -2, 1, 5, 8, 10, 12, 12, 14, 14, 8, 5, -2, -6, -11, -13, -9, -11, -11,
-11, -11, -9, -6, -2, 1, 5, 7, 8, 12, 14, 10, 7, 0, -6, -9, -13, -15, -13, -11,
-9, -8, -4, 0, 3, 7, 14, 16, 14, 14, 10, 3, -2, -9, -13, -17, -18, -17, -15,
-11, -8, -4, -1, 1, 5, 8, 10, 12, 12, 14, 12, 7, 1, -4, -10, -9, -10, -11, -13,
-13, -13, -11, -10, -6, 0, 3, 7, 9, 10, 14, 14, 9, 3, -2, -8, -11, -13, -13,
-13, -11, -10, -8, -2, 0, 7, 12, 14, 12, 10, 10, 7, 1, -6, -10, -13, -17, -17,
-15, -11, -10, -6, -4, -1, 3, 7, 9, 10, 10, 12, 14, 10, 5, 0, -6, -6, -8, -11,
-13, -15, -15, -13, -11, -8, -4, 1, 5, 9, 10, 12, 16, 12, 7, 1, -4, -10, -12,
-13, -13, -13, -10, -10, -6, -2, 5, 11, 12, 12, 9, 9, 9, 3, -2, -6, -12, -13,
-15, -13, -13, -10, -8, -6, -4, 0, 3, 7, 9, 11, 11, 12, 12, 9, 3, -1, -2, -6,
-12, -13, -15, -15, -15, -13, -10, -6, -1, 3, 7, 11, 12, 14, 14, 9, 5, 0, -6,
-10, -12, -13, -14, -12, -10, -8, -4, 3, 9, 9, 9, 9, 7, 7, 5, 1, -2, -8, -10,
-12, -14, -12, -10, -8, -8, -6, -2, 1, 5, 7, 9, 11, 11, 13, 11, 7, 3, 1, -4,
-10, -14, -17, -17, -17, -15, -12, -8, -2, 1, 7, 11, 13, 13, 15, 13, 7, 1, -2,
-8, -12, -14, -14, -14, -12, -10, -6, 1, 5, 7, 7, 7, 5, 5, 7, 5, 1, -2, -6, -10,
-10, -12, -10, -10, -10, -8, -6, -2, 1, 5, 7, 9, 9, 11, 13, 9, 9, 5, -2, -8,
-14, -16, -18, -18, -16, -14, -10, -4, 0, 5, 9, 13, 13, 13, 13, 11, 5, -1, -4,
-8, -12, -14, -14, -12, -12, -6, -1, 1, 3, 5, 5, 5, 5, 5, 7, 3, 1, -2, -6, -8,
-10, -10, -12, -10, -8, -6, -4, -1, 3, 5, 7, 9, 9, 11, 13, 13, 7, -1, -6, -12,
-16, -18, -18, -18, -14, -12, -6, -2, 3, 7, 11, 11, 11, 13, 13, 7, 3, -2, -6,
-10, -12, -14, -14, -12, -6, -2, -2, 0, 1, 3, 3, 3, 3, 5, 7, 3, 1, -2, -4, -8,
-10, -12, -12, -10, -8, -6, -2, -1, 3, 7, 9, 9, 9, 13, 15, 9, 3, -4, -10, -14,
-18, -18, -18, -16, -12, -8, -4, 1, 5, 9, 11, 11, 11, 13, 11, 7, 1, -2, -8, -10,
-12, -14, -12, -6, -4, -4, -2, 0, 1, 1, 3, 3, 5, 7, 7, 3, 1, -2, -4, -8, -10,
-12, -10, -10, -8, -6, -2, 1, 5, 7, 9, 9, 13, 15, 11, 5, -1, -8, -12, -16, -18,
-18, -16, -12, -10, -6, 0, 3, 7, 9, 9, 9, 11, 11, 9, 5, 0, -4, -8, -12, -14,
-12, -6, -6, -6, -6, -4, -2, 0, 1, 3, 5, 7, 9, 7, 5, 1, -2, -6, -10, -12, -12,
-10, -8, -6, -4, -1, 2, 5, 7, 9, 13, 13, 13, 7, 1, -4, -10, -14, -16, -16, -16,
-14, -10, -7, -2, 1, 4, 7, 10, 9, 10, 12, 12, 8, 4, -3, -7, -11, -13, -11, -9,
-9, -9, -9, -7, -5, -3, 0, 4, 6, 6, 10, 10, 8, 6, -1, -5, -9, -11, -13, -13,
-11, -9, -7, -5, 0, 4, 6, 10, 14, 12, 12, 10, 4, -3, -9, -13, -15, -17, -17,
-15, -11, -9, -5, -1, 2, 6, 8, 10, 10, 10, 12, 10, 6, 2, -3, -9, -11, -9, -9,
-11, -11, -11, -9, -7, -5, -1, 2, 4, 6, 8, 12, 12, 8, 4, -3, -7, -11, -11, -13,
-11, -11, -9, -7, -3, 2, 4, 10, 12, 12, 10, 10, 6, 0, -5, -9, -13, -15, -15,
-15, -11, -9, -7, -3, -1, 2, 6, 8, 10, 10, 10, 12, 8, 4, 0, -5, -7, -7, -9, -11,
-13, -13, -11, -11, -7, -3, -1, 4, 6, 8, 10, 12, 10, 6, 0, -5, -9, -11, -13,
-13, -11, -9, -7, -5, -3, 2, 8, 10, 10, 8, 8, 8, 4, -3, -7, -11, -13, -13, -13,
-11, -9, -7, -5, -3, 0, 4, 6, 8, 10, 8, 10, 10, 6, 4, -3, -3, -5, -9, -11, -13,
-13, -13, -11, -9, -5, -1, 2, 6, 8, 10, 12, 12, 8, 4, 0, -5, -9, -11, -11, -11,
-11, -9, -7, -5, 2, 8, 8, 10, 8, 6, 6, 6, 2, -3, -7, -9, -11, -13, -11, -9, -7,
-7, -5, -3, 0, 4, 6, 8, 8, 8, 10, 10, 6, 2, -1, -3, -9, -11, -13, -15, -13, -13,
-11, -7, -3, 2, 4, 8, 10, 10, 12, 10, 6, 2, -3, -7, -9, -11, -11, -11, -9, -9,
-7, 0, 4, 6, 8, 6, 6, 4, 6, 4, -1, -5, -7, -9, -11, -11, -9, -9, -7, -7, -5, -3,
2, 4, 6, 8, 8, 8, 10, 8, 6, 4, 0, -7, -11, -13, -15, -15, -13, -13, -9, -5, 0,
4, 6, 10, 10, 10, 10, 8, 4, 0, -5, -7, -11, -11, -11, -11, -9, -7, -3, 2, 4, 6,
6, 6, 4, 4, 4, 2, 0, -3, -7, -9, -9, -9, -9, -9, -7, -7, -5, -1, 2, 6, 6, 8, 8,
8, 8, 8, 6, 2, -5, -9, -13, -16, -16, -16, -14, -11, -7, -3, 2, 6, 8, 10, 10,
10, 10, 6, 4, -3, -5, -9, -11, -11, -11, -11, -7, -3, -1, 2, 2, 4, 4, 4, 4, 4,
4, 2, 0, -3, -5, -7, -9, -9, -9, -9, -7, -5, -3, -1, 4, 6, 6, 8, 8, 8, 10, 8, 4,
-3, -7, -11, -16, -16, -16, -14, -11, -9, -5, -1, 4, 8, 8, 8, 8, 10, 8, 6, 2,
-3, -7, -9, -12, -12, -12, -7, -5, -3, 0, -1, 2, 2, 4, 4, 4, 6, 4, 2, -1, -3,
-5, -7, -9, -9, -9, -9, -7, -5, -3, 2, 4, 6, 8, 6, 8, 13, 11, 6, 0, -7, -12,
-14, -16, -16, -14, -12, -9, -5, -3, 2, 6, 8, 8, 8, 8, 11, 8, 4, 0, -5, -7, -9,
-12, -12, -7, -5, -5, -5, -3, 0, 0, 2, 2, 4, 4, 6, 6, 4, 0, -3, -5, -9, -9, -9,
-9, -7, -7, -5, 0, 2, 4, 6, 6, 9, 13, 11, 6, 2, -5, -9, -12, -14, -16, -14, -12,
-10, -7, -3, 2, 4, 6, 6, 9, 9, 9, 9, 6, 2, -3, -5, -10, -12, -12, -7, -7, -7,
-7, -5, -3, -3, -1, 2, 4, 4, 6, 9, 6, 4, -1, -5, -7, -10, -10, -10, -10, -7, -5,
-3, -1, 2, 4, 6, 11, 11, 11, 9, 4, 0, -7, -10, -14, -14, -14, -12, -10, -7, -5,
-1, 2, 4, 6, 6, 9, 9, 9, 9, 4, 2, -3, -7, -10, -10, -7, -7, -7, -7, -7, -5, -5,
-1, 2, 4, 4, 6, 9, 9, 6, 2, -3, -5, -10, -10, -10, -10, -10, -7, -5, -3, 0, 2,
6, 11, 11, 9, 9, 4, 0, -5, -7, -12, -14, -14, -12, -10, -7, -5, -3, 0, 2, 4, 6,
6, 6, 9, 9, 6, 4, -1, -5, -7, -7, -7, -10, -10, -10, -10, -7, -5, -3, -1, 2, 4,
6, 9, 9, 9, 4, 0, -3, -7, -10, -10, -10, -10, -7, -7, -5, -1, 2, 4, 9, 9, 9, 6,
7, 2, -3, -5, -10, -12, -12, -12, -12, -10, -8, -5, -3, 0, 2, 4, 7, 7, 7, 9, 9,
4, 2, -3, -5, -5, -8, -10, -10, -10, -10, -10, -8, -5, -3, 2, 4, 7, 7, 9, 9, 7,
2, -1, -5, -8, -10, -10, -10, -8, -8, -5, -3, 0, 4, 7, 7, 7, 4, 4, 4, -1, -3,
-5, -8, -10, -10, -10, -8, -5, -5, -3, -3, -1, 2, 4, 4, 4, 4, 7, 4, 2, 0, -3,
-3, -5, -8, -8, -10, -10, -8, -8, -5, -3, -1, 2, 4, 4, 4, 7, 4, 2, 0, -3, -5,
-5, -8, -8, -8, -5, -5, -3, -3, 2, 2, 2, 2, 2, 2, 2, -1, 0, -3, -5, -5, -5, -5,
-5, -5, -5, -3, -3, 0, -1, 2, 2, 2, 2, 2, 2, 2, -1, 0, -1, -3, -5, -5, -5, -5,
-5, -5, -5, -3, 0, 0, 2, 2, 2, 2, 2, 2, 0, -1, -3, -3, -3, -5, -5, -5, -3, -3,
-3, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-1, 0, -1, 0, 0, -1, 0, -1, 0, -1, -3, -3, -3, -3, -3, -3, -3, };

#endif /* CB3_H_ */
