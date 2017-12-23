#include<stdio.h>
#include<string.h>
int strFind(char s[],char c[])
{
    int i=0,n=strlen(s);
    for(i=0;i<n-3;i++)
        if(s[i]=='e'&&s[i+1]=='a'&&s[i+2]=='b')
        return i;
    return -1;
}
int main()
{
    char s[100]="abeacdeabasdfasdfasfdasdf";
    char c[100]="eab";
    int idx=strFind(s,c);
    printf("%d\n",idx);

    return 0;
}
