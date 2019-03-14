#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ofp;
	ofp=fopen("dosya_oku.txt","r");
	if(ofp==NULL)
		perror("Hata: Dosya Acilmadi");
	else
	{
		fputc('x',ofp);
		if(ferror (ofp))
			printf("Hata: dosya_oku.txt dosyasina yazma islemi gerceklesmedi\n");
	}
	fclose(ofp);
	return 0;
}
