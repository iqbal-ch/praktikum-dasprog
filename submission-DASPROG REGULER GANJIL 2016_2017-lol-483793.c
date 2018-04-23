#include<stdio.h>
#define size 100
int main()
{
	int x,a[size],b[size],c[size],i;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<x;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<x;i++){
		c[i]=a[i]+b[i];
	}
	for(i=0;i<x;i++){
		if(i==x-1)
		printf("%d\n",c[i]);
		else
		printf("%d ",c[i]);
	}
	return 0;
}

