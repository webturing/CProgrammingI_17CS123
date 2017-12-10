#include<stdio.h>
/// array linear searching
/// search elements k in array a[0..n-1]
/// return the index first pos of k if a[pos]==k;
/// otherwise return -1 if k not in array a;
int find(int a[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(k==a[i]){
           return i;
        }
    }
    return -1;

}
int main()
{
    int a[]={1,3,6,3,4,5,8,10,13,3};
    int n=sizeof(a)/sizeof(a[0]);
    int k=23;
    int pos=find(a,n,k);
    if(pos<0)
        puts("NOT FOUND!");
    else
        printf("%d occurred at pos %d\n",k,pos);
    return 0;

}
