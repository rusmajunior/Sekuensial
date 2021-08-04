#include <stdio.h>

int n, i;

struct {
	char nik[99], nama[99], ttl[99];
} ktp;

int main(){
	
FILE *f_dataktp;

	f_dataktp=fopen("pemilu.txt","wb");
	printf("Jumlah Penduduk : ");scanf("%d", &n); getchar();
	for (i=1; i<=n; i++){
	printf("\n-Data penduduk %d", i);
	printf("\nNIK  : ");gets(ktp.nik);
	printf("Nama : ");gets(ktp.nama);
	printf("TTL  : ");gets(ktp.ttl);
	fwrite(&ktp,sizeof(ktp),1,f_dataktp);
	}
	fclose(f_dataktp);

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

