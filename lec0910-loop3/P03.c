#include<stdio.h>
int main()
{
    int n=20;
    int i,j;
    for(i=0; i<n; i++)
    {
        ///打印空格n-i
        for(j=0; j<n-i; j++)
            putchar(' ');
        ///打印* 1+2*i
        for(j=0; j<1+2*i; j++)
            putchar('*');
        ///换行
        printf("\n");
    }
    for(i=n-2; i>=0; i--)
    {
        ///打印空格n-i
        for(j=0; j<n-i; j++)
            putchar(' ');
        ///打印* 1+2*i
        for(j=0; j<1+2*i; j++)
            putchar('*');
        ///换行
        printf("\n");
    }
    return 0;
}
