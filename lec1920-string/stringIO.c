#include<stdio.h>
int main()
{
///�ַ������Ե�һ��0('\0')Ϊ��Ȼ��ֹ�����ֽ�����
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
