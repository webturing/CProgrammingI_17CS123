/**
�ҳ���λ�� [100,999]
hund,ten,digit;��λ��������ͬ  hund!=ten && hund!=digit && ten!=digit
ʮλ���Ȱ�λ�͸�λ�ͻ�Ҫ�� ten>hund+digit
��λ��ʮλ֮�Ͳ�������
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
        if(hund!=ten && hund!=digit && ten!=digit//��λ��������ͬ
           &&ten>hund+digit//ʮλ���Ȱ�λ�͸�λ�ͻ�Ҫ��
           &&find==1 //��λ��ʮλ֮�Ͳ�������
           )
            printf("%d ",n);
    }
    return 0;
}
