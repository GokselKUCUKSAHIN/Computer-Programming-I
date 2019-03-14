#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N,i=1,f=1;
	printf("Kac faktoriyel hesaplancak -> "); scanf("%d",&N);
	while (i<=N)
		f*=i++;
	printf("%d!=%d faktoriyel\n",N,f);	
	return 0;
}
