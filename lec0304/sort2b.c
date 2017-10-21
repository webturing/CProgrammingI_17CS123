
/*
Sample Input
4 3
Sample Output
3 4
*/
int main()
{
    ///¿ﬁÃ®À„∑®
    int a,b;
    int min,max;
    scanf("%d%d",&a,&b);
    min=a;
    if(b<min)min=b;

    max=a;
    if(b>max)max=b;

    printf("%d %d",min,max);
}
