//1!+2!+....+20!
//int 0~12!
//long long 13~20!
#include<stdio.h>
int main()
{
    long long sum=0;//(1)��ʼ��
    int n;

    for(n=1;n<=20;n++)
    {
        long long m=1;//m=n!
        int i;
        for(i=2;i<=n;i++){
            m*=i;
        }
        sum+=m;//m=n!;ѭ����
    }
    printf("%lld\n",sum);//���

    return 0;
}
