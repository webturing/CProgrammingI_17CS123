#include<stdio.h>
int main()
{
    int N=100;
    int x,y,z;
    for(x=0; x<=N; x++)
        for(y=0; y<=N-x; y++)

            {
                z=N-x-y;
                if(5*x+3*y+z/2==N&&z%2==0)
                    printf("%d %d %d\n",x,y,z);

            }
    return 0;
}
