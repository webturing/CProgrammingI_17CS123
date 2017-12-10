#include<stdio.h>
void print(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int sum(int a[],int n){
    int ret=0,i;
    for(i=0;i<n;i++)
        ret+=a[i];
    return ret;
}
int main(){
   int a[]={100,99,98,97,};//98.50
   int n=sizeof(a)/sizeof(a[0]);
   printf("%.2f\n",(sum(a,n)-max(a,n)-min(a,n))/(n-2));
}
