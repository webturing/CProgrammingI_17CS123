#include<stdio.h>
int main()
{
    int n=100;
    int x,y,z;

    for(x=0;x<=n;x++)
    for(y=0;y<=n;y++)
    for(z=0;z<=n;z++)
    {

        if(x+y+z==n&&5*x+3*y+z/2==n&&z%2==0)
        {
            printf("%d %d %d\n",x,y,z);
        }
    }

    return 0;
}
