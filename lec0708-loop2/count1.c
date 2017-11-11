#include<stdio.h>
int main()
{
    int start=1,end=100;
    int cnt=0;

    int i;
    for(i=start;i<=end;i++)
    {
        if(i%3==0||i%5==0)
            ++cnt;
    }
    printf("%d\n",cnt);

}
