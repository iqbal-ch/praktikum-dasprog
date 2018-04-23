#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k;
    char ch,*text=NULL;
    scanf("%c",&ch);
    for(i=0;ch!='\n';i++){
            text=(char*)realloc(text,(i+1)*sizeof(char));
            text[i]=ch;
            scanf("%c",&ch);
    }
    for(j=0;j<i;j++){
        if(text[j]=='i' || text[j]=='I')
            text[j]='1';
        else if(text[j]=='e' || text[j]=='E')
            text[j]='3';
        else if(text[j]=='a' || text[j]=='A')
            text[j]='4';
        else if(text[j]=='g' || text[j]=='G')
            text[j]='9';
    }
    for(k=0;k<i;k++){
        printf("%c",text[k]);
    }
    printf("\n");
    free(text);
return 0;
}
