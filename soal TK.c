#include <stdio.h>
int main(){
    FILE *f_makan;
    f_makan=fopen("test.txt","w");
    char nama[100];
   int i,n,a;
   printf("Banyak data: ");scanf("%d",&n);fflush(stdin);
    for(i=0;i<n;i++){
   printf("Masukkan nama : "); gets(nama);
    fprintf(f_makan,"%s\n",nama);}
    fclose(f_makan);
    f_makan=fopen("test.txt","r");
    while(fgets(a,sizeof(nama),f_makan)!=NULL){
    printf("%s",nama);}
    printf("No Data");
    fclose(f_makan);
    return 0;}
