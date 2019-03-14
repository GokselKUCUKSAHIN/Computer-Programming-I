#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y,sonuc;
	printf("X degerini giriniz -> ");
	scanf("%f",&x);
	printf("Y degerini giriniz -> ");
	scanf("%f",&y);
	
	if ((x < 0) && (y < 0))
	{
		printf("X ve Y\'nin ikisinin de Negatif olma durumu ile ilgili fonksiyon tanimsizdir\n");
	}		
	else if (x >= 0 && y >= 0)
	{
		sonuc = x*y;
		printf("%.3f\n",sonuc);
	}
	else if ((x >= 0) && (y < 0))
	{
		sonuc = x+y;
		printf("%.3f\n",sonuc);
	}
	else
	{
		sonuc = y-x;
		printf("%.3f\n",sonuc);
	}
	system("PAUSE");
	return 0;
}
