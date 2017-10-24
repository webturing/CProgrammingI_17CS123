#include <stdio.h>
int main() {
  int a, b;
  while (2 == scanf("%d%d", &a, &b)) {
    if (a == 0 && b == 0) break;
    printf("%d\n", a + b);
  }
  return 0;
}
/**************************************************************
    Problem: 1242
    User: zj
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/