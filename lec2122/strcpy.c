#include<string.h>
#include<stdio.h>
int main(){
    char s[100]="hello ";
    char t[100]="world";

    strcat(s,t);//s+=t;
    puts(s);

    puts(t);
    puts(t+1);
    strcpy(s+6,t);
    puts(s);
    return 0;
}
