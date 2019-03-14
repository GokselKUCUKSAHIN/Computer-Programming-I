#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int a=0,b=0,c=0;
	int g=0,k=0,s=0;
	for(a=0;a<=10;a=a+1)
	{
		printf("SAYI GIRISI -> ");
		scanf("%d",&c);
		if (c < 0)
		{
			printf("%d Sayisi Negatif\n",c);
			g++;
			b++;
		}
		else if (c == 0)
		{
			printf("%d Sayisi Sifir\n",c);
			k++;
			b++;
		}	
		else
		{
			printf("%d Sayisi Pozitif\n",c);
			s++;
			b++;
		}
	if (a == 10)
	{
		printf("%d tane Pozitif, %d tane Sifir, %d tane Negatif sayi girdiniz\n",s,k,g);
		break;
	}
	}
	return 0;
}

/*
kaç tanesi prozit


*/
