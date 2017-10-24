#include <stdio.h>
int main() {
  int a, b;
  while (2 == scanf("%d%d", &a, &b)) {
    printf("%d\n\n", a + b);
  }
  return 0;
}
/**************************************************************
    Problem: 1245
    User: zj
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/