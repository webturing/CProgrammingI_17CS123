#include<stdio.h>
int isPrime(int n)
{
    if(n==2)
        return 1;
    if(n<2||n%2==0)
        return 0;
    int c;
    for(c=3;c*c<=n;c+=2)
        if(n%c==0)
        return 0;
    return 1;
}
int main()
{
    int n=18;//n=p+q
    for(n=6;n<=20000000;n+=2){
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
