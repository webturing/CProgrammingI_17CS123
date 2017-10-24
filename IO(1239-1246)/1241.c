#include <stdio.h>
int main() {
  int N, cur, i, sum;
  while (1 == scanf("%d", &N)) {
    if (N == 0) break;
    sum = 0;
    for (i = 0; i < N; i++) {
      scanf("%d", &cur);
      sum += cur;
    }
    printf("%d\n", sum);
  }
  return 0;
}
/**************************************************************
    Problem: 1241
    User: zj
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/