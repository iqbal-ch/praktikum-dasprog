#include<stdio.h>
int main(){
	int n,x,x2,i,nilai=0;
	for(i=1;i<=5;i++){
		scanf("%d",&n);
		scanf("%d",&x);
		n=n-1;
		while(n--){
			scanf("%d",&x2);
			if(x<x2) nilai++;
			else if(x>x2) nilai--;
			x=x2;
		}
		if(nilai>0)
            printf(":)\n");
        else if(nilai<0)
            printf(":(\n");
        else
            printf(":|\n");
        x=0; x2=0; nilai=0;
	}
return 0;
}
