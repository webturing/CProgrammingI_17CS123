#include<stdio.h>
void print(int a[],int n){///dump memory
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

}
void sort(int a[],int n){
   int i,j,t;
   for(i=0;i<n-1;i++)
       for(j=n-2;j>=i;j--)
        if(a[j]>a[j+1])
            t=a[j],a[j]=a[j+1],a[j+1]=t;


}

int main()
{
    int a[]={1,3,5,7,9,2,4,6,8,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);
    print(a,n);
}
