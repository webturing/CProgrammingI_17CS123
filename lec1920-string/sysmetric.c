#include<stdio.h>
int main()
{
    char s[256];
    scanf("%s",s);
    int i=0;
    while(s[i])i++;

    int n=i;
    int find=0;
    for(i=0; i<n/2; i++)
        if(s[i]!=s[n-1-i]){
            find=1;
            break;
        }
    if(find==1)
        puts("N");
    else
        puts("Y");
    return 0;
}
