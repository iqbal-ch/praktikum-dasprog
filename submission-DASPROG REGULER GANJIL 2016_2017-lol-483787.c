
#include<stdio.h>
#define size 100
int main()
{
	int x,y,a[size][size],i,j,z,b[size][size];
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
    scanf("%d",&z);
    for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			b[i][j]=a[i][j]*z;
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(j==y-1)
			printf("%d\n",b[i][j]);
			else
			printf("%d ",b[i][j]);
		}
	}
return 0;
}
