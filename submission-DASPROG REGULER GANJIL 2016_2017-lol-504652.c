#include<stdio.h>
void swap(int *x,int *y){
    int i;
    i=*x;
    *x=*y;
    *y=i;
}
int main(void){
    int *x,*y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d\n",x,y);
}
