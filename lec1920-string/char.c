#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char c = 'a';
  char x = 97;
  putchar(c);
  printf("%c", x);
  putchar(c - 32);
  putchar(c + ('A' - 'a'));
  putchar(toupper(c));
  return 0;
}