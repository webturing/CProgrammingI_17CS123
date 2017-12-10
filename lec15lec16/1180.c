#include<stdio.h>
int max(int a[],int n)
{
    int ret=a[0];
    int i;
    for(i=1; i<n; i++)
        if(a[i]>ret)
            ret=a[i];
    return ret;
}
int min(int a[],int n)
{
    int ret=a[0];
    int i;
    for(i=1; i<n; i++)
        if(a[i]<ret)
            ret=a[i];
    return ret;
}
int main()
{
    int a[5];
    scanf("%d%d%d%d%d",a,a+1,a+2,a+3,a+4);
    printf("%d %d\n",min(a,5),max(a,5));
    return 0;

}
