#include<stdio.h>
int main(){
    int start=100,end=999;
    int n=start;
    while(n<=end){
        int a,b,c;
        a=n/100;
        b=(n%100)/10;
        c=n%10;
        if(a*a*a+b*b*b+c*c*c==n)
            printf("%d\n",n);
        n++;
    }
}


