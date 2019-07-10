#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	for(x=5;x<15;x+=1){
		if (x==8)
			break;
		printf("Break dongude, x in degeri simdi %d\n",x);
	}
	for (x=5;x<15;x+=1){
		if(x==8)
			continue;
		printf("Continue dongude, x in degeri simdi %d\n",x);
	}
	system("PAUSE");
	return 0;
}
