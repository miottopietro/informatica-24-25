/*DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

int main(){

    int vett[DIM];
    int p=0;
    int n=0;

    srand(time(NULL));
    for(int i=0; i<DIM; i++){
        vett[i]=rand()%(21)-10;
    }

    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }

    for(int i=0; i<DIM; i++){
        if(vett[i]<0){
            n++;
        }
        else{
            p++;
        }
    }

    printf("\ni numeri positivi sono: %d, i numeri negativi sono: %d", p, n);

    return 0;
}