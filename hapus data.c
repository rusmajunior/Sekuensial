#include <stdio.h>
#include <string.h>

FILE *f_dataktp;
FILE *f_dataktp2;

char hapus[99];
 
struct {
char nik[99], nama[99], ttl[99];
} ktp;

int main(){

	f_dataktp  = fopen("pemilu.txt", "rb");
	f_dataktp2 = fopen("pemilu2.txt", "wb");
	printf("Silahkan masukkan NIK yang akan dihapus: ");gets(hapus);
	while (fread(&ktp,sizeof (ktp),1, f_dataktp)==1){
	if (strcmp(ktp.nik, hapus)!=0){
	fwrite(&ktp, sizeof(ktp), 1, f_dataktp2);
}
}
	fclose(f_dataktp);
	fclose(f_dataktp2);
	remove("pemilu.txt");
	rename("pemilu2.txt","pemilu.txt");
	
	f_dataktp = fopen("pemilu.txt", "rb");
	printf("==Output==\n");
	while(fread(&ktp,sizeof(ktp),1,f_dataktp)==1){
	printf("\nNIK  : %s\n", ktp.nik);
	printf("Nama : %s\n", ktp.nama);
	printf("TTL  : %s\n", ktp.ttl);
	}
	fclose(f_dataktp);
	return 0;
}
