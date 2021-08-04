#include<stdio.h>
struct{
	char judul[50];
	int harga;
}a;
int i,n;
void main(){
	FILE*list;
	list=fopen("List Buku.dat","wb"); //Tentukan modenya
	printf("Banyak buku : "); scanf("%d",&n); getchar();
	for(i=1;i<=n;i++){
		printf("%d. Judul buku\t: ",i); gets(a.judul);
		printf("   Harga buku\t: "); scanf("%d",&a.harga);
		getchar();
		fwrite(&a, sizeof(a), 1, list); //Tentukan sintaksnya
	}
	fclose(list); //Lengkapi sintaksnya
}
