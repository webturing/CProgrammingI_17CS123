#include <stdio.h>
void sort(int a[], int n);  // declare
void print(int a[], int n);
int main() {
  int a[] = {1, 3, 4, 5, 7, 9, 2, 4, 6, 8, 0};
  int n = sizeof(a) / sizeof(a[0]);
  sort(a, n);  // call use
  print(a, n);
}
void sort(int a[], int n) {  // implements
  int i, j, t;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= n - i - 2; j++)
      if (a[j] > a[j + 1]) {
        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
  }
}
void print(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}
