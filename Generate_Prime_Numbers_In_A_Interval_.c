#include<stdio.h>
int main()
{
    int n1,n2,i,j,factor;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        factor=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                factor++;
            }
        }
        if(factor==2)
        {
            printf("%d
",i);
        }
    }
    return 0;
}
