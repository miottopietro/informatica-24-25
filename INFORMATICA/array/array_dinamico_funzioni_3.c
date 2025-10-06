#include <stdio.h>
#include <stdlib.h>

int* creaVett(int dim) {
    int* vettore = (int*)malloc(dim * sizeof(int));
    if (vettore == NULL) {
        printf("Errore di allocazione!\n");
        exit(1);
    }
    return vettore;
}

void inserisciValori(int* vettore, int start, int end) {
    for (int i = start; i < end; i++) {
        printf("Inserisci il valore %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }
}

void stampaVett(int* vettore, int dim) {
    printf("Hai inserito i seguenti elementi: ");
    for (int i = 0; i < dim; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

int* aumentaDim(int* vettore, int* dim) {
    int nuovaDim;
    printf("Inserisci la nuova dimensione: ");
    scanf("%d", &nuovaDim);

    if (nuovaDim <= *dim) {
        printf("La nuova dimensione deve essere maggiore di quella attuale.\n");
        return vettore;
    }

    int* nuovoVettore = (int*)realloc(vettore, nuovaDim * sizeof(int));
    if (nuovoVettore == NULL) {
        printf("Errore di riallocazione!\n");
        exit(1);
    }

    inserisciValori(nuovoVettore, *dim, nuovaDim);
    *dim = nuovaDim;
    return nuovoVettore;
}

int main() {
    int* vettore = NULL;
    int dim = 0;
    int scelta = 0;

    do {
        printf("Quanti elementi vuoi inserire? ");
        scanf("%d", &dim);
    } while (dim <= 0);

    vettore = creaVett(dim);
    inserisciValori(vettore, 0, dim);
    stampaVett(vettore, dim);

    printf("Vuoi aumentare la dimensione dell'array? (1 = si, 0 = no): ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        vettore = aumentaDim(vettore, &dim);
        stampaVett(vettore, dim);
    } else {
        printf("Uscita.\n");
    }

    free(vettore);
    return 0;
}
