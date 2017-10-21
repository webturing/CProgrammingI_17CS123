
/*
Sample Input
4 3
Sample Output
3 4
*/
int main()
{
    ///½»»»Ëã·¨ Ã°ÅÝËã·¨
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){t=a;a=b;b=t;}
    if(b>c){t=b;b=c;c=t;} //c is max
    //if(a>c){t=a;a=c;c=t;}//bugs
    if(a>b){t=a;a=b;b=t;}

    printf("%d %d %d",a,b,c);
}
