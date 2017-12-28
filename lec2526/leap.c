
#include<stdio.h>
#define LEAP_YEAR(y) ((y)%4==0&&(y)%100!=0||(y)%400==0)

int main()
{
    printf("%d\n",1==LEAP_YEAR(2016));
    printf("%d\n",1==LEAP_YEAR(2000));
    printf("%d\n",0==LEAP_YEAR(1900));
    printf("%d\n",0==LEAP_YEAR(2013));

    return 0;
}
