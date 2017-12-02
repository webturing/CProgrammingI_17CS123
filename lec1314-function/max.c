
#include <stdio.h>

int max(int a, int b);  //声明 declare

int main() {
  printf("%d\n", 4 == max(3, 4));
  printf("%d\n", 3 == max(3, 3));  // 调用call refer use;
  printf("%d\n", 4 == max(4, 3));
  return 0;
}
int max(int a, int b) {  //实现implementation
  int ret;
  if (a > b)
    ret = a;
  else
    ret = b;
  return ret;
}