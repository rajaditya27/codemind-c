#include<stdio.h>
int main()
{
    int n,a,i=1;
    scanf("%d %d",&a,&n);
    while(i<=n)
    {
        printf("%d x %d = %d
",a,i,a*i);
        i+=2;
    }
    return 0;
}