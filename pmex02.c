#include<stdio.h>
int main(){
    int n;
    int cnt=0;
    for(n=100;n<=200;n++){
        int find=0;
        int i;
        for(i=2;i<=n-1;i++){
            if(n%i==0){
                find=1;
                break;
            }
        }
        if(find==0){
                ++cnt;
        }
    }
     printf("%d\n",cnt);
     cnt=0;
     for(n=100;n<=200;n++){
        int find=0;
        int i;
        for(i=2;i<=n-1;i++){
            if(n%i==0){
                find=1;
                break;
            }
        }
        if(find==0){
            printf("%d ",n);
        if(++cnt%5==0)
            printf("\n");
        }
    }
    return 0;
}
