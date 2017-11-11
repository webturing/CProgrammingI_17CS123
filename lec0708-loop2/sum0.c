#include<stdio.h>
int main()
{
    int start=1,end=100;
    int sum=0;
    int i=start;
    while(i<=end){
        sum+=i;


        i++;
    }

    printf("%d\n",sum);
    return 0;
}
