#include<stdio.h>
int main()
{
    //ѭ�����
    int start=1,end=100;

    int s=0;//Initialize
    int i=start;

    while(i<=end){
        if(i%2==0)
            s=s+i;//ѭ������ʽ
        i++;
    }


    printf("%d\n",s);
    return 0;
}
