#include "rotate90.h"

void print_array2(int a[4][2]){ // rxc int matrix
  // visualize rotation of block for error testing
   int i,j;

   char out[8][8];

   for (i=0; i<4; i++) {out[a[i][0]+4][a[i][1]+4] = '@';}

   for (i=0; i<8; i++) {
     for (j=0; j<8; j++) {
       if (out[i][j] == '@') {
         printf("%c", out[i][j]);
       } else {
         printf(".");
       }} printf("\n");
   } printf("\n");
};


void rotate_block(Block* b, const int rotation_matrix[2][2]){
    /* Rotates block 90 degrees
    using matrix multiplication with rotation matrix.*/
    int matC[4][2]={0};
    int i,j,k,z,r=4,c=2;

    for(i=0;i<r;i++){     //row of first matrix
      for(j=0;j<c;j++){   //column of second matrix
      int sum=0;
        for(k=0;k<c;k++) {
          sum=sum+(b->cells[i][k])*rotation_matrix[k][j];
          matC[i][j]=sum;
    }}};

    // reassign block's cells to the rotated coordinates
    printf("MATC\n");
    print_array2(matC);
    memcpy(b->cells, matC, sizeof(b->cells));
    print_array2(b->cells);

};

void rotate_right(Block* b){
  /* Rotates block 90 degrees CLOCKWISE.
  Checks block type for exception rotation cases. */
  switch(b->type) {
    case O: break;
    default: rotate_block(Block* b, rotation_matrix_R);
  }
};

void rotate_left(Block* b){
  /* Rotates block 90 degrees COUNTER-CLOCKWISE.
  Checks block type for exception rotation cases. */
  switch(b->type) {
    case O: break;
    default: rotate_block(Block* b, rotation_matrix_L);

  }
};

int main()
{
  Block *block = malloc(sizeof(Block));
  memcpy(block->cells,TBlock,sizeof(TBlock));
  print_array2(block->cells);
  printf("------------------------------------\n");
  rotate_right(block);
  printf("------------------------------------\n");
  print_array2(block->cells);

  return 0;
}
