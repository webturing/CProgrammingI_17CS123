#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]="apple";
    char t[100]="Apples";
    char w[100]="banana";
    printf("%d\n",strcmp(s,t));///s>t  >0 a>b <0 a<b =0 a==b
    printf("%d\n",strcmp(s,w));///s<w


    if(strcmp(s,"end")==0)
    {


    }
    return 0;
}
