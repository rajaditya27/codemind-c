#include<stdio.h>
int main()
{
    int n,T,i,t,rem;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int sum=0;
        scanf("%d",&n);
        T=n;
        while(n!=0){
            rem=n % 10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(sum==T){
            printf("True
");
        }
        else
            printf("False
");
    }
    
    
    
    return 0;
}