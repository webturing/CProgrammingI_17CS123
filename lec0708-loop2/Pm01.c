/**
找出三位数 [100,999]
hund,ten,digit;各位数互不相同  hund!=ten && hund!=digit && ten!=digit
十位数比百位和个位和还要大 ten>hund+digit
百位和十位之和不是质数
*/

#include<stdio.h>
int main(){
    int n;
    for(n=100;n<=999;n++){
        int hund=n/100,ten=(n%100)/10,digit=n%10;
        int m=hund+ten;
        int find=0;
        int i;
        for(i=2;i<=m-1;i++) {
            if(m%i==0){
                find=1;
                break;
            }
        }
        if(hund!=ten && hund!=digit && ten!=digit//各位数互不相同
           &&ten>hund+digit//十位数比百位和个位和还要大
           &&find==1 //百位和十位之和不是质数
           )
            printf("%d ",n);
    }
    return 0;
}
