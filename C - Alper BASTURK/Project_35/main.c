#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
	char isim[15];
	int yas;
	float ortalama;
};

void oku(struct ogrenci s[]);

int main(void)
{
	struct ogrenci sinif[30];
	float enbuyuk =0.0;
	char birinci[15];
	int i;
	oku(sinif);
	for(i=0;i<5;i++)
	{
		if((sinif[i].ortalama)>enbuyuk)
		{
			enbuyuk=sinif[i].ortalama;
			strcpy(birinci,sinif[i].isim);
		}
	}
	printf("Sinif birincisi: %s ",birinci);
	printf("Ortalama: %5.2f",enbuyuk);
	return 0;
}
void oku(struct ogrenci s[])
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s,",s[i].isim);
		scanf("%d %f",&s[i].yas,&s[i].ortalama);
	}
}
