/*DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

int main(){

    int vett[DIM];
    int p=0;
    int d=0;

    srand(time(NULL));
    for(int i=0; i<DIM; i++){
        vett[i]=rand()%(10)+0;
    }

    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }

    for(int i=0; i<DIM; i++){
        if(vett[i]%2 == 0){
            p+=1;
        }
        else{
            d+=1;
        }
    }

    printf("\nvalori pari: %d, valori dispari: %d", p, d);

    return 0;
}