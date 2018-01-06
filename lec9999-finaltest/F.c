
#include <stdio.h>
#include <stdlib.h>
//超时版本TLE:n=10000000 ~99999999  1.6s>1s
//对称 abcddcba

int main() {
  // freopen("test.txt", "r", stdout);
  int a, b, c, d;
  for (a = 1; a <= 9; a++)
    for (b = 0; b <= 9; b++)
      for (c = 0; c <= 9; c++)
        for (d = 0; d <= 9; d++)
          printf("%d%d%d%d%d%d%d%d\n", a, b, c, d, d, c, b, a);
  return 0;
}