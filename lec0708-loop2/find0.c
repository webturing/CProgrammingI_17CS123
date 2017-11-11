#include<stdio.h>
int main()
{
    int start=1,end=100;
    int flag=0;

    int i=start;
    while(i<=end){
        if(i%13==12||i%17==16)
        {
            flag=1;
            break;
        }
        i++;
    }

    printf("%d\n",flag);
    return 0;
}
