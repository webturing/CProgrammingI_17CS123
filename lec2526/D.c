#define SWAP(a,b)\
{\
    int t=a;\
    a=b;\
    b=t;\
}
#define MOD(a,b) (((a)%(b))>=0?((a)%(b)):(((a)%(b))+(b)))
#define S(a,b,c) (((a)+(b)+(c))/2.0)
#define AREA(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
    int a=3,b=4;

    SWAP(a,b);
    printf("%d %d\n",a,b);
    printf("%d\n",MOD(-7,4));
    int x=10,y=7,z=8;
    printf("%.3f\n",AREA(x,y,z,S(x,y,z)));

}
