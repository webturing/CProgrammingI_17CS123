#include<stdio.h>
int main()
{
///字符串是以第一个0('\0')为自然终止浮的字节数组
    char s[10]={'h','e','l','l','o'};
    puts(s);
    s[3]=0;
    puts(s);
    char t[5]={'h','e','l','l','o'};
    puts(t);
    char w[]={'h','e','l','l','o'};
    puts(w);


    return 0;
}
