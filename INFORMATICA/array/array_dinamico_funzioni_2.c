/*SCRIVERE UN PROGRAMMA IN LINGUAGGIO C CHE: 
    1. ALLOCHI DINAMICAMENTE UN ARRAY INIZIALE DI N NUMERI;
    2. INSERISICI DEI VALORI;
    3. STAMPA ARRAY;
    4. CALCOLI LA SOMMA DEGLI ELEMENTI MULTIPLI DI 3;
    5. CREIAMO UN NUOVO ARRAY CONTENENTE SOLO VALORI DISPARI;
*/

#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){
    int* _vettore=(int*)malloc(_n*sizeof(int));
    if(_vettore==NULL){
        printf("Errore di allocazione!\n");
        return NULL;
    }
    return _vettore;
}

int* inserisciValori(int *_vettore, int _n){
    for(int i=0; i<n; i++){
        printf("Inserisci il valore %d: ", i+1);
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){
    printf("Hai inserito i seguenti elementi: : ");
    for(int i=0; i<n; i++){
        printf("%d ", _vettore[i]);
    }
    printf("\n");
}

int calcolaSomma(int *_vettore, int _n){
    int somma=0;

    for(int i=0; i<_n; i++){
        if(_vettore[i]%3==0){
            somma+=_vettore[i];
        }
    }
    return somma;
}

int *estraiDispari(int *_vettore, int _n, int *_dimDispari){
    int *_dispari=NULL;
    *_dimDispari=0; 

        for(int i=0; i<_n; i++){
            if(_vettore[i]%2!=0){
                (*_dimDispari)++;
                int *tmp=realloc(_dispari, (*_dimDispari)*sizeof(int));
                if()
            }
        }
    
}

int main() {

    int *vettore=NULL; //puntatore al vettore
    int n=0;

    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }
    vettore=creaVett(n);
    vettore=inserisciValori(vettore, n);
    stampaVett(vettore, n);
    printf("la somma degli elementi divisibili per 3 vale: %d\n ", calcolaSomma(vettore, n));

    //creiamo l'array contenente i valori dispari tramite la realloc

    dispari=estraiDispari(vettore, n, &dimDispari);

    return 0;
}