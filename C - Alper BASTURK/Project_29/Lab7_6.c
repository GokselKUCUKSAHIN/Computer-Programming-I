#include <stdio.h>
#include <stdlib.h>

//Pointer tipindeki fonksiyona örnek
//o fonksiyonun kendisini çaðýrana bir adres göndereceðini ifade eder

void topla();

int main(void) {
	
   	topla();
  	
	system("PAUSE");
	return 0;
}

 void topla()
 {
   int toplam;
   int a,b;
    printf("Toplanacak iki sayiyi giriniz -> ");
    scanf("%d %d",&a,&b);
   toplam = a+b;
   printf("iki sayinin toplami : %d \n",toplam);
 }
