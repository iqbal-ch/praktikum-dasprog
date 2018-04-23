#include<stdio.h>
#define size 100
int main()
{
	int x,y,i,j,a[size][size],banyaknya;
	scanf("%d %d",&x,&y);
	 if(x>20||y>20)
		return 0;
	else
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&banyaknya);
	for(i=0;i<x;i++){
			for(j=0;j<y;j++){
			if(j==banyaknya)
				printf("%d\n",a[i][j]);
			
		}
	}
return 0;
}
