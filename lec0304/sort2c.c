
/*
Sample Input
4 3
Sample Output
3 4
*/
int main()
{
    ///�����㷨
    int a,b,t;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }

    printf("%d %d",a,b);
}
