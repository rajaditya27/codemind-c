#include<stdio.h>
int main()
{
    int n,sum=0,temp,a;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    if(temp%sum==0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}