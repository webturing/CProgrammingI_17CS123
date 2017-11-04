#include<stdio.h>
int main(){
    int start=1,end=10;

    int i=start;

    while(i<=end){
        i++;
        if(i%2==0)continue;
        printf("%d ",i);

    }
}
