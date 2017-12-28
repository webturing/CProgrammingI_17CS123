
#include<stdio.h>
#define LEAP_YEAR(y) ((y)%4==0&&(y)%100!=0||(y)%400==0)
int DAYS[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
        ///201 1 28
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    int tot=0,i;
    for(i=1;i<=m-1;i++)tot+=DAYS[i];
    tot+=d;
    if(m>2&&LEAP_YEAR(y))++tot;
    printf("%d\n",tot);

    return 0;
}
