#include<stdio.h>
int main(){
    int y,i,j,x,n;
    int a[100][100];
    scanf("%d",&n);
    y=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                x=a[i][j];
                a[i][j]=a[i][y];
                a[i][y]=x;
                y--;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(j<n-1)
                    printf("%d ",a[i][j]);
                else
                    printf("%d\n",a[i][j]);
            }
    }
return 0;
}
