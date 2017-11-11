#include<stdio.h>
int main()
{
    int start=1,end=100;
    int sum=0;

    int i;
    for(i=start;i<=end;i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);
}
