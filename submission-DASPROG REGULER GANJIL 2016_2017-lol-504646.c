#include<stdio.h>
int main(){
    char nim;
    scanf("%c",&nim);
    if(nim=='A' || nim=='a') printf("Fakultas Pertanian\n");
    else if(nim=='B' || nim=='b') printf("Fakultas Kedokteran Hewan\n");
    else if(nim=='C' || nim=='c') printf("Fakultas Perikanan\n");
    else if(nim=='D' || nim=='d') printf("Fakultas Peternakan\n");
    else if(nim=='E' || nim=='e') printf("Fakultas Kehutanan\n");
    else if(nim=='F' || nim=='f') printf("Fakultas Teknik Pertanian\n");
    else if(nim=='G' || nim=='g') printf("Fakultas Matematika dan Ilmu Pengetahuan Alam\n");
    else if(nim=='H' || nim=='h') printf("Fakultas Ekonomi dan Manajemen\n");
    else if(nim=='I' || nim=='i') printf("Fakultas Ekologi Manusia\n");
return 0;
}
