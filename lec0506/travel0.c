#include<stdio.h>
//Ë³ĞòÊä³östart~end
int main(){
    int start=1,end=100;
    int i=start;
    while(1){
        printf("%d\n",i);
        if(i>=end)
            break;
        i++;
    }

    return 0;
}
