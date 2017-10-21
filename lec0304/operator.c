
#include<stdio.h>
int main()
{
    int x=3;
    //printf("%d\n",++x);//++x是x更新后的值
    printf("%d\n",x++);//x++是x更新前的值
    int y=4;
    printf("%d\n",--y);
}
