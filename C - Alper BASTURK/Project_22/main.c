#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int);
int kombinasyon(int,int);

int main(void)
{
	int a,b,sonuc;
	printf("Kacin kacli kombinasyonu hesaplancak -> "); scanf("%d%d",&a,&b);
	sonuc=kombinasyon(a,b);
	printf("\n\nKombinasyonu(%d,%d)=%d\'dir.\n\n",a,b,sonuc);
	return 0;
}

int faktoriyel(int a){
	int i,f=1;
	for(i=2;i<=a;i++)
		f*=i;
	return(f);
}

int kombinasyon(int n,int r){
	int deger;
	deger = faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
	return(deger);
}
