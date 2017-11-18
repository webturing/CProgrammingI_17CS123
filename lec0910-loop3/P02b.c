#include<stdio.h>
int main()
{
    int start=1,end=100000;
    int sum=0;
    int r=15;
    //while(start%r!=0)++start;
    start=(start+r-1)/r*r;
    //while(end%r!=0)--end;
    end=end/r*r;
    int n=(end-start)/r+1;
    sum=(start+end)*n/2;
    printf("%d\n",sum);
    return 0;
}
