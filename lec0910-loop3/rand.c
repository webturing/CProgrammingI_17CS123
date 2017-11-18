#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
rand() 0~RAND_MAX
#define RAND_MAX 32767
[start,end]
rand()%(end-start+1)+start
*/
int main()
{
    srand(time(0));//改变种子(使用操作系统的时钟)
    int i;
    for(i=0; i<10; i++)
        printf("%d ",rand()%2);//抛硬币
    printf("\n");
    for(i=0; i<10; i++)
        printf("%d ",rand()%6+1);//掷骰子
    printf("\n");
    for(i=0; i<10; i++)
        printf("%d ",rand()%52);//抽扑克牌
    //[start,end] rand()%(end-start+1)+start
}
