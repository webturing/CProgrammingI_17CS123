#include<stdio.h>
int main()
{
///�ַ������Ե�һ��0('\0')Ϊ��Ȼ��ֹ�����ֽ�����
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
