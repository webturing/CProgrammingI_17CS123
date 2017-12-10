int main()
{
    int x;
    //scanf("%d",&x);
    int a[10];
    a[10]++;//越界
   // a[1000]++;//越界
    a[-1]=0;//左越界
    int i;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    printf("\n");
    for(i=0;i<10;i++)
        printf("%d\n",&a[i]);
    printf("a=%d\n",a);
    printf("&a[1]=%d\n",&a[1]);
    printf("a+1=%d\n",a+1);

    printf("a+3=%d\n",a+3);
    printf("a-5=%d\n",a-5);

}
