#include<string.h>
#include<stdio.h>
int main(){
    char s[100]="hello acm";
    char t[100]="world";
    char temp[100];
    strcpy(temp,s);//temp=s;
    strcpy(s,t);
    strcpy(t,temp);
    puts(s);
    puts(t);




    return 0;
}
