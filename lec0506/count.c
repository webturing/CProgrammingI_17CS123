#include<stdio.h>
int main()
{
    //¼ÆÊı
    int start=1,end=100;
    int s=0;
    int i=start;
    while(i<=end)
    {
        if(i%3==0||i%5==0)
                s+=1;
        i++;
    }
    printf("%d\n",s);

}
