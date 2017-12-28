char HEX[17]="0123456789abcdef";
int find(char c)
{
    int i;
    for(i=0;i<16;i++)
        if(c==HEX[i])
        return i;
    return -1;
}
int main()
{
    char s[100]="ff";
    int m=0,i;
    for(i=0;i<strlen(s);i++)
        m=m*16+find(s[i]);//
    printf("%d\n",m);
   // sscanf(s,"%x",&m);



}
