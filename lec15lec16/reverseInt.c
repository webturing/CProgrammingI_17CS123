#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,};
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    //TODO
    int t;
    //t=a[0];a[0]=a[n-1];a[n-1]=t;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
