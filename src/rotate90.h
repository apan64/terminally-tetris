#ifndef ROTATE90_H
#define ROTATE90_H

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "utils.h"
#include "renderer.h"
#include "block_factory.h"
#include "controller.h"

void rotate_block(Block* b, const int rotation_matrix[2][2]);
// void rotate_I(Block* b, const int rotation_matrix[2][2]);

void rotate_right(Block* b);
void rotate_left(Block *b);



#endif
