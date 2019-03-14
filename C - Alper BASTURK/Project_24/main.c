#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, *isaret;
	x = 100;
	isaret = &x;
	printf("x in degeri = %d\n",x);
	printf("x in adresi = %p\n",isaret);
	printf("x in degeri = %d\n",*isaret);
	printf("x in adresi = %p\n",&x);
	system("PAUSE");
	return 0;
}
