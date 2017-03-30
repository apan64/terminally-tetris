/* Rotates image of matrix by 90 degrees */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h>

int IBlock[4][2] = {{0,0}, {2,0}, {-1,0}, {1,0}};
const int OBlock[4][2] = {{0,0}, {1,0}, {1,-1}, {0,-1}};
const int TBlock[4][2] = {{0,0}, {1,0}, {-1,0}, {0,-1}};
const int ZBlock[4][2] = {{0,0}, {0,-1}, {-1,-1}, {1,0}};
const int SBlock[4][2] = {{0,0}, {0,-1}, {1,-1}, {-1,0}};
const int JBlock[4][2] = {{0,0}, {-1,0}, {-1,-1}, {1,0}};
const int LBlock[4][2] = {{0,0}, {-1,0}, {1,0}, {1,-1}};

int r = 4;
int c = 2;

void print_array1(int a[r][c]) // rxc matrix
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

void print_array2(int a[c][r]) // cxr matrix
{
   int i,j;
   /* print each row of the array */
   for (i = 0; i < c; i++) {
      for (j = 0; j < r; j++)
         printf("%6i ", a[i][j]);
      printf("\n");
   }
   printf("\n");
};

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

void FlipRow(int *row, int columns)
{
  int index = 0;
    // swap item 0 with item n-1, 1 with n-2, ...
    for (index; index < columns / 2; index++)
    {
        swap(row+index, row+columns-1-index);
    }
};

void HFlipArray(int array[c][r])
{
  // flip image of matrix horizontally
  printf("HFlipArray\n");
  print_array2(array);
  int row = 0;
    for (row; row < c; row++)
    {
        FlipRow(array[row], r);
    }
};

int rotate90(int a[r][c])
{
  // tranpose matrix
  int i,j,transpose[c][r];
  for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
        transpose[j][i] = a[i][j];
    }
    HFlipArray(transpose);
    print_array2(transpose);
};

int main()
{
  print_array1(IBlock);
  printf("------------------------------------\n");
  rotate90(IBlock);

  return 0;
}
