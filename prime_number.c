#include<stdio.h>
int main()
{
    int n,factor=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            factor=factor+1;
        }
    }
    if(factor==2){
        printf("prime");
    }
    else{
        printf("not a prime");
    }
    return 0;
}