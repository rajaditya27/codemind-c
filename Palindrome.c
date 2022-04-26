#include<stdio.h>
int main()
{
    int T,sum=0,remainder;
       int n;
       scanf("%d",&n);
       T=n;
        while(n!=0){
            remainder=n%10;
            sum=sum*10+remainder;
            n=n/10;
        }
        if(T==sum){
            printf("True
");
        }
        else{
            printf("False
");
        }
    return 0;
}