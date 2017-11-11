#include<stdio.h>
int main()
{
    int n=12;
    long long fact=1;

    int i;
    for(i=2;i<=n;i++){
        fact*=i;
    }


    printf("%lld\n",fact);

    return 0;
}
