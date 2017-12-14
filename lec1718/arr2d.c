#include <stdio.h>
void print2d(int a[3][4]) {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) printf("%d ", a[i][j]);
    printf("\n");
  }
}
int main() {

  // int a[3][4]={{1,2,3},{4,5,6}};
  int a[3][4] = {0};
  print2d(a);
  a[2][2] = 1;  //=>a[0][2]
  print2d(a);
  a[2][3] = 999;
  print2d(a);
  a[0][5] = 777;
  print2d(a);
  a[0][11] = a[11 / 4][11 % 4]
}
