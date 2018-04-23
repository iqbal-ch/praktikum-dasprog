#include<stdio.h>
#include<string.h>
int main(){
	char ch1[102],ch2[102],cek[102];
	scanf("%s %s",&ch1,&ch2);
	scanf("%s",&cek);
	while(strcmp(cek,"99")!=0){
		if(strcmp(cek,ch1)==0)printf("%s\n",ch2);
		else printf("%s\n",cek);
	scanf("%s",&cek);
	}
return 0;
}
