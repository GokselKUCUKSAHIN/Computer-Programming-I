#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sayi,max=0,sayac=1;
	printf("Pozitif bir sayi giriniz -> ");
	scanf("%d",&sayi);
	while (sayi>0)
	{
		sayac=sayac +1;
		if (sayi > max)
		{
			max=sayi;
		}
		printf("Pozitif bir sayi giriniz -> ");
		scanf("%d",&sayi);
	}
	if (sayac<2)
	{
		printf("Gecersiz sayi girisi! \n");	
	}
	else
	{
		printf("\n\nSu ana kadar girilen en buyuk sayi = %d\n\n",max);
	}	
	system("PAUSE")
	return 0;
}
