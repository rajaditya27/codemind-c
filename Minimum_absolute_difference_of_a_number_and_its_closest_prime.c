#include<stdio.h>
int main()
{
    int n,i,factor=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
        factor++;
        }
        
    }
    if(factor==2){
        printf("0");
    }
    else{
        int after,before,aprime,bprime;
        after=n;
        before=n;
        while(--before){
            factor=0;
        for(int i=1;i<=before;i++){
            if(before%i==0){
                factor++;
            }
        }
        if(factor==2){
            bprime=before;
            break;
        }
        }
        while(after++){
            factor=0;
            for(i=1;i<=after;i++){
                if(after%i==0){
                    factor++;
                }
            }
            if(factor==2){
                aprime=after;
                break;
            }
        }
        int dafter,dbefore;
        dbefore=n-bprime;
        dafter=aprime-n;
        
        if(dafter < dbefore){
            printf("%d",dafter);
        }
        else{
            printf("%d",dbefore);
        }
    }
    
    return 0;
}