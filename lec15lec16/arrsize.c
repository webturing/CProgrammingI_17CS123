#include <stdio.h>
int b[1024 * 1024 * 8];  // global array
int main() {
  char a[1024 * 1024];  // 1MB local array

  printf("%d\n", sizeof(char));
}
