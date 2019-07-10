#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
	float x;
	float y;
};

float uzaklik (struct point noktaA ,struct point noktaB)
{
//	struct point noktaA,noktaB;
	return(sqrt((noktaA.x-noktaB.x)*(noktaA.x-noktaB.x)+(noktaA.y-noktaB.y)*(noktaA.y-noktaB.y)));
}

int main(void)
{
	struct point p1,p2;
	float Leng;
	printf("1. Noktanin Koordinatlarini Girin -> "); scanf("%f%f",&p1.x,&p1.y);
	printf("2. Noktanin Koordinatlarini Girin -> "); scanf("%f%f",&p2.x,&p2.y);
//	Leng=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
//	printf("Uzaklýk = %.3f",Leng);
	Leng=uzaklik(p1,p2);
	printf("Uzakliklari = %f",Leng);
	return 0;
}
