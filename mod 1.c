#include <stdio.h>

char kalimat[99];

 int main(){
	FILE *kal;
	kal = fopen("klmt.txt","w");
	printf("Masukan kalimat : ");
	gets(kalimat);
	fprintf(kal, "%s\n", kalimat);
	fclose (kal);

	kal = fopen("klmt.txt", "r");
	while (fgets(kalimat, sizeof(kalimat), kal) != NULL)
	printf("\nOutput : %s",kalimat);
	fclose (kal);
	return 0;
}
