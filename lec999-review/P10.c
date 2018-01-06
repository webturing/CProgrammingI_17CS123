/**
I am comments.
*/
int main()
{
   int a,b,c;
   for(a=1;a<=3;a++)
    for(b=1;b<=3;b++)
    for(c=1;c<=3;c++)
   {
       if(a==b||a==c||b==c)continue;

       ///赛前A说：“B和C得第二，我得第一”；
       int ap=(b==2)&&(c==2);
       int aq=(a==1);
        ///B说：“我进入前两名，C得第三名”；
        int bp=(b<=2);
        int bq=(c==3);
       ///“A不是第二，B不是第一”。
       int cp=(a!=2);
       int cq=(b!=1);
       if(a+ap+aq==3&&b+bp+bq==3&&c+cp+cq==3)
       {
            printf("%d %d %d\n",a,b,c);
       }
   }
}
