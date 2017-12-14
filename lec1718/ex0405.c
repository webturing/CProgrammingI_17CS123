#include <stdio.h>
void print2d(int a0[], int ROW, int COL) {
  int i, j;
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) printf("%d ", a0[i * COL + j]);
    printf("\n");
  }
}
int main() {
  int a[3][4];
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++) scanf("%d", &a[i][j]);
  print2d(a[0], 3, 4);
  int maxi, maxj;
  maxi = maxj = 0;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      if (a[i][j] > a[maxi][maxj]) {
        maxi = i;
        maxj = j;
      }
  printf("%d %d %d\n", a[maxi][maxj], maxi, maxj);
  return 0;
}
