#include<stdio.h>
int main()
{
    int start=1,end=7;
    int fact=1;

    int i=start;//Intialization
    while(i<=end/*Condition*/)
    {
        //TODO
        fact*=i;/*Loop body*/
        i++;/*Iteration*/
    }
    printf("%d\n",fact);
    return 0;
}
