/*CREARE UN ARRAY DINAMICO CHIEDENDO ALL'UTENTE LA SUA DIMENSIONE
IL PROGRAMMA DEVE PREVEDERE LE SEGUENTI FUNZIONI:
1. CREA L'ARRAY
2. INSERISCI GLI ELEMENTI NELL' ARRAY
3. STAMPA DEI VALORI
4. ESCI
*/

#include <stdio.h>
#include <stdlib.h>

int* creaVettore(int _dim){
    int *_vettore=NULL;

    _vettore=(int*)malloc(_dim *sizeof(int));
    if(_vettore==NULL){
        printf("errore nell'allocazione");
        return 1;
    }
    return _vettore;
}

int* inserisciValori(int *_vettore, int _dim){
    for(int i=0; i<_dim; i++){
        printf("inserisic il valore: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVettore(int *_vettore, int _dim){
    printf("hai inserito i seguenti valori: ");
    for(int i=0; i<_dim; i++){
        printf("%d ", _vettore[i]);
    }
}

int main(){

    int *vettore=NULL; //puntatore al vettore 
    int dim=0;

    do{
        printf("inserisci la dimensione dell'array:");
        scanf("%d", &dim);
    }while(dim<0);

    vettore=creaVettore(dim);

    vettore=inserisciValori(vettore, dim);

    stampaVettore(vettore, dim);

    free(vettore);
    
    return 0;
}