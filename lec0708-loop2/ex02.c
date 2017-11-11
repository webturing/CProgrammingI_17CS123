#include<stdio.h>
int main(){
    int n=1007;
    //i=2 3 ...n-1
    int find=0;
    int i;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            find=1;
            break;
        }
    }
    if(find==1)
        puts("It is a composite~");
    else
        puts("It is a primer.");


}
