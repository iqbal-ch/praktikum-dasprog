#include<stdio.h>
int main()
{
	int i,a,b,d,c,jumlah=0;
	scanf("%d",&d);
	{
		for(i=1;i<=d;i++)
			{ 
				scanf("%d %d %d",&a,&b,&c);
				if(a>0 && b>0 && a%b==c)
				jumlah++;
			}
			printf("%d\n",jumlah);
		}
}
