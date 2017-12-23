#include<stdio.h>
/**
12345
a= 01
b=23
c= 45
a+c-b
*/

int main()
{
    char s[200];
    s[0]=s[1]='0';///memset(s,'0',sizeof(s));
    scanf("%s",s+2);
    int a,b,c;
    int n=strlen(s),w=n/3;
    sscanf(s+(n-w),"%d",&c);
    s[n-w]='\0';
    sscanf(s+(n-2*w),"%d",&b);
    s[n-2*w]=0;
    sscanf(s,"%d",&a);
    printf("a=%d b=%d c=%d\n",a,b,c);

    return 0;
}
