//1!+2!+....+20!
//int 0~12!
//long long 13~20!
#include<stdio.h>
int main()
{
    long long sum=0;//(1)初始化
    int n;
    long long m=1;//m=n!
    for(n=1;n<=20;n++){
        m*=n;
        sum+=m;//m=n!;循环体
    }
    printf("%lld\n",sum);//输出

    return 0;
}
