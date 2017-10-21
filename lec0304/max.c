#include<stdio.h>
//擂台算法计算n个数的最大(小)值
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
