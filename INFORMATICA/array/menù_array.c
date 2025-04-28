/*creaiamo un menù di richieste
1) Caricare un array con solo valori pari;
2) Stampare l'array;
3) Ordina l'array tramite la tecnica del bubble sort;
*/

#include <stdio.h>
#include "libreria.c"
#define DIM 5

int main(){

    int vett[DIM]=0;
    int scelta=0;

    do{
    printf("MENù:");
    printf("\n1) Carica l'array");
    printf("\n2) Stampa l'array");
    printf("\n3) Ordina tramite Bubble sort");
    printf("\n4) Dgita 0 per terminare");
    scanf("%d", &scelta);

    switch (scelta){
        case 1:{
            
        }
    }

    }while(scelta!=0);

    return 0;
}