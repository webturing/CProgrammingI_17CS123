#include<stdio.h>
int main()
{
    int start=1,end=100;
    int flag=0;
    int i=start;
    while(i<=end)
    {
        if(i%3==0||i%5==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    printf("%d\n",flag);



}
