#include<stdio.h>
int prime(int n)
{
    if(n==2)return 1;
    if(n<2||n%2==0)return 0;
    int c;
    for(c=3; c*c<=n; c+=2)
        if(n%c==0)
            return 0;
    return 1;

}

int main()
{

    int n;
    scanf("%d",&n);
    int p,tot=0;
    for(p=3; p<=n/2; p+=2)//p<=q
    {
        if(prime(p)&&prime(n-p))
            ++tot;
    }
    printf("%d\n",tot);
}
