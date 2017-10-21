
/*
Sample Input
4 3
Sample Output
3 4
*/
int main()
{
    ///¿ﬁÃ®À„∑®
    int a,b,c;
    int min,mid,max;
    scanf("%d%d%d",&a,&b,&c);
    min=a;
    if(b<min)min=b;
    if(c<min)min=c;
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;
 //mid=?
    mid=a+b+c-min-max;

    printf("%d %d %d",min,mid,max);
}
