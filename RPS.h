#ifndef RPS_H
#define RPS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct {
  int color;
  int strength;
} cell;

#include "CA.h"
#include "bitmap.h"

#define WHITE   0
#define ROCK    1
#define PAPER   2
#define SCISSOR 3

#define IMG_X 512
#define IMG_Y 512

// 512 megabytes
#define BUF_SIZE 256*1024*1024

#endif
