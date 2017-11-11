#include<stdio.h>
int main()
{
    int start=1,end=100;


    int i;
    for(i=start;i<=end;i++)
    {
        if(i%13==12&&i%17==16)
        {


            break;
        }
    }
   if(i>end)
   {
       puts("Not found!");
   }else
   {

       puts("found!");
   }

}
