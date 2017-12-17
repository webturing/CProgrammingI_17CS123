#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]="ABBAAABBA";
    int n=strlen(s);
    while(n>=2&&n%2==0)
    {
        int find=0,i;
        for(i=0; i<n/2; i++)
            if(s[i]!=s[n-1-i])
            {
                find=1;
                break;
            }
        if(find==1)
            break;
        s[n/2]=0;
        n/=2;
    }
    printf("%d\n",n);

}
