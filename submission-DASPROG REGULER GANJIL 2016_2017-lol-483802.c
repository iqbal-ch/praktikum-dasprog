#include<stdio.h>
#define size 1000
int main ()
{
	int x,y,a[size][size],i,j;
	scanf("%d %d",&x,&y);
	for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=x-1;i>=0;i--){
		for(j=0;j<y;j++){
			if(j==y-1)
			printf("%d\n",a[i][j]);
			else
			printf("%d ",a[i][j]);
		}
	}
	return 0;
}
