#include <stdio.h>
#include <stdlib.h>


float daire(int);
int kare(int);
int dikdortgen(int,int);
int ucgen(int,int);
int main(void) {
	int key,kenarA,kenarB,Yukseklik,Cap;
	printf("Hangi seklin Alanini hesaplamak istiyorsunuz?\n\t1-Kare\n\t2-Dikdortgen\n\t3-Daire\n\t4-Ucgen\n");
	printf("? --> ");
	scanf("%d",&key);
	switch(key){
		case 1:{
			//kare
			printf("\nKarenin Kenar Uzunlugunu girin -> "); scanf("%d",&kenarA);
			printf("%d\n",kare(kenarA));
			break;
		}
		case 2:{
			//dikdörtgen
			printf("\nDikdortgenin Kenarlarini girin:\n");
			printf("Kenar-1 -> "); scanf("%d",&kenarA);
			printf("Kenar-2 -> "); scanf("%d",&kenarB);
			printf("%d\n",dikdortgen(kenarA,kenarB));
			break;
		}
		case 3:{
			//daire
			printf("\nDairenin Capini girin -> "); scanf("%d",&Cap);
			printf("%.3f",daire(Cap));
			break;
		}
		case 4:{
			//ucgen
			printf("\nUcgenin Taban ve Yuksekligini girinin:\n");
			printf("Taban Uzungulunu girin -> "); scanf("%d",&kenarA);
			printf("Yuksekligini girin ->"); scanf("%d",&kenarB);
			printf("%d",ucgen(kenarA,kenarB));
			break;
		}
		default:{
			printf("Gecersiz Secim!\n");
		}
	}
	return 0;
}
int kare(int a){
	return(a*=a);
}
int dikdortgen(int a,int b){
	return(a*b);
}
float daire(int a){
	float Pi=22/7.0;
	return(Pi*(a*a));
}
int ucgen(int a,int b){
	return((a*b)/2);
}
