#include<stdio.h>
bool isPrimer(int n)
{
    if(n==2)
        return true;
    if(n<2||n%2==0)
        return false;
    for(int c=3; c*c<=n; c+=2)
        if(n%c==0)
            return false;
    return true;
}

int countPrimers(int start,int end)
{
    int tot=0;

    for(int i=start; i<=end; i++)
        if(isPrimer(i))
            ++tot;
    return tot;
}
void printPrimers(int start,int end)
{

    for(int i=start; i<=end; i++)
        if(isPrimer(i))
            printf("%d ",i);
    printf("\n");
}
int main()
{
    int start=100,end=200;
    printf("%d\n",countPrimers(start,end));
    printPrimers(start,end);
    return 0;
}
