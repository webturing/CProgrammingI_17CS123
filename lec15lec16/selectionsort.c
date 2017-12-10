void sort(int a[],int n)
{
    int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<=n-1;j++)
			if(a[j]<a[k])k=j;
        t=a[i];a[i]=a[k];a[k]=t;
	}
}
void print(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{

    int a[]={1,3,5,7,9,2,4,6,8,0};
    print(a,10);
    sort(a,10);
    print(a,10);
}
