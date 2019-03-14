#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x,toplam=0;
	
	for(x=2;x<=30;x+=2)
		toplam+=x;
		
	printf("2 ile 30 sayilari arasindaki cift tamsayilarin toplami : %d\n",toplam);
}
