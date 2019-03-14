#include <stdio.h>  // printf ve scanf komutlarý için gerekli kütüphane.
#include <stdlib.h> // system("PAUSE") komutu için gerekli kütüphane.
#include <math.h>   // Matematik kütüphanesi.

int main(void)
{ //Dörtgen alan ve çevre hesaplama. 
  float a; //1. kenarýn deðeri, Reel
  float b; //2. kenarýn deðeri, Reel
  printf("Kenar-1\'i girin -> :"); //Bir deðer girmemizi söyleyen printf komutu
  scanf("%f",&a); //1. kenarýn deðerini isteyen scanf komutu, float a = scanf(%f,&a)
  printf("Kenar-2\'i girin -> :"); //Bir deðer girmemizi söyleyen printf komutu
  scanf("%f",&b); //2. kenarýn deðerini isteyen scanf komutu, float b = scanf(%f,&b)
  printf("Alani %.2f \n",a*b); //Dörtgenin alanýný bize veren printf komutu.
  printf("Cevresi %.2f \n",2*(a+b));  //Dörtgenin çevresini veren prtinf komutu.
  system("PAUSE");	//Programýn aniden kapanmasýný engelleyen DURAKLAT komutu.
  return 0;
}
