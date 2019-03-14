#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char cumle[] = "Merhaba Dunya";
	int say=0;
	int i;
	for (i=0; cumle[i] != '\0';i++)
		say++;
	printf("%s %d karakter icerir.",cumle, say);
	return 0;
}
