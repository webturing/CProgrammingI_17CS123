#include <stdio.h>
int main() {
  int A[3][4] = {{1, 2}, {1}};
  int i, j;
  for (i = 0; i < 16; i++) {
    // A[0][i]=i;
    // A[i/4][i%4]=i;
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) printf("%d ", A[i][j]);
    printf("\n");
  }
}
