#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* Row(int);

int main(void)
{
	srand(time(NULL));
	int guess=rand()%9000+1000;
	int life=20,count,Done=0,number;	
	for(count=1;count<=life;count++)
	{
		char *th=Row(count);
		printf("Enter your %2d%s guess(1000-10000)-> ",count,th); 
		scanf("%d",&number);
		if(number!=guess)
		{
			if(number<1000 || number >= 10000)
			{
				char *th=Row(count);
				printf("\nError Unknown range! Retry your %2d%s Guess\n",count,th);
				count--;
				continue;
			}
			else if(number<guess)
				printf("Increase your number!\n");
			else if(number>guess)
				printf("Reduce your number!\n");
		}
		else
		{
			Done=1;
			break;
		}
	}
	if(Done==1)
	{
		char *th=Row(count);
		printf("\nCongrats! You found the number %2d%s times.\n",count,th);
	}
	else
		printf("\nTry again :(\n");
	return 0;
}
char* Row(int x)
{
	if(x==1)
		return("st");
	else if(x==2)
		return("nd");
	else if(x==3)
		return("rd");
	else
		return("th");
}
