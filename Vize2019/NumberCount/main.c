#include <stdio.h>

int main()
{
	int numberCounts[10] = { 0,0,0,0,0,0,0,0,0,0 };
	printf("Enter a max 6 digit numer->");
	char string[6];
	gets(string);
	int i;
	for(i = 0; i < 6; i++)
	{
		int index = string[i];
		if(index >= 48 && index <= 59)
		{
			//0-9
			index-=48; //normalization
			numberCounts[index]++;	
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d->%d\n",i,numberCounts[i]);
	}
	return 0;
}
/*A JELLYBEANCI SOFTWARE*/
