#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int asalMi(int);

int RakamYap(char);

int main(void)
{
	FILE *Dosya=fopen("LASA_ext1.txt","w");
	int sayiA,sayiB;
	char Rakamlar[7];
//	char TersRakamlar[5];
	int i,j;
	for(i=11;i<=9999999;i+=2)
	{
		sayiA=0;sayiB=0;
//		printf("Bir Sayi girin-->");
//		gets(Rakamlar);
		sprintf(Rakamlar,"%d",i);
//		printf("Rakam=%d\n",i);
//		printf("%s\n",Rakamlar);
		int LenRakam=strlen(Rakamlar);
//		printf("Len=%d\n",LenRakam);
		int Dizi[LenRakam];
		int ReverseDizi[LenRakam];
		for(j=0;j<LenRakam;j++)
		{
			Dizi[j]=RakamYap(Rakamlar[j]);
			ReverseDizi[LenRakam-1-j]=RakamYap(Rakamlar[j]);
		}
		for(j=0;j<LenRakam;j++)
		{
			sayiA+= Dizi[j]*pow(10,(LenRakam-j-1));
			sayiB+= ReverseDizi[j]*pow(10,(LenRakam-j-1));
		}
//		printf("Duz===%d\nTers==%d\n",sayiA,sayiB);
		if(sayiA>=10)
		{
			if(asalMi(sayiA)==1 && asalMi(sayiB)==1)
			{
//				printf("%-5d Sayisi LASA sayisidir.\n",sayiA);
				fprintf(Dosya,"%-8d Sayisi LASA sayisidir.\n",sayiA);
			}
		}
	}
	fclose(Dosya);
	return 0;
}

int RakamYap(char CharRakam)
{
	if(CharRakam=='0')
		return 0;
	else if(CharRakam=='1')
		return 1;
	else if(CharRakam=='2')
		return 2;
	else if(CharRakam=='3')
		return 3;
	else if(CharRakam=='4')
		return 4;
	else if(CharRakam=='5')
		return 5;
	else if(CharRakam=='6')
		return 6;
	else if(CharRakam=='7')
		return 7;
	else if(CharRakam=='8')
		return 8;
	else if(CharRakam=='9')
		return 9;
	else
		return 0; 
}

int asalMi(int Sayi)
{
	int i, Asal=1;
	for(i=2;i<=sqrt(Sayi);i++)
		if(Sayi%i==0)
		{
			Asal=0;
			break;
		}
	if(Sayi>=2)
		return(Asal);
	else
		return 0;
}
