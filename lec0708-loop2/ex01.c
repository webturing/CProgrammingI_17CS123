#include<stdio.h>
int main()
{
    //A: 计算1-1000 中能被3和5整除的元素的和
    int start=1,end=1000;
    int sum=0;

    int i;
    for(i=start;i<=end;i++){
        if(i%3==0&&i%5==0)
            sum+=i; //sum=sum+i;
    }

    printf("%d\n",sum);

    return 0;

}
