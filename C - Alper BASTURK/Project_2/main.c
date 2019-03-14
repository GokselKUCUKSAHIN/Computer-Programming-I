#include <stdio.h> //printf komutu için gerekli kütüphane.
#include <stdlib.h> //system("PAUSE"); komutu için gereki kütüphane.

int main(void) {
    int a=5;float p=-2.2/7.0; //a bir Integer(Tam sayý) ve deðeri 5, p bir float(reel sayý) ve deðeri -0.314285714 dir.
    printf("a degiskeninin degeri %d\'dir.\n",a); //d int deðerlerini yazdýrýr, %d þeklinde kullanýlýr.
    printf("a degiskeninin degeri %2d\'dir.\n",a); //2 sayýsý intin kaç basamaklý olduðunu belirtir.
    printf("a degiskeninin degeri %3d\'dir.\n\n",a);
    printf("p degiskeninin degeri %f\'dir.\n",p);
    printf("p degiskeninin degeri %9.6f\'dir.\n",p);
    printf("p degiskeninin degeri %10.6f\'dir.\n",p);
    printf("p degiskeninin degeri %10.3f\'dir.\n",p);
    printf("p degiskeninin degeri %e\'dir.\n",p);
    printf("p degiskeninin degeri %14.6e\'dir.\n",p);
    printf("p degiskeninin degeri %15.6e\'dir.\n",p);
    printf("p degiskeninin degeri %15.3e\'dir.\n",p);   
    system("PAUSE"); // Programýn hemen kapanmamasý için DURAKLAT komutu.
    return 0; //Programýn bittiðini belirten komut.
}
