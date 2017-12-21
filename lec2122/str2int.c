#include<stdio.h>
int main()
{
    char s[100];
    s[0]='0';
    s[1]='0';

    scanf("%s",s+2);

    char a[100],b[100],c[100];
    int n=strlen(s);
    int w=n/3;
   // if(n%3!=0)++w;
    int x=n-2*w;

    strcpy(c,s+(n-w));
    puts(c);
    s[n-w]=0;
    strcpy(b,s+x);
    puts(b);
    s[n-2*w]=0;
    strcpy(a,s);
    puts(a);

    return 0;
}
