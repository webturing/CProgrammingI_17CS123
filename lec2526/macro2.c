//#define  F(x) x*x //ERROR
#define  F(x) ((x)*(x)) //OK
int f(int x)
{
    return x*x;
}
int main()
{
    int x=3,y=4;
    printf("%d\n",F(x));
    printf("%d\n",F(y));
    printf("%d\n",f(y));
    printf("%d\n",F(y+1));
    printf("%d\n",f(y+1));

    return 0;
}
