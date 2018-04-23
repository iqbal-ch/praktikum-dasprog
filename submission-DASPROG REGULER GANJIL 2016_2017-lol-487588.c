#include<stdio.h>
#define size 100
int main()
{
	int n,i,cocokan,x=0,a[size];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&cocokan);
	for(i=0;i<n;i++){
		if(a[i]==cocokan){
			printf("%d\n",i);
			x=x+1;
		}
	}
	if(x==0)
		printf("-1\n");
return 0;
}
