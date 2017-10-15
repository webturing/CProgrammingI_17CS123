#include<stdio.h>
#include<math.h>
int main()
{
    ///Input(1)
    int a,b,c;
    double x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    ///Process(3)
    double delta=b*b-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    //x2=(-b-sqrt(delta))/(2*a);
    x2=c/a/x1;
    ///Output(2)
    printf("%.2f %.2f\n",x1,x2);
    return 0;
}
