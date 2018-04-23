#include<stdio.h>
int main()
{
	int N,baris,kolom,i,j,k,x,y;
	float hasil;
	scanf("%d %d %d",&N,&baris,&kolom);
	for(i=0;i<N;i++){
		for(j=0;j<baris;j++){
			y=0;
			for(k=0;k<kolom;k++){
				scanf("%d",&x);
				y=y+x;
			}hasil=(float)y/k;
			
			}printf("Rataan matriks ke-%d: %.2f\n",i+1,hasil);
	}
return 0;
}

