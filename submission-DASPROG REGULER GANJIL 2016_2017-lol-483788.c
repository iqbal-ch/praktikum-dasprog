#include<stdio.h>
#define size 100
int main()
{
	int x,y,a[size][size],i,j,b[size][size],c[size][size];
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			c[i][j]=abs(a[i][j]-b[i][j]);
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(j==y-1)
			printf("%d\n",c[i][j]);
			else
			printf("%d ",c[i][j]);
		}
	}
return 0;
}

