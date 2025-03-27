/*caricato un vettore con valori random
calcolare la media */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.c"
#define DIM 4 

int main(){

    int vettore[DIM]={0};
    float media=0;

    valoriCasuali(vettore,DIM);
    stampaVettore(vettore,DIM,'-');
    media=calcolaMedia(vettore,DIM);
    printf("la media è: %.2f", media);
}