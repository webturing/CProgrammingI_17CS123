#include<stdio.h>
void input(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d",a+i);
}
void print(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void reverse(int a[],int n){
    int i,t;
    for(i=0;i<n;i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
        print(a,n);//
    }

}
int main()
{
    int a[10];
    input(a,10);
    reverse(a,10);
    print(a,10);

}
