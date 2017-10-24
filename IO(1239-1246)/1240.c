#include <stdio.h>
int main() {
  int N, a, b;
  scanf("%d", &N);

  while (N--) {
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
  }
  return 0;
}
/**************************************************************
    Problem: 1240
    User: zj
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/