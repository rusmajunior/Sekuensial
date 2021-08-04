#include <stdio.h>

FILE *f_dataktp;

int i, n;

struct {
	char nik[99], nama[99], ttl[99];
} ktp;

int main(){
	
	f_dataktp= fopen("pemilu.txt", "rb");
	printf("==Output==\n");
	while(fread(&ktp,sizeof(ktp),1,f_dataktp)==1){
	printf("\nNIK  : %s\n", ktp.nik);
	printf("Nama : %s\n", ktp.nama);
	printf("TTL  : %s\n", ktp.ttl);
	}
	fclose(f_dataktp);
	return 0;
}

