#include <stdio.h>
#include <stdlib.h>

int Len(char[]);

int main(void) {
	char cumle[] = "Merhaba Dunya";
	char ad[] = "Goksel";
	char metin[] = "Erciyes Universitesi";
	printf("\n\'\'%s\'\' dizgesi %d adet karakterden olusmaktadir.\n\n",metin,Len(metin));
	return 0;
}

int Len(char A[]){
	int i;
	for(i=0;A[i]!='\0';i++);
	return(i);
}
