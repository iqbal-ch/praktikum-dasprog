#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void){
    char ch;
    char *text=NULL;
    int i,j,ada=0;
    scanf("%c",&ch);
    for(i=0;ch!='\n';i++){
        text=(char *)realloc(text,(i+1)*sizeof(char));
        text[i]=ch;
        scanf("%c",&ch);
    }
    for(j=0;j<i;j++){
        if(isalpha(text[j])==0){
            ada++;
        }
    }
    if(ada>0){
        printf("%d\n",ada);
        }
    else printf("Tidak ada karakter selain alfabet\n");

    free(text);
return 0;
}
