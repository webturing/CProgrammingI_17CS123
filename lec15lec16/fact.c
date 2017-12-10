#include<stdio.h>
int main()
{
    int f[10];//f[0]-f[9]
    f[0]=1;

    int i;
    for(i=1;i<10;i++)
        f[i]=f[i-1]*i;

    for(i=0;i<10;i++)
        printf("%d ",f[i]);
    printf("\n");

}
