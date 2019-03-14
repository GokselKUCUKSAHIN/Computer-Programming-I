#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int limit,i,j,asal;
	printf("Kaca kadar olan sayilar incelenecek -> "); scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		asal=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if (i%j==0)
			{
				asal=0;break;
			}
		}
		if (asal==0)
		{
			//printf("%d Asal degildir.\n",i);
		}
		else
		{	
			if (i >= 2)	
			printf("%d Asaldir.\n",i);	
		}	
	}	
system("PAUSE");
return 0;
}

