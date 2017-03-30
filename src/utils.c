#include "utils.h"

const int GRID_W = 10;
const int GRID_H = 22;
const int OFFSET = 2;
const int SPAWN_X = GRID_W/2 - 1;
const int NUM_BLOCKS = 7;

// Encoding of cells occupied by an O block
// Note that here the positive Y axis points "down"
const int IBlock[4][2] = {{0,0}, {2,0}, {-1,0}, {1,0}};
const int OBlock[4][2] = {{0,0}, {1,0}, {1,-1}, {0,-1}};
const int TBlock[4][2] = {{0,0}, {1,0}, {-1,0}, {0,-1}};
const int ZBlock[4][2] = {{0,0}, {0,-1}, {-1,-1}, {1,0}};
const int SBlock[4][2] = {{0,0}, {0,-1}, {1,-1}, {-1,0}};
const int JBlock[4][2] = {{0,0}, {-1,0}, {-1,-1}, {1,0}};
const int LBlock[4][2] = {{0,0}, {-1,0}, {1,0}, {1,-1}};
const int rotation_matrix[2][2] = {{0,1}, {-1,0}};
