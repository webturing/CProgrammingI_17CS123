#include<stdio.h>

int main(){
    freopen("input.txt","r",stdin);
    int a[200+50];

    int M,i;
    while(1==scanf("%d",&M)){
        for(i=0; i<M; i++)
            scanf("%d",&a[i]);
        int sum=0;
        for(i=0; i<M; i++)
            sum+=a[i];
        printf("%d\n",sum);
    }

}

