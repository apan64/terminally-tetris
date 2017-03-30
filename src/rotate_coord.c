/* Rotates coordinates of matrix by 90 degrees */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h>

const int IBlock[4][2] = {{0,0}, {2,0}, {-1,0}, {1,0}};
const int OBlock[4][2] = {{0,0}, {1,0}, {1,-1}, {0,-1}};
const int TBlock[4][2] = {{0,0}, {1,0}, {-1,0}, {0,-1}};
const int ZBlock[4][2] = {{0,0}, {0,-1}, {-1,-1}, {1,0}};
const int SBlock[4][2] = {{0,0}, {0,-1}, {1,-1}, {-1,0}};
const int JBlock[4][2] = {{0,0}, {-1,0}, {-1,-1}, {1,0}};
const int LBlock[4][2] = {{0,0}, {-1,0}, {1,0}, {1,-1}};
const int rotation_matrix[2][2] = {{0,1}, {-1,0}};

int r = 4;
int c = 2;

void print_array(const int a[r][c]) // rxc const int matrix
{
   int i,j;
   /* print each row of the array */
   for (i = 0; i < r; i++) {
      for (j = 0; j < c; j++)
         printf("%6i ", a[i][j]);
      printf("\n");
   }
   printf("\n");
};

void print_array2(int a[r][c]) // rxc int matrix
{
   int i,j;
   /* print each row of the array */
   for (i = 0; i < r; i++) {
      for (j = 0; j < c; j++)
         printf("%6i ", a[i][j]);
      printf("\n");
   }
   printf("\n");
};

void rotate90(const int matA[r][c],const int matB[c][c]){
    int matC[2][2]={0},i,j,k;
    for (i = 0; i < r; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    print_array2(matC);
}


int main()
{
  print_array(TBlock);
  printf("------------------------------------\n");
  rotate90(TBlock,rotation_matrix);

      return 0;
}
