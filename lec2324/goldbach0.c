#include<stdio.h>
int isPrime(int n)
{
    int c;
    for(c=2;c<=n-1;c++)
        if(n%c==0)
        return 0;
    return 1;
}
int main()
{
    int n=18;//n=p+q
    for(n=6;n<=200000;n+=2){
        int find=0;
        int p;
        for(p=3;p<n;p++)
        {
            if(isPrime(p)&&isPrime(n-p))
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
