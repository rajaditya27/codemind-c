#include<stdio.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    while(n!=0){
        if(t<n%10)
        t=n%10;
        
        n=n/10;
    }
    printf("%d
",t);
    return 0;
}