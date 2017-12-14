#include <stdio.h>
#include <string.h>
void input(int a[], int n) {
  for (i = 0; i < n; i++) scanf("%d", a + i);
}
void print(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}

int main() {
  int a[10] = {1, 2, 3};
  print(a, 10);

  //  int i;
  //  for(i=0;i<10;i++)
  //    a[i]=0;
  //
  //   print(a,10);
  memset(a, 0, 40);
  print(a, 10);
  memset(a, 1, 40);
  print(a, 10);
  memset(a, -1, 40);
  print(a, 10);
  return 0;
}
