/**
Sample Input:
2011 3
2012 2
2015 2
2015 12
2015 13
Sample Output:
31
29
28
31
Are you kidding?
*/

#include<stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int y,m;
    int d;
    while(2==scanf("%d%d",&y,&m))
    {
        if(m<1||m>12)
            d=-1;
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            d=31;
        else if(m==4||m==6||m==9||m==11)
            d=30;
        else if(y%4==0&&y%100!=0||y%400==0)
            d=29;
        else
            d=28;

        if(d>0)
            printf("%d\n",d);
        else
            puts("Are you kidding?");

    }
    return 0;

}
