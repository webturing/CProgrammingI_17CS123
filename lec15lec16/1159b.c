#include <stdio.h>
void print(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}
int sum(int a[], int n) {
  int ret = 0, i;
  for (i = 0; i < n; i++) ret += a[i];
  return ret;
}
int max(int a[], int n) {
  int ret = a[0], i;
  for (i = 1; i < n; i++) {
    if (a[i] > ret) ret = a[i];
  }
  return ret;
}
int min(int a[], int n) {
  int ret = a[0], i;
  for (i = 1; i < n; i++) {
    if (a[i] < ret) ret = a[i];
  }
  return ret;
}
int main() {
  int a[] = {100, 99, 98, 97, };  // 98.50
  int n = sizeof(a) / sizeof(a[0]);
  printf("%.2f\n", 1.0 * (sum(a, n) - max(a, n) - min(a, n)) / (n - 2));
  return 0;
}
