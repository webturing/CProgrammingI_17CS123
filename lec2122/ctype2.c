//isXXXX()
//toXXXX()
int main()
{
   // putchar('b'-'a'+'A');
   // putchar(toupper('b'));
    char s[100]="ACM icpc2017ahstu";
    int n=strlen(s),i;
    for(i=0;i<n;i++)
        s[i]=toupper(s[i]);
    puts(s);

    return 0;
}
