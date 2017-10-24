#include <stdio.h>
int main() {
  int N, sum, cur, i, M;
  scanf("%d", &N);
  while (N--) {
    scanf("%d", &M);
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
    Problem: 1243
    User: zj
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:944 kb
****************************************************************/