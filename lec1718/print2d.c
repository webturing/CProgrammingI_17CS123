#include <stdio.h>

/**
通用的二维数组的打印模块，
参数传递格式print2d(a[0],row,col);
*/

void print2DArray(int* a0, int row, int col) {
  int i;
  for (i = 0; i < row * col; i++) {
    printf("%d ", a0[i] /*a[0][i]*/);
    if ((i + 1) % col == 0) printf("\n");
  }
}
int main() {
  int a[3][4] = {1, 2, 3, 4, 5, 6, 7};
  print2DArray(a[0], 3, 4);
  int b[2][2] = {1, 2, 3};
  print2DArray(b[0], 2, 2);
  int c[5][6] = {0};
  print2DArray(c[0], 5, 6);

  return 0;
}