
#include <stdio.h>
#include <stdlib.h>
/**
不重复的元素有多少个(排序去重)
选择排序和冒泡排序O(n^2)一般不能用于超过5万元素的数组
更快的排序用快速排序（归并排序）
*/
int inc(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int main() {
  freopen("test.in", "r", stdin);
  int T, n, A[100000], i;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", A + i);
    qsort(A, n, sizeof(A[0]), inc);
    int tot = 1;
    int recent = A[0];  // A[0]肯定是一个有效的数据
    for (i = 1; i < n; i++) {
      if (A[i] == recent)  //是一个重复数据
                        continue;
  		++tot;//遇到一个不重复的数据
  		recent=A[i];//更新recent
  	}
  	printf("%d\n",tot);
  }
  return 0;
}