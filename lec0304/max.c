#include<stdio.h>
//��̨�㷨����n���������(С)ֵ
int main()
{
    int a,b;//Input
    int max;//Output
    scanf("%d%d",&a,&b);

    //TODO
    max=a;
    if(b>max){
            max=b;
    }

    printf("%d\n",max);//Output
    return 0;
}
