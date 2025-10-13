#include <stdio.h>
#include <stdlib.h>

int* creaArray(int _dim){
    int* _vettore=(int*)malloc(_dim*sizeof(int));

    if(_vettore==NULL){
        printf("errore nell'allocazione.");
        exit(1);
    }
    return _vettore;
}

int* inserisciValori(int *_vettore, int _dim){
    for(int i=0; i<_dim; i++){
        printf("inserisci il valore in posizione %d: ", i+1);
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

int* aumentaDimensione(int *_vettore, int *_dim){
    int nuovaDim=0;

    do{
        printf("inserisci la nuova dimensione: ");
        scanf("%d", &nuovaDim);
    }while(nuovaDim<=*_dim);

    _vettore = (int*)realloc(_vettore, nuovaDim * sizeof(int));

    if(_vettore==NULL){
        printf("errore nell' allocazione.");
        exit(1);
    }

    
    for(int i=*_dim; i<nuovaDim; i++) {
        printf("inserisci il valore in posizione %d: ", i+1);
        scanf("%d", &_vettore[i]);
    }

    *_dim = nuovaDim;
    return _vettore;
}

void stampaVettore(int *_vettore, int _dim){

    printf("hai inserito i seguenti valori: ");

    for(int i=0; i<_dim; i++){
        printf("%d ", _vettore[i]);
    }
    printf("\n");
}

int main(){

    int* vettore=NULL;
    int dim=0;
    int scelta=0;

    do{

        printf("menù:\n");
        printf("1: crea array\n");
        printf("2: inserisci valori\n");
        printf("3: aumenta la dimensione\n");
        printf("4: stampa array\n");
        printf("5: esci dal programma\n");

        printf("scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:

                printf("inserisci la dimensione dell' array: ");
                scanf("%d", &dim);

                vettore=creaArray(dim);

            break;

            case 2:

                if(vettore==NULL){
                    printf("prima devi creare l'array.\n");
                }
                else{
                    vettore=inserisciValori(vettore, dim);
                }

            break;

            case 3:

                if(vettore==NULL){
                    printf("prima devi creare l'array.\n");
                }else{
                    vettore=aumentaDimensione(vettore, &dim);
                }

            break;

            case 4:

                if(vettore==NULL){
                    printf("prima devi creare l'array.\n");
                }
                else{
                    stampaVettore(vettore, dim);
                }

            break;

            case 5:

            printf("sei uscito dal programma.");

            break;

            default:
            printf("le scelte vanno da 1 a 4.\n");

        }

    }while(scelta!=5);

    free(vettore);

    return 0;
}