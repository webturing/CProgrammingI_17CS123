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
    srand(time(0));//�ı�����(ʹ�ò���ϵͳ��ʱ��)
    int i;
    for(i=0; i<10; i++)
        printf("%d ",rand()%2);//��Ӳ��
    printf("\n");
    for(i=0; i<10; i++)
        printf("%d ",rand()%6+1);//������
    printf("\n");
    for(i=0; i<10; i++)
        printf("%d ",rand()%52);//���˿���
    //[start,end] rand()%(end-start+1)+start
}
