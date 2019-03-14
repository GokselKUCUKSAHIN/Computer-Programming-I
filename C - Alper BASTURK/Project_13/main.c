#include <stdio.h>
#include <stdlib.h>

int main(void) 
{ 	int sayi,i,p=0,n=0,s=0;
for(i=1; i<=10; i++)
{ printf("%d. sayiyi giriniz -> ",i);
scanf("%d",&sayi);
if(sayi==0)
s++;
else if (sayi<0)
n++;
else
p++;
}
printf("\n\nN:%d, S:%d, P:%d\n\n",n,s,p);
	return 0;
}
