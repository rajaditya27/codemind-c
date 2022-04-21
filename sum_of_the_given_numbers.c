#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
         }
    for(int i=0;i<n;i++){
    printf("%d
",a[i]+b[i]);
    }
    return 0;
}