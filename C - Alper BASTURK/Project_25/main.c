#include <stdio.h>
#include <stdlib.h>

void takas(int *,int *);

int main(void) {
	int a,b;
	printf("Takas edilecek sayilari giriniz -> ");
	scanf("%d %d",&a,&b);
	printf("Takas oncesi : a=%d b=%d\n",a,b);
	takas(&a,&b);
	printf("Takas sonrasi: a=%d b=%d\n",a,b);
	system("PAUSE");
	return 0;
}
void takas(int *x,int *y)
{
	int z;
	z= *x;
	*x=*y;
	*y=z;
}
