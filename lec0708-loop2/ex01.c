#include<stdio.h>
int main()
{
    //A: ����1-1000 ���ܱ�3��5������Ԫ�صĺ�
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
