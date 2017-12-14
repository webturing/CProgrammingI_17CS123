#include<stdio.h>
void sort(int a[],int n);//declare
void print(int a[],int n);
int main(){
    int a[]={1,3,4,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);//call use
    print(a,n);
}
void sort(int a[],int n)//implements
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<=n-1;j++)
            if(a[j]<a[k])k=j;
        if(k!=i)
        {
            t=a[k];a[k]=a[i];a[i]=t;
        }
        print(a,n);

    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
