#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sayi;	
	printf("Bir sayi girin -> ");
	scanf("%d",&sayi);
	
	if (sayi == 1)
		printf("sayi %d\'dir\n",sayi);
	else if (sayi == 2)
		printf("sayi %d\'dir\n",sayi);
	else if (sayi == 3)
		printf("sayi %d\'dur\n",sayi);
	else
		printf("%d Sayisi, 1, 2, 3 degildir\n",sayi);
	system("PAUSE");
	return 0;
}
