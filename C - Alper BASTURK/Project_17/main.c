#include <stdio.h>
#include <stdlib.h>

int main()
{
	int kisi,hesapNo,oncekiKrediLimiti,ilkBakiye,yeniKrediLimiti;
	for(kisi=1;kisi<=3;kisi++)
	{
		printf("%d. musterinin hesap numarasini giriniz:",kisi);
		scanf("%d",&hesapNo);
		printf("%d. musterinin onceki kredi limitini giriniz:",kisi);
		scanf("%d",&hesapNo);
		printf("%d. musterinin su andaki bakiyesini giriniz:",kisi);
		scanf("%d",&ilkBakiye);
		yeniKrediLimiti=oncekiKrediLimiti/2;
		if(ilkBakiye <= yeniKrediLimiti)
			printf("\n");
		else
			printf("   %d. musteri yeni kredi limitini asmistir\n\n",kisi);
	}
	system("PAUSE");
}
