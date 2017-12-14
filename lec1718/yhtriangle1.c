
#include <stdio.h>
#define N 30
void print2d(int a0[], int ROW, int COL) {
  int i, j;
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) printf("%d ", a0[i * COL + j]);
    printf("\n");
  }
}
int main() {
  freopen("yh.txt", "w", stdout);
  int a[N][N] = {0};

  int i, j;
  for (i = 0; i < N; i++) a[i][0] = 1;
  for (i = 0; i < N; i++) a[i][i] = 1;
  for (i = 2; i < N; i++)
    for (j = 1; j < i; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
  // print2d(a[0],N,N);
  for (i = 0; i < N; i++) {
    for (j = 0; j <= i; j++) printf("%d ", a[i][j]);
    printf("\n");
  }
  return 0;
}
