#define FEQUAL(x,y) (fabs((x)-(y))<=1e-6)
int main()
{
    float x=pow(2,3.0);
    float y=8.000001f;
    if(FEQUAL(x,y))
        puts("EQUAL");
    else
        puts("NOT EQUAL");

}
