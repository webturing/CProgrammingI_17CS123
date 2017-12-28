#define PI 3.1415926
#define N 5+1
#define PRT printf
#define SCAN scanf
int main()
{
    double r=10;
    printf("%f\n",PI*r*r);
    printf("%f\n",PI*r*2);
    printf("%d\n",N);
    printf("%d\n",N*N);
    SCAN("%lf",&r);
    PRT("%f\n",r);
    return 0;
}
