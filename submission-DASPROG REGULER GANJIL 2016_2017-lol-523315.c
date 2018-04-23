#include<stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(j%2==1)
                printf("%d",((m*j)-(m-i))%10);
            else
                printf("%d",((m*j)-(i-1))%10);
        }
        printf("\n");
    }
}
