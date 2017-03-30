/* Rotates coordinates of matrix by 90 degrees */

#include "rotate90.h"

const int IBlock[4][2] = {{0,0}, {2,0}, {-1,0}, {1,0}};
const int OBlock[4][2] = {{0,0}, {1,0}, {1,-1}, {0,-1}};
const int TBlock[4][2] = {{0,0}, {1,0}, {-1,0}, {0,-1}};
const int rotation_matrix[2][2] = {{0,1}, {-1,0}};


void print_array2(int a[4][2]) // rxc int matrix
{
   int i,j;
   /* print each row of the array */
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 2; j++)
         printf("%6i ", a[i][j]);
      printf("\n");
   }
   printf("\n");
};

int rotate90(Block* b){
    /* Rotates block 90 degrees clockwise
    using matrix multiplication with rotation matrix.*/
    int matC[2][2]={0};
    int i,j,k,z,r=4,c=2;
    int matA[r][c];
    for(z = 0; z<10; z++)
    {
      memcpy(&matA[z], &b->cells[z], sizeof(b->cells[0]));

    }
    for(i=0;i<r;i++){ //row of first matrix
      for(j=0;j<c;j++){  //column of second matrix
      int sum=0;
        for(k=0;k<c;k++) {
          sum=sum+matA[i][k]*rotation_matrix[k][j];
          matC[i][j]=sum;
        }
      }
    };
    print_array2(matC);
};

int main()
{
  printf("------------------------------------\n");
  Block *block = malloc(sizeof(Block));
  memcpy(block->cells,OBlock,sizeof(OBlock));
  rotate90(block);

      return 0;
}
