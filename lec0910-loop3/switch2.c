#include<stdio.h>
int main()
{
    int k=-1;

    switch(k)
    {
        case 1:
            puts("Too small~");
            break;
        case 2:
            puts("Just so so~");
            break;
        case 3:
            puts("It is ok~");
            break;

        default:
            puts("I am default~");
            break;

    }

    return 0;
}
