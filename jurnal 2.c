#include<stdio.h>
struct{
	char judul[50];
	int harga;
}a;
int i,n;
void main(){
int i=1;
	FILE *list; //Lengkapi sintaksnya
	list=fopen("List Buku.dat","rb"); //Tentukan mode nya
	while(fread(&a,sizeof(a),1,list)==1){
		printf("%d. Judul buku\t: %s\n",i,a.judul); 
		printf("   Harga buku\t: %d\n",a.harga);
		i++;
		}
	fclose(list); //Lengkapi sintaks untuk menutup file
}
