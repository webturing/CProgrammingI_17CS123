#include<stdio.h>
#include<string.h>
int find(char s[],char c)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==c)
        {
           return i;
        }
    }
    return -1;
}
int main()
{
    char s[100]="abcdeabasdfasdfasfdasdf";
    char c='b';
    int idx=find(s,c);
    printf("%d\n",idx);

    return 0;
}
