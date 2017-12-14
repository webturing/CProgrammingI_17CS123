#include <stdio.h>
void print2d(int a0[], int ROW, int COL) {
  int i, j;
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) printf("%d ", a0[i * COL + j]);
    printf("\n");
  }
}

int main() {
  int a[3][3];
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) scanf("%d", &a[i][j]);
  print2d(a[0], 3, 3);

  int sum = 0;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      if (i == j || i + j == 3 - 1) sum += a[i][j];

  printf("%d\n", sum);

  return 0;
}
