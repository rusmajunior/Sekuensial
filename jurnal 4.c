#include<stdio.h>
#include<string.h>

int menu, n, i=1;

struct siswa{
	char nama[99], nim[99], kelas[99];
}datsis;

FILE*mahasiswa;
main ()

{
	printf("Pilihan menu : \n");
	printf("'1'Menulis data \n'2'Melihat Data \n'3'Menambahkan Data\n");
	printf("Pilih : ");scanf("%d", &menu);
	if(menu==1)
	{
		system("CLS");
		menulis();
	}
	else if (menu==2)
	{
		melihat();
	}
}

menulis()
{
	mahasiswa=fopen("Data Siswa.dat","ab"); //Tentukan modenya
	printf("Banyak Mahasiswa : "); scanf("%d",&n); getchar();
	for(i=1;i<=n;i++){
		printf(" Mahasiswa %d\n",i);
		printf("Nama Mahasiswa : ");gets(datsis.nama);
		printf("NIM            : ");gets(datsis.nim);
		printf("Kelas          : ");gets(datsis.kelas);
		fwrite(&datsis, sizeof(datsis), 1, mahasiswa); //Tentukan sintaksnya
	}
	fclose(mahasiswa);
	system("CLS");
	main();
}

melihat ()
{
	int a;
	system("CLS");
	mahasiswa=fopen("Data Siswa.dat","rb"); //Tentukan modenya
	while(fread(&datsis, sizeof(datsis), 1, mahasiswa)==1){
		printf("\nMahasiswa %d\n", ++a);
		printf("\nNama Mahasiswa : %s", datsis.nama);
		printf("\nNIM            : %s", datsis.nim);
		printf("\nKelas          : %s\n", datsis.kelas);
	}
	fclose(mahasiswa); 
	system("pause");
	main();
}

