#include <stdio.h>
int main() {
  int sum, cur, i, M;

  while (1 == scanf("%d", &M)) {
    sum = 0;
    for (i = 0; i < M; i++) {
      scanf("%d", &cur);
      sum += cur;
    }
    printf("%d\n", sum);
  }
  return 0;
}
/**************************************************************
    Problem: 1244
    User: zj
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/