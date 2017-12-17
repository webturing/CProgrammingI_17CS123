#include<stdio.h>
int main()
{
///字符串是以第一个0('\0')为自然终止浮的字节数组
    char s[1000];
    //scanf("%s",s);
    gets(s);///行读取
    printf("%s",s);


    return 0;
}
