/*dati 2 vettori V1 e V2 eseguire lo scambio di valori tra i due*/

#include <stdio.h>
#include "libreria.h"
#include "libreria.c"

#define DIM 5

void riempiVettore(int vettore[], int dim);
void stampaVettore(int vettore[], int dim, char sep);

int main(){

    int V1[DIM];
    int V2[DIM];
    char sep = '-';

    riempiVettore(V1, DIM);
    riempiVettore(V2, DIM);

    stampaVettore(V1, DIM, sep);

    printf("\n");

    stampaVettore(V2, DIM, sep);

    printf("\n");

    for (int i = 0; i < DIM; i++) {
        int temp = V1[i];

        V1[i] = V2[i];
        V2[i] = temp;
    }
    
    printf("Valori del 1 vettore dopo lo scambio:\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", V1[i]);
    }

    printf("\n");

    printf("Valori del 2 vettore dopo lo scambio:\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", V2[i]);
    }

    printf("\n");

    return 0;
}