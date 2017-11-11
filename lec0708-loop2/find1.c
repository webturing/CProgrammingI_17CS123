#include<stdio.h>
int main()
{
    int start=1,end=100000;
    int flag=0;

    int i;
    for(i=start;i<=end;i++)
    {
        if(i%13==12&&i%17==16)
        {
            printf("%d\n",i);
            flag=1;
            break;
        }
    }
    printf("%d\n",flag);

}
