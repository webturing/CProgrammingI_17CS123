#include<stdio.h>
int main()
{
    int n=20;
    int i,j;
    for(i=0; i<n; i++)
    {
        ///��ӡ�ո�n-i
        for(j=0; j<n-i; j++)
            putchar(' ');
        ///��ӡ* 1+2*i
        for(j=0; j<1+2*i; j++)
            putchar('*');
        ///����
        printf("\n");
    }
    for(i=n-2; i>=0; i--)
    {
        ///��ӡ�ո�n-i
        for(j=0; j<n-i; j++)
            putchar(' ');
        ///��ӡ* 1+2*i
        for(j=0; j<1+2*i; j++)
            putchar('*');
        ///����
        printf("\n");
    }
    return 0;
}
