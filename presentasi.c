#include <stdio.h>
#include <string.h>
int main(){
    FILE *f_struktur;
    FILE *f_struktur2;
    char dicari[99];
    struct {
        char nama[99],ttl[99],gender[99];
        double nik;
    } daftar;
    f_struktur = fopen("data KTP.dat", "rb");
    f_struktur2 = fopen("data KTP2.dat", "wb");
    printf("Silahkan masukkan Nama Penduduk yang akan dihapus: "); gets(dicari);
    while (fread(&daftar,sizeof (daftar),1, f_struktur)==1){
        if (strcmp(daftar.nama,dicari)!=0){
            fwrite(&daftar, sizeof(daftar), 1, f_struktur2);
        }
    }
    fclose(f_struktur);
    fclose(f_struktur2);
    remove("data KTP.dat");
    rename("data KTP2.dat","data KTP.dat");
    f_struktur = fopen("data KTP.dat", "rb");
    while(fread(&daftar,sizeof(daftar),1,f_struktur)==1){
        printf("NIK\    : %lf\\ n",daftar.nik); 
        printf("Nama\    : %s\\ n",daftar.nama); 
        printf("TTL\    : %s\\ n",daftar.ttl);
        printf("Jenis Kelamin\    : %s\\ n",daftar.gender); 
    }
    fclose(f_struktur);
    return 0;
}
