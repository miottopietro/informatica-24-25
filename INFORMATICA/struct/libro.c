/* Registare le informazioni di alcuni Libri con titolo, autore, anno e prezzo.
Determinare il Libro più costoso e il più vecchio
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LIBRO{
    char titolo [40];
    char autore [20];
    int anno;
    float prezzo;
};

typedef char* Stringa;
void Compatta(Stringa buffer, int lunghezza){
    if(lunghezza>0 && buffer[lunghezza-1]=='')
}

int main(){
    struct LIBRO *libri;

    int n=3;

    //allochiamo i primi 3 elementi
    libri = (struct LIBRO *) malloc (n * sizeof (struct LIBRO));

    if(libri == NULL){
        printf("Errore di allocazione\n");
        return 1;
    }

    //inserimento dati
    strcpy(libri[0].titolo, "Il codice da Vinci");
    strcpy(libri[0].autore, "Dan Brown");
    libri[0].anno=2003;
    libri[0].prezzo=20.50;

    strcpy(libri[1].titolo, "Angeli e Demoni");
    strcpy(libri[1].autore, "Dan Brown");
    libri[1].anno=2005;
    libri[1].prezzo=21.50;

    strcpy(libri[1].titolo, "La Verità del Ghiaccio");
    strcpy(libri[1].autore, "Dan Brown");
    libri[1].anno=2009;
    libri[1].prezzo=18.00;

    

    n+=1;
    libri (struct *LIBRO) realloc(libri, n*sizeof(struct LIBRO));
if (libri==NULL) {
printf("errore di allocazione");
return 1;
}
strcpy(libri [3].titolo, "Orgoglio e pregiudizi");
strcpy(libri [3].autore, "Jane Austen");
libri [3].anno = 1813;
libri [3].prezzo =9;

//visualizzazione dei dati
printf("===Lista Libri===\n");
for(int i=0; i<3; i++){
    printf("libro %d:\n",i+1);
    printf(" Titolo: %s:\n", libri[i].titolo);
    printf(" Autore: %s:\n", libri[i].autore);
    printf(" Anno: %d:\n", libri[i].anno);
    printf(" prezzo: %2f:\n\n", libri[i].prezzo);
    }

    //calcoliamo il libro più datato
    datato=libri[0].anno;
    i_datato=0;
    for(int i=1; i<n; i++){
        if(libri[i].anno<datato){
            datato=libri[i].anno
            i_datato=i;
        }
    }
    printf("il libro piu datato e: %s\n", libri[i_datato].titolo);

    //calcoliamo il libro più costoso
    costoso=libri[0].prezzo;
    i_costoso=0;
    for(int i=1; i<n; i++){
        if(libri[i].prezzo<costoso){
            costoso=libri[i].prezzo
            i_costoso=i;
        }
    }
    printf("il libro piu costoso e: %s\n", libri[i_costoso].titolo);

    //eliminiamo un libro 
    printf("inserisci il titolo del libro da eliminare: ");
    fgets(libro, 50, stdin);
    lun=strlen(libro);
    compatta(libro, lun);
    for(int i=0; i<n; i++){
        if( !(strcmp(libri[i].titolo, libro))){
            for(int j=i; j<(n-1); i++){
                 
            }
        }
    }

    return 0;
}<