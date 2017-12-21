#include<string.h>
#include<stdio.h>
int main(){
    char s[100]="hello world";
    puts(s);
    printf("%d\n",strlen(s));
    s[5]=0;
    puts(s);
    printf("%d\n",strlen(s));

    return 0;
}
