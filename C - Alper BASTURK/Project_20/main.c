#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char dummy[1];
	int tahmin,min,max;
	char cevap;
	min = 0;
	max = 100;
	do{
		tahmin=(max-min)/2+min;
		printf("Tuttugun sayi bu mu?: %d\nBuyuk(B),Kucuk(K),Esit(E): ",tahmin);
		scanf("%c",&cevap);
		if(cevap=='K')
		{
			min=tahmin+1;	
		}
		else if(cevap=='k')
		{
			min=tahmin+1;	
		}
		else if(cevap=='B')
		{
			max=tahmin-1;
		}
		else if(cevap=='b')
		{
			max=tahmin-1;
		}
		else if(cevap=='e')
		{
			break;
		}
		else
		{
			printf("Gecersiz giris\n");
//			continue;
		}
		gets(dummy);
			
	}
	while(cevap != 'E');
	
	//SADECE WHILE ILE YAZILIRSA^^
	/*int a=1;	
	while(a==1){
		tahmin=(max-min)/2+min;
		printf("Tuttugun sayi bu mu?: %d\nBuyuk(B),Kucuk(K),Esit(E): ",tahmin); scanf("%c",&cevap);
		if(cevap=='K'){
			min=tahmin+1;	
		}
		if(cevap=='B'){
			max=tahmin-1;
		}
		if(cevap=='E'){
			a=0;
		}
	}*/
	
	printf("Cevabi Buldum\n");
	system("PAUSE");
	return 0;
}

