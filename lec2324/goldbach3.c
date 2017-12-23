#include<stdio.h>
#define N 200000000
int prime[N+1];
void fill()
{
    int i,j;
    for(i=0;i<=N;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(i=0;i*i<=N;i++)
    {
        if(prime[i]==1)
            for(j=i*i;j<=N;j+=i)
                prime[j]=0;
    }
}
int main()
{
    fill();
    int n=18;//n=p+q
    for(n=6;n<=N;n+=2){
        int find=0;
        int p;
        for(p=3;p<n;p++)
        {
           // if(isPrime(p)&&isPrime(n-p))
           if(prime[p]&&prime[n-p])
            {
               // printf("%d=%d+%d\n",n,p,n-p);
                find=1;
                break;
            }
        }
        if(find==0)
        {
            printf("%d\n",n);
            puts("Congratulations! The goladbach theory is wrong~");

        }
    }
    return 0;
}
