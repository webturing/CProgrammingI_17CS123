#include<stdio.h>
int main()
{
///�ַ������Ե�һ��0('\0')Ϊ��Ȼ��ֹ�����ֽ�����
    char s[1000];
    //scanf("%s",s);
    gets(s);///�ж�ȡ
    printf("%s",s);


    return 0;
}
