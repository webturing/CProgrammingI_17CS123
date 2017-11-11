#include<stdio.h>
int main()
{
    int n;
    int tot=0;
    for(n=123; n<=432; n++)
    {
        int a=n/100,b=(n%100)/10,c=n%10;
        if(a!=b&&b!=c&&c!=a
           && 4>=a&&a>=1
           && 4>=b&&b>=1
           && 4>=c&&c>=1
          )
            {
                ++tot;
                printf("%d ",n);
            }
    }
    printf("\n%d\n",tot);

}
