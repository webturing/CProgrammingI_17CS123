#include<stdio.h>
int main()
{
    //循环求和
    int start=1,end=100;

    int s=0;//Initialize
    int i=start;

    while(i<=end){
        if(i%2==0)
            s=s+i;//循环不变式
        i++;
    }


    printf("%d\n",s);
    return 0;
}
