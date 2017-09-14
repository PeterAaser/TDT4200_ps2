#ifndef BITMAP_H
#define BITMAP_H

#include "CA.h"
#include "RPS.h"

// note that we are extra careful with preprocessor macros. Adding parenthesises is never the
// wrong choice.
#define PIXEL(i,j) ((i)+(j)*IMG_X)

typedef unsigned char uchar;
void make_bmp(cell** image, int index);

#endif
