#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,toplam=0;
	printf("Kaca kadar olan sayilarin toplamini istiyorsunuz?: "); scanf("%d",&i);
	for(j=0;j<=i;j++)
		toplam+=j;
	printf("Sonuc. %d\n",toplam);
	system("PAUSE");
	return 0;
}
