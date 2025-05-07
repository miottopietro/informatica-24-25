/*DATO UN ARRAY SOSTITUIRE TUTTI GLI 0 CON IL VALORE MINIMO.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

int main(){

    int vett[DIM];
    int min;

    srand(time(NULL));
    for(int i=0; i<DIM; i++){
        vett[i]=rand()%(10)+0;
    }

    for(int i=0; i<DIM; i++){
        if(vett[i]<min && vett[i]!=0){
            min=vett[i];
        }

    }

    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }
    printf("\n");


    for(int i=0; i<DIM; i++){
        if(vett[i]==0){
            vett[i]=min;
        }
    }

    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }
    return 0;
}