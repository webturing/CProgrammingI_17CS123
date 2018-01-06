#include<stdio.h>
#define N 64
#define M N/4
int main()
{
    int a,b,c,d;
    for(a=N/2; a<=N; a++)
        for(b=0; b<=N-a; b++)
            for(c=0; c<=N-a-b; c++)
            {
                d=N-a-b-c;
                int A=a,B=b,C=c,D=d;

                A-=B+C+D,B*=2,C*=2,D*=2;
                B-=A+C+D,A*=2,C*=2,D*=2;
                C-=A+B+D,A*=2,B*=2,D*=2;
                D-=A+B+C,A*=2,B*=2,C*=2;
                if(A==M&&B==M&&C==M&&D==M)
                    printf("%d %d %d %d\n",a,b,c,d);
            }

}
