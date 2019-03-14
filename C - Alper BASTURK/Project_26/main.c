#include <stdio.h>
#include <stdlib.h>

int *topla(int,int);

int main(void) {
	int a,b;
	int *p;
	printf("Toplanacak iki sayiyi giriniz -> ");
	scanf("%d %d",&a,&b);
	p = topla(a,b);
	printf("Iki sayisin toplami : %d (toplamin adresi %p)\n",*p,p);	
	system("pause");
	return 0;
}
int *topla(int x,int y)
{
	int *ptr,toplam;
	toplam = x+y;
	ptr = &toplam;
	return ptr;
}
