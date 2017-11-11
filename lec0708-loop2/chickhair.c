#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=9;i++)
    {

        for(j=0;j<=9;j++)
        {

            if(i+j==3&&4*i+2*j==8)
            {

                printf("RABBIT=%d CHICK=%d\n",i,j);
            }
        }
    }
    return 0;
}
