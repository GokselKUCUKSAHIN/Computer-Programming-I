#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *dosyaYaz;
	dosyaYaz=fopen("ogrenci.txt","w");
	fputs("Ali 82\n",dosyaYaz);
	fputs("Aysu 97\n",dosyaYaz);
	fclose(dosyaYaz);	
	return 0;
}
