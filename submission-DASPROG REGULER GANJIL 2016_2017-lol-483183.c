#include<stdio.h>
int main()
{
    int a,b,c;
    float d,e,f,g,nilaia,nilaib,nilaic,hasil,total,bersih;
    scanf("%d %f",&a,&d);
    scanf("%d %f",&b,&e);
    scanf("%d %f",&c,&f);
    scanf("%f",&g);
    nilaia=a*d;
    nilaib=b*e;
    nilaic=c*f;
    total=nilaia+nilaib+nilaic;
    hasil=(g*total)/100.00;
    bersih=total-hasil;
    printf("%.2f %.2f\n",hasil,bersih);
return 0;
}
