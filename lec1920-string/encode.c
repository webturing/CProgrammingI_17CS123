#include<stdio.h>
#include<string.h>
int main()
{
    char text[1000]="I love you.";
    int k=5;
    char code[1000];
    memset(code,0,sizeof(code));
    int n=strlen(text);
    int i;
    for(i=0;i<n;i++)
    {
        if(text[i]<='Z'&&text[i]>='A')
            code[i]=(text[i]-'A'+k)%26+'A';
        else if(text[i]<='z'&&text[i]>='a')
            code[i]=(text[i]-'a'+k)%26+'a';
        else
            code[i]=text[i];
    }

    puts(code);
    return 0;
}
