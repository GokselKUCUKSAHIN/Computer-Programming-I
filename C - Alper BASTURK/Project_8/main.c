
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float sonuc,kenar_1,kenar_2,karekenar,ucgenh,ucgent; int swtch;
	printf("1- Dikdortgen alan hesaplama, 2- Kare alan hesaplama, 3- Ucgen alan hesaplama\n");
	printf("SECIM YAPINIZ -> ");
	scanf("%d",&swtch);
	switch (swtch)
	{
		case 1: system("cls");
				printf("Dikdortgen Alan Hesaplamaya Hosgeldiniz\n\n");
				printf("Kenar-1 --> "); scanf("%f.3",&kenar_1);
				if (kenar_1 <= 0)
				{
					printf("HATALI DEGER GIRISI, Kenara 0 ya da daha kucuk deger giremezsiniz!");
					break;
				}
				printf("Kenar-2 --> "); scanf("%f.3",&kenar_2);
				if (kenar_2 <= 0)
				{
					printf("HATALI DEGER GIRISI, Kenara 0 ya da daha kucuk deger giremezsiniz!");
					break;
				}
				sonuc = (kenar_1*kenar_2);
				printf("CEVAP = %.3f\n",sonuc);
				break;
				
		case 2: system("cls");
				printf("Kare Alan Hesaplamaya Hosgeldiniz\n\n");
				printf("Karenin Kenarini girin -> "); scanf("%f.3",&karekenar);
				if (karekenar <= 0)
				{
					printf("HATALI DEGER GIRISI, Kenara 0 ya da daha kucuk deger giremezsiniz!\n");
					break;
				}
				sonuc = (karekenar*karekenar);
				printf("CEVAP = %.3f\n",sonuc);
				break;
				
		case 3: system("cls");
				printf("Ucgen Alan Hesaplamaya Hosgelniz\n\n");
				printf("Ucgenin Yuksekligini girin -> "); scanf("%f.3",&ucgenh);
				if (ucgenh <= 0)
				{
					printf("HATALI DEGER GIRISI, Yukseklik 0 ya da daha kucuk deger giremezsiniz!\n");
					break;
				}
				printf("Ucgenin Tabanini girin -> "); scanf("%f.3",&ucgent);
					if (ucgent <= 0)
				{
					printf("HATALI DEGER GIRISI, Taban Kenar 0 ya da daha kucuk deger giremezsiniz!\n");
					break;
				}
				sonuc = ((ucgenh*ucgent)/2);
				printf("CEVAP = %.3f\n",sonuc);
				break;		
				
		default:	system("cls");
					printf("HATALI SECIM YAPTINIZ!!\n");
					printf("HATALI SECIM YAPTINIZ!!\n");
					printf("HATALI SECIM YAPTINIZ!!\n");	
	}
	printf("Bitti\n");
	system("PAUSE");
	return 0;
}
