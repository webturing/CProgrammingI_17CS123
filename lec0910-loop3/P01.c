#include<stdio.h>
#include<stdlib.h> //rand()
#include<time.h> //srand time
int main(){
    srand(time(0));
    int start=1,end=100,target=50;
    while(1){
        int cur=rand()%(end-start+1)+start;
        printf("%d ",cur);
        if(cur==target)
            break;
    }
    return 0;
}
