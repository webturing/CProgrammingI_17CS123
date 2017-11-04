#include<stdio.h>
//Ë³ĞòÊä³östart~end
int main(){
    int start=1,end=100;
    int i=start;
    while(i<=end){
        if(i%2==0)
            printf("%d ",i);
        i++;
    }

    return 0;
}
