#include <stdio.h>
/**
通用的二维数组的输入模块，
参数传递格式input2d(a[0],row,col);
*/
void input2D(int* a0, int row, int col) {
  int i;
  for (i = 0; i < row * col; i++) {
    scanf("%d", a0 + i);
  }
}
void print2D(int* a0, int row, int col) {
  int i;
  for (i = 0; i < row * col; i++) {
    printf("%d ", a0[i] /*a[0][i]*/);
    if ((i + 1) % col == 0) printf("\n");
  }
}
int main() {
  int a[3][4];
  input2D(a[0], 3, 4);
  print2D(a[0], 3, 4);
  return 0;
}