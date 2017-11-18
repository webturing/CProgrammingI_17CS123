#include<stdio.h>
int main()
{
    int k=2;

    switch(k)
    {
        case 1:
            puts("Too small~");

        case 2:
            puts("Just so so~");
            break;
        case 3:
            puts("It is ok~");
            break;

        default:
            break;

    }

    return 0;
}
