#include<stdio.h>
int main()
{
    int a,b,c;
    int cnt=0;
    for(a=1; a<=4; a++){
        for(b=1; b<=4; b++){
            if(a==b)continue;
            for(c=1; c<=4; c++)
            {
                if(c==b||c==a)continue;
                printf("%d ",a*100+b*10+c);
                ++cnt;

            }
        }
    }
    printf("\n%d\n",cnt);

}
