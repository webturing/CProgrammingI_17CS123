#include<stdio.h>
int main()
{
    int start=1,end=1000;
    int sum=0;
    int i;
    for(i=start;i<=end;i++)
    {
        if(i%3==0&&i%5==0)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
