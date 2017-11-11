#include<stdio.h>
int main()
{
    int start=1,end=100;
    int cnt=0;

    int i=start;
    while(i<=end){
        if(i%2==0){cnt++;}
        i++;
    }

    printf("%d\n",cnt);
    return 0;
}
