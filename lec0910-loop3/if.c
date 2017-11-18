#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    if(score<0||score>100)puts("Input is Error!");
    else if(score>=90)puts("A");
    else if(score>=80)puts("B");
    else if(score>=70)puts("C");
    else if(score>=60)puts("D");
    else puts("E");
    return 0;

}
