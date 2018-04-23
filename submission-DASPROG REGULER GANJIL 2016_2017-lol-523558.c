#include<stdio.h>
#include<string.h>

int main()
{
    char A[102],st[102];
    scanf("%s",&A);
    scanf("%s",&st);
    while(strcmp(st,"99") != 0){
        if(strcmp(st,A) == 0)
            printf("%s-%s\n",st,st);
        else
            printf("%s\n",st);
        scanf("%s",&st);
    }
}
