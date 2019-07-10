#include <stdio.h>
#include <stdlib.h>

//Pointer tipindeki fonksiyona örnek
//o fonksiyonun kendisini cagirana bir adres gönderecegini ifade eder

int topla(int,int);

int main(void)
{
	int a,b,sonuc;
    	printf("Toplanacak iki sayiyi giriniz -> ");
    	scanf("%d %d",&a,&b);
   	sonuc = topla(a,b);
  	printf("iki sayinin toplami : %d \n",sonuc);
	system("PAUSE");
	return 0;
}

int topla(int x,int y)
{
   	int toplam;
   	toplam = x+y;
   	return toplam;
}
