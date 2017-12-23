#include<stdio.h>
#define  N 100
int p[N+1];
void fill()
{
    int i,j;
    for(i=0;i<=N;i++)
        p[i]=1;
    p[0]=p[1]=0;
    for(i=0;i*i<=N;i++)
    {
        if(p[i]==1)
            for(j=2*i;j<=N;j+=i)
                p[j]=0;
    }
}
int main()
{
    fill();
    int i;
    for(i=0;i<=N;i++)
        if(p[i]==1)
        printf("%d ",i);
    return 0;
}
