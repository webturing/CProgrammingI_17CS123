#include<stdio.h>
//˳�����1~n
int main(){
    int n=10;
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        if(i>5)
            break;
        i++;
    }

    return 0;
}
