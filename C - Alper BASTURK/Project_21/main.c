#include <stdio.h>
#include <stdlib.h>
//D�rtgen �izme yaz�l�m� 
int main(void)
{
	int x,y; //kordinat de�i�kenlerim
	printf("X ekseni -> "); scanf("%d",&x); //X kordinat�
	printf("Y ekseni -> "); scanf("%d",&y); //Y kordinat�
	printf("x=%d, y=%d\n\n",x,y); //ald���m�z de�erler
	int i,j;
	for (j=y;j>=1;--j)
	{
		for(i=x;i>=1;--i)
			printf("X ");
					
		printf("\n");
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

