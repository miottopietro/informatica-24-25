/*dopo aver caricato un vettore numerico confrontare
la somma delle componenti di indice pari con la somma 
delle componenti dispari e dire se la somma maggiore 
è divisibile per un assegnato valore K (con K diverso da 0)*/

#include <stdio.h>
#include "libreria.c"
#include <time.h>
#include <stdlib.h>
#define DIM 5

int main(){

    int vett[DIM];

    caricaVettore(vett, DIM);

    return 0;
}