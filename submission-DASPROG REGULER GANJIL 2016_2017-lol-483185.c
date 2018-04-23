#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,jam,menit,detik,total;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    jam=(d-a)*3600;
    menit=(e-b)*60;
    detik=(f-c);
    total=jam+menit+detik;
    printf("%d",total);
return 0;
}
