#include <stdio.h>
#include <stdlib.h>


int main()
{
	int sayi;
	int ciftsayi= 0;
	printf("Sayi girisi -> ");
	scanf("%d",&sayi);
	while(sayi >=0)
	{
		ciftsayi = (sayi%2);
		if (ciftsayi == 0)
		{
			printf("%d\n",sayi);
		}
		sayi = sayi -1;
	}
	system("PAUSE");
	return 0;
}
