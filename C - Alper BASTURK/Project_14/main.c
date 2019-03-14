#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i,j;
	for(i=8;i>=1; i--)
	{
		for(j=i;j>=1;j--)
			printf("%3d",j);
		printf("\n");
	}
	return 0;
}
