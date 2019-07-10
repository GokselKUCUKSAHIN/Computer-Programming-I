#include <stdio.h>
#include <stdlib.h>
//Dörtgen çizme 
int main(void)
{
	int x,y; //kordinat deðiþkenlerim
	printf("X ekseni -> "); scanf("%d",&x); //X kordinatý
	printf("Y ekseni -> "); scanf("%d",&y); //Y kordinatý
	printf("x=%d, y=%d\n\n",x,y); //aldýðýmýz deðerler
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
