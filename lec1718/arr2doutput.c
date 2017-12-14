#include <stdio.h>
void print2d(int a0[], int ROW, int COL) {
  int i, j;
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) printf("%d ", a0[i * COL + j]);
    printf("\n");
  }
}
int main() {

  // int a[3][4]={{1,2,3},{4,5,6}};
  int a[3][4] = {0};
  print2d(a[0], 3, 4);
  int b[2][2];
  print2d(b[0], 2, 2);
}
