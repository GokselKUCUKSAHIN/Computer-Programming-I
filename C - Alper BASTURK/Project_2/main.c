#include <stdio.h> //printf komutu i�in gerekli k�t�phane.
#include <stdlib.h> //system("PAUSE"); komutu i�in gereki k�t�phane.

int main(void) {
    int a=5;float p=-2.2/7.0; //a bir Integer(Tam say�) ve de�eri 5, p bir float(reel say�) ve de�eri -0.314285714 dir.
    printf("a degiskeninin degeri %d\'dir.\n",a); //d int de�erlerini yazd�r�r, %d �eklinde kullan�l�r.
    printf("a degiskeninin degeri %2d\'dir.\n",a); //2 say�s� intin ka� basamakl� oldu�unu belirtir.
    printf("a degiskeninin degeri %3d\'dir.\n\n",a);
    printf("p degiskeninin degeri %f\'dir.\n",p);
    printf("p degiskeninin degeri %9.6f\'dir.\n",p);
    printf("p degiskeninin degeri %10.6f\'dir.\n",p);
    printf("p degiskeninin degeri %10.3f\'dir.\n",p);
    printf("p degiskeninin degeri %e\'dir.\n",p);
    printf("p degiskeninin degeri %14.6e\'dir.\n",p);
    printf("p degiskeninin degeri %15.6e\'dir.\n",p);
    printf("p degiskeninin degeri %15.3e\'dir.\n",p);   
    system("PAUSE"); // Program�n hemen kapanmamas� i�in DURAKLAT komutu.
    return 0; //Program�n bitti�ini belirten komut.
}
