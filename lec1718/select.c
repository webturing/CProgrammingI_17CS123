#include <stdio.h>
void printArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}
void sort(int a[], int n) {
  int i, j, k, t;
  for (i = 0; i < n - 1; i++) {
    k = i;
    for (j = i + 1; j <= n - 1; j++)
      if (a[j] < a[k]) k = j;
    if (i != k) {
      t = a[i];
      a[i] = a[k];
      a[k] = t;
    }
    printArray(a, n);
  }
}

int main() {
  int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
  int n = sizeof(a) / sizeof(a[0]);
  printArray(a, n);
  sort(a, n);
  printArray(a, n);
}