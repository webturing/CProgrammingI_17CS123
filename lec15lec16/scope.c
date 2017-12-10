#include<stdio.h>
int a;
void f(int b,int c)
{
// a global variable
// parameters  ²ÎÊı
// local variable
    a++;
    c++;
    b++;
}
int main()
{
    int b;

    {

        int c;
        {
            int d;

            c=3;
        }

    }

   // c=0;
    b=0;
}
