/*
  *
 ***
*****
 ***
  *

*/

#include<stdio.h>
int main()
{
    int n=9;
    int i,j;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(j<=i)
            printf("%d*%d=%2d ",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}
