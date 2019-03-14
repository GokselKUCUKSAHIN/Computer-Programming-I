#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sayi;
	printf("Sayi girin -> ");
	scanf("%d",&sayi);
	if (sayi > 0)
	{
		printf("Sayi pozitiftir\n");
		printf("-----\n");
	}
	else if (sayi == 0)
	{
		printf("Sayi sifirdir\n");
		printf("-----\n");
	}
	else
	{
		printf("Sayi negatiftir\n");
		printf("-----\n");
	}
	system("PAUSE");
	return 0;
}
