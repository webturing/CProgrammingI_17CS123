
#include<stdio.h>
int main()
{
    //表达式的计算步骤，64位整数的输出"%lld" "%I64d"
    printf("%d\n",1+2+3);
    printf("%f\n",1.0+2);//2->2.0
    printf("%d\n",100*365*24*3600*1000);//bugs here
    printf("%lld\n",1LL*100*365*24*3600*1000);//ok
    printf("%lld\n",100*365*24*3600*1000*1LL);//?
    return 0;
}
