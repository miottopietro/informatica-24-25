/*DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

int main(){

    int vett[DIM];
    float somma=0;
    float media=0;

    srand(time(NULL));
    for(int i=0; i<DIM; i++){
        vett[i]=rand()%(100)+0;
    }

    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }

    for(int i=0; i<DIM; i++){
        somma+=vett[i];
    }

    media=somma/DIM;

    printf("\nla media è: %.2f", media);
    return 0;
}