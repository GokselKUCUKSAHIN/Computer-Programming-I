#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Matematik kütüphanesi, sin() komutu için gerekli.

int main(void)
{
    float aci;
    printf("acinin derece cinsinden degerini giriniz -> ");
    scanf("%f",&aci);
    float radyan=aci*(22/7.0)/180; //Raydan = Pi/180, Pi 22/7 olarak yaklaşık hesaplıyoruz
    printf("\n%7.2f derecenin sinusu %5.3f\'dir.\n\n",aci,sin(radyan));
    system("PAUSE");
    return 0;
}
