#include <stdio.h>
#include <stdlib.h>

//Pointer tipindeki fonksiyona �rnek
//o fonksiyonun kendisini �a��rana bir adres g�nderece�ini ifade eder

void caticiz();
void katciz( int);

int main(void) {
	int k;
	printf("kac katli bina olsun? ");
	scanf("%d",&k);
	caticiz();
	
		katciz(k);
	system("PAUSE");
	return 0;
}

 void caticiz ()
 {
 	printf("   *   \n");
 	printf("  ***  \n");
 	printf("*******\n");
 	printf("-------\n");
 }
  void katciz (int x)
 {
 	int i;
 	for(i=1;i<=x;i++){
 	printf("l      l\n");
 	printf("-------\n");
 	}
 }
