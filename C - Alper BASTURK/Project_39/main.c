#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int mt1,mt2,final,donemNotu;
	char ad[30];
	FILE *dosyaYaz;
	FILE *dosyaOku;
	dosyaOku=fopen("ogrenci.txt","r");
	dosyaYaz=fopen("notlar.txt","w");
	while(fscanf(dosyaOku,"%s %d %d %d\n",&ad,&mt1,&mt2,&final) != EOF)
	{
		donemNotu= (mt1 *0.25)+(mt2*0.25)+(final*0.5);
		fprintf(dosyaYaz,"%s: %d\n",ad,donemNotu);
	}
	fclose(dosyaOku);
	fclose(dosyaYaz);
	return(0);
}
