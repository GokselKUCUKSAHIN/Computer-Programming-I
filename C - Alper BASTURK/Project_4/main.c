#include <stdio.h>  // printf ve scanf komutlar� i�in gerekli k�t�phane.
#include <stdlib.h> // system("PAUSE") komutu i�in gerekli k�t�phane.
#include <math.h>   // Matematik k�t�phanesi.

int main(void)
{ //D�rtgen alan ve �evre hesaplama. 
  float a; //1. kenar�n de�eri, Reel
  float b; //2. kenar�n de�eri, Reel
  printf("Kenar-1\'i girin -> :"); //Bir de�er girmemizi s�yleyen printf komutu
  scanf("%f",&a); //1. kenar�n de�erini isteyen scanf komutu, float a = scanf(%f,&a)
  printf("Kenar-2\'i girin -> :"); //Bir de�er girmemizi s�yleyen printf komutu
  scanf("%f",&b); //2. kenar�n de�erini isteyen scanf komutu, float b = scanf(%f,&b)
  printf("Alani %.2f \n",a*b); //D�rtgenin alan�n� bize veren printf komutu.
  printf("Cevresi %.2f \n",2*(a+b));  //D�rtgenin �evresini veren prtinf komutu.
  system("PAUSE");	//Program�n aniden kapanmas�n� engelleyen DURAKLAT komutu.
  return 0;
}
