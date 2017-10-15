#include<stdio.h>
int main()
{
    //printf("%d\n",1.1*1.1);//error short/int
    printf("%f\n",1.1*1.1);//%f  float/double
    printf("%.3f\n",1.1*1.1);
    printf("%8.3f\n",1.1*1.1);
    //ÄãºÃ
    printf("%f\n",pow(2.0,3));
    printf("%f\n",pow(2.0,1.0/2));
    printf("%f\n",sqrt(2));
    return 0;
}
