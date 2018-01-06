#include<stdio.h>
int main()
{
    int n=7016;
    char s[100];
    sprintf(s,"%d",n);
    //char t[10]="7";
    if(strstr(s,"701"))
        puts("ok");
}
