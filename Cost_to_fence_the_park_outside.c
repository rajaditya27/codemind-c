#include<stdio.h>
int main()
{
    int l,b,w,c,L1,B1,f;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    L1=l+2*w;
    B1=b+2*w;
    f=((L1*B1)-(l*b))*c;
    if(L1<=0||B1<=0)
    printf("impossible");
    else
    printf("%d",f);
    return 0;
}