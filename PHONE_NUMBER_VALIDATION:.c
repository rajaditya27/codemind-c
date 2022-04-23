#include<stdio.h>
#include<string.h>
int main()
{
    char phnum[20];
    scanf("%s",phnum);
    if(phnum[0]=='0'){
        printf("Invalid");
    }
    else if(strlen(phnum)==10){
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
    return 0;
}