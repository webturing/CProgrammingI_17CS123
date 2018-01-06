#include<stdio.h>
int main()
{
    char s[1000]="hello world";
    char t[1000]="llo";
    if(strstr(s,t))
        puts("Found!");
    else
        puts("Not found!");
}
