#include<stdio.h>
int main(){
	int a,b,c,d;
	float x,y,total;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%f %f",&x,&y);
	total=a*x+b*(x+y)+c*(x+2*y)+d*(x+3*y);
	printf("%.2f",total);
return 0;
}
