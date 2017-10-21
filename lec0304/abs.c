#include<stdio.h>
int main(){
    double f;//Input
    double ans;//Êä³ö
    scanf("%lf",&f);
    if(f>0){
        ans=f;
    }
    else{
        ans=-f;
    }
    printf("%.3f\n",ans);
    return 0;
}
