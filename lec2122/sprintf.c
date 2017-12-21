#include<stdio.h>

int main()
{
    int m=12345;
    char s[100];
    sprintf(s,"%08d",m);
    puts(s);

    return 0;
}
