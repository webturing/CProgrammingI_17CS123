#include<stdio.h>
int main()
{
///字符串是以第一个0('\0')为自然终止浮的字节数组
    char s[1000]="hello";
    puts(s);
    char t[5]="hello";
    puts(t);
    char w[]="hello";
    puts(w);
    scanf("%s",s);
    puts(s);


    return 0;
}
