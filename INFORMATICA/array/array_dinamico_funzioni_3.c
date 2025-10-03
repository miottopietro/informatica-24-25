/*
Scrivi un programma in C che:
1. Chiede all'utente quanti numeri interi vuole inserire;
2. Alloca dinamicamente un array di quella dimensione con malloc();
3. Permette all'utente di inserire i numeri;
4. Chiede all'utente se vuole aumentare la dimensione dell'array;
    -Se si, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
    -Permette quindi di inserire i nuovi valori negli spazi aggiunti;
5. Infine, stampa tutti gli elementi dell'array.
*/

#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _dim){
    int* _vettore=(int*)malloc(_dim*sizeof(int));
    if(_vettore==NULL){
        printf("Errore di allocazione!\n");
        return NULL;
    }
    return _vettore;
}

int* inserisciValori(int *_vettore, int _dim){
    for(int i=0; i<_dim; i++){
        printf("Inserisci il valore %d: ", i+1);
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _dim){
    printf("Hai inserito i seguenti elementi: : ");
    for(int i=0; i<_dim; i++){
        printf("%d ", _vettore[i]);
    }
    printf("\n");
}

 int* aumentaDim(int *_vettore, int _dim){
        int nuovaDim=0;
        int *_aumenta=NULL;
        do{
            printf("inserisci una nuova dimensione: ");
            scanf("%d", &nuovaDim);
            _aumenta=(int*)realloc(_vettore, nuovaDim *sizeof(int));
            for(int i=_dim; i<nuovaDim; i++){
                printf("inserisci nuovi valori: ");
                scanf("%d", &_aumenta[i]);
            }

        }while(nuovaDim!=_dim);
        return _aumenta;
    }

int main(){

    int *vettore=NULL;
    int dim=0;
    int scelta=0;

    do{
        printf("quanti elementi vuoi all'interno dell'array: ");
        scanf("%d", &dim);
    }while(dim<0);

    vettore=creaVett(dim);
    vettore=inserisciValori(vettore, dim);
    stampaVett(vettore, dim);

    printf("inserisci 1 se vuoi aumentare la dimensione del array? ");
    scanf("%d", &scelta);

    if(scelta==1){
        vettore=aumentaDim(vettore, dim);
        stampaVett(vettore, dim);
    }else{
        printf("uscita.");
    }

    return 0;
}