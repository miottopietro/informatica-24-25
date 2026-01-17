/*## Esercizio 1.
Si crei la struttura libro, in cui ogni libro ha un codice numerico (numero intero) 
che lo caratterizza, un numero di pagine e un costo.
Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina dei libri 
e si stampino i dati dei tre libri in ordine crescente di costo per pagina.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../2_stringhe/libstring.c"

typedef struct{
    int pagine;
    int id;
    float costo;
    char titolo[30];
}libro;

void inserisci_libro(libro *l){
    printf("Dimmi il titolo del libro.");
    
    fgets(l -> titolo,30,stdin);
    printf("Dimmi il costo del libro.");
    scanf("%f", &(l -> costo));
    clear_buffer();
    printf("Dimmi il codice del libro.");
    scanf("%d", &(l -> id));
    clear_buffer();
    printf("Dimmi il numero di pagine del libro.");
    scanf("%d", &(l -> pagine));
    clear_buffer();

}

void stampa_libro(libro l){
    printf("Titolo: %s\nCodice: %d\nNumero Pagine: %d\nCosto%.2f euro\n", l.titolo, l.id, l.pagine, l.costo);
}

int main(){
    libro *libri;
    libri = (libro*)malloc(3*sizeof(libro));
    for (int i = 0; i < 3; i++)
    {
        printf("=== Inserimento dati libro %d ===\n",i+1);
        inserisci_libro(&libri[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n=== Stampa libro %d ===\n",i+1);
        stampa_libro(libri[i]);
    }
    
    

}







#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Auto {
    char targa[9];
    char marca[20];
    char modello[20];
    float prezzo_giorno;
    struct Auto* next;
} Auto;

Auto* inserisciAuto(Auto* parco, int* n) {
    parco = (Auto*)realloc(parco, (*n + 1) * sizeof(Auto));
    char c;
    if(parco == NULL) {
        printf("Errore di allocazione");
        exit(1);
    }
    Auto nuova_auto;
    printf(" === Inserimento nuova auto ===\n");
    printf("Inserisci targa: ");
    fgets(nuova_auto.targa, 9, stdin);
    printf("Inserisci marca: ");
    fgets(nuova_auto.marca, 20, stdin);
    printf("Inserisci modello: ");
    fgets(nuova_auto.modello, 20, stdin);
    printf("Inserisci prezzo giornaliero: ");
    scanf("%f", &nuova_auto.prezzo_giorno);
    while((c = getchar()) != '\n') {}
    parco[*n] = nuova_auto;
    (*n)++;
    return parco;
}

void stampaAuto(Auto* parco, int n){
    for(int i = 0; i < n; i++) {
        printf("\n=== AUTO %d ===\n", i+1);
        printf("%s %s %s %f€/giorno\n", parco[i].targa, parco[i].marca, parco[i].modello, parco[i].prezzo_giorno);
    }
}

int main(){
    Auto* parco = NULL;
    int n_auto = 0;

    int scelta;
    char c;

    do {
        printf("\n===== AUTONOLEGGIO 2000 =====\n");
        printf("1. Inserisci nuova auto\n");
        printf("2. Visualizza auto\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        while((c = getchar()) != '\n') {}

        switch (scelta) {
            case 1:
                parco = inserisciAuto(parco, &n_auto);\
            case 2:
                stampaAuto(parco, n_auto);
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        } 
    } while (scelta != 0);

    return 0;
}






#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char targa[8];
    char marca[20];
    char modello[20];
    float prezzo;

}Auto;

Auto* inserisci_auto(Auto* parco, int*n){
    Auto nuova_auto;
    printf("inserisci la targa dell'auto: ");
    fgets(nuova_auto.targa,8,stdin);
    printf("inserisci il modello dell'auto: ");
    fgets(nuova_auto.modello,20,stdin);
    printf("inserisci la marca dell' auto: ");
    fgets(nuova_auto.marca,20,stdin);
    printf("inserisci il prezzo dell' auto: ");
    scanf("%f", &nuova_auto.prezzo);
    getchar();
    parco = (Auto*)realloc(parco, ((*n)+1)*sizeof(Auto));
    if(parco == NULL){
        printf("errore di allocazione.");
        exit(1);
    }
    parco[*n] = nuova_auto;
    (*n)++;
    return parco;
}

void stampa_auto(Auto*parco, int n){
    printf("---elenco auto---\n");
    for(int i=0;i<n;i++){
        printf("targa %s", parco[i].targa);
        printf("marca %s", parco[i].marca);
        printf("modello %s", parco[i].modello);
        printf("prezzo %f", parco[i].prezzo);
    }
}

int main(){
    Auto*parco = NULL;
    int numero_auto = 0;
    int scelta;
    do {
        printf("1. aggiungi auto: \n 2. stampa auto: \n 3. Esci\n");
        scanf("%d", &scelta);
        getchar();
        switch(scelta){
            case 1:
                parco = inserisci_auto(parco, &numero_auto);
                break;
            case 2:
                if(numero_auto == 0){
                    printf("non ci sono auto da stampare!  \n");
                } else {
                    stampa_auto(parco, numero_auto);
                }
                break;
            case 3:
                printf("Uscita dal programma...\n\n");
                break;
            default:
                printf("Scelta non valida...\n");
        }
    }while(scelta != 3);

    free(parco);
    
}








#include <stdio.h>
#include <string.h>

typedef struct {
    char cognome[30];
    char *nome;
    int voto;
} alunno;

int main() {
    alunno a1 = {"Lonighi"};
    strcpy(a1.cognome, "Rossi");
    fgets(a1.cognome, 10, stdin);
    a1.nome = (char*)malloc(20 * sizeof(char));
    strcpy(a1.nome, "Mario");
    a1.voto = 28;
    printf("Alunno: %s %s, voto: %d\n", a1.cognome, a1.nome, a1.voto);
    free(a1.nome);
    return 0;
}





#include <stdio.h>
#include <string.h>

typedef struct {
    int x;
    int y;
    char nome[10];
} Punto;

void modificaPunto(Punto *p) {
    p->x = 10;  // Modifica la struct originale tramite puntatore
    p->y = 20;
    strcpy(p->nome, "prova");
    printf("Punto dentro funzione: (%d, %d)\n", p->x, p->y);
    printf("%s\n\n", p->nome);
}

void stampaPunto(Punto p){
    p.x = 100;
    printf("%d", p.x);
}

int main() {
    Punto p1 = {5, 6, ""};
    printf("Punto prima di chiamata funzione: (%d, %d)\n", p1.x, p1.y); 
    printf("%s\n\n", p1.nome);
    modificaPunto(&p1);
    printf("Punto fuori funzione: (%d, %d)\n", p1.x, p1.y); // è cambiato (10,20)
    printf("%s\n\n", p1.nome);
    return 0;
}






#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct {
    char cognome[30];
    char nome[20];
    int voto;
} alunno;

int main() {
    alunno a[MAX];
    int n, i, trovato;
    char cerca[20];

    // inserimento numero di alunni
    do {
        printf("Inserisci il numero di alunni: ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    // inserimento dati alunni
    for (i = 0; i < n; i++) {
        printf("Cognome: ");
        scanf("%s", a[i].cognome);
        printf("Nome: ");
        scanf("%s", a[i].nome);
        printf("Voto: ");
        scanf("%d", &a[i].voto);
    }

    // ricerca alunno
    printf("Inserisci cognome da cercare: ");
    scanf("%s", cerca);
    trovato = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(a[i].cognome, cerca) == 0) {
            printf("Alunno trovato: %s %s, voto %d\n", a[i].nome, a[i].cognome, a[i].voto);
            trovato = 1;
            break;
        }
    }
    if (!trovato) {
        printf("Alunno non trovato.\n");
    }

    return 0;
}







#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;
typedef struct {
    int giorno;
    int mese;
    int anno;
} data;

typedef struct {
    String nome;
    String cognome;
    int classe;
    char sezione;
    float voto;
    data data_voto;
} interrogazione;

int main(){
    interrogazione interroga;
    char c;
    scanf("%d %d %d", &interroga.data_voto.giorno, &interroga.data_voto.mese, &interroga.data_voto.anno);
    while((c = getchar()) != '\n'){}
    interroga.nome = (String) malloc(20 * sizeof(char));
    fgets(interroga.nome, 20, stdin);

    printf("%s, giorno %d/%d/%d\n\n", interroga.nome, interroga.data_voto.giorno, interroga.data_voto.mese, interroga.data_voto.anno);
}






#include <stdlib.h>
#include <stdio.h>

struct Persona {
    char nome[50];
    int eta;
    float stipendio;
};

int main() {
    // Dichiarazione di un puntatore a struct
    struct Persona *p1;
    
    // Allocazione di memoria per una struct
    p1 = (struct Persona*)malloc(sizeof(struct Persona));
    
    // Controllo se l'allocazione ha avuto successo
    if (p1 == NULL) {
        printf("Errore: allocazione memoria fallita\n");
        return 1;
    }
    
    // Assegnamento dei valori
    p1->eta = 30;
    p1->stipendio = 2500.50;
    
    printf("Età: %d, stipendio: %f\n\n", p1->eta, p1->stipendio);
    // Liberazione della memoria quando non più necessaria
    free(p1);
    
    return 0;
}






#include <stdlib.h>
#include <stdio.h>

typedef struct  {
    char nome[50];
    int eta;
    float stipendio;
}Persona;
struct Alunno {
    char nome[30];
    char sezione;
    int classe;
};
int main() {
    struct Alunno a1 = {"Mohamed"};
    printf("%s", a1.nome);
    scanf("%c", &a1.sezione);

    struct Alunno *a2;
    // Dichiarazione di un puntatore a struct
    Persona *p1;
    a2 = (struct Alunno*)malloc(sizeof(struct Alunno));
    // Allocazione di memoria per una struct
    //p1 = (Persona*)malloc(sizeof(Persona)); //alternativa
    p1 = malloc(sizeof(*p1));
    
    // Controllo se l'allocazione ha avuto successo
    if (p1 == NULL) {
        printf("Errore: allocazione memoria fallita\n");
        return 1;
    }
    
    // Assegnamento dei valori
    p1->eta = 30;
    (*p1).eta = 10;
    p1->stipendio = 2500.50;
    
    printf("Età: %d, stipendio: %f\n\n", p1->eta, p1->stipendio);
    // Liberazione della memoria quando non più necessaria
    free(p1);
    
    return 0;
}






/*Si vuole creare un'applicazione in C che possa gestire le partite del
torneo di istituto. Quindi si vuole registrare un elenco dell squadre 
che giocano a pallavolo: l'utente dovrà inserire la classe e la sezione della 
squadra, un nome per la squadra e un elenco di 6 nomi che memorizzi i partecipanti.
Inoltre si vogliono memorizzare i risultati delle partite: ogni risultato prevede 
le due squadre che si sono affrontate, il giorno della partita e il punteggio finale.*/

#include <stdio.h>
#include <string.h>

#define MAX_SQUADRE 10
#define MAX_PARTITE 20

typedef struct{
    int giorno;
    int mese;
    int anno;
} Data;

typedef struct {
    char nome[30];
    int classe;
    char sezione;
    char giocatori[6][30];
} Squadra;

typedef struct {
    Squadra *squadra1;
    Squadra *squadra2;
    int punti1;
    int punti2;
    Data giorno_partita;
} Partita;

// Funzione per inserire una squadra
void inserisciSquadra(Squadra *s) {
    char c;
    printf("Inserisci il nome della tua squadra: ");
    fgets(s->nome, 30, stdin);
    printf("Inserisci la classe della squadra: ");
    scanf("%d", &s->classe);
    while((c = getchar()) != '\n') {}
    printf("Inserisci la sezione della squadra: ");
    scanf("%c", &s->sezione);
    while((c = getchar()) != '\n') {}
    for(int i = 0; i < 6; i++){
        printf("Inserisci il nome del giocatore %d", i+1);
        fgets(s->giocatori[i], 30, stdin);
    }


}

// Funzione per stampare una squadra
void stampaSquadra(Squadra s) {
    printf("nome squadra:%s",s.nome);
    printf("classe:%d%c\n",s.classe,s.sezione);
    for(int i = 0; i<6;i++){
        printf("giocatore %d:%s",i+1,s.giocatori[i]);
    }


}

// Funzione per registrare una partita
void inserisciPartita(Partita *p, Squadra squadre[], int numSquadre) {

    int num;
    char c;

    for(int i=0; i<numSquadre; i++){
        printf("Squadra[%d]", i);
        stampaSquadra(squadre[i]);
    }
        
    printf("Qual è la prima squadra che vuoi inserire?");
    scanf("%d",&num);
    while((c = getchar()) != '\n') {}
    p->squadra1=&squadre[num];

    printf("Qual è la seconda squadra che vuoi inserire?");
    scanf("%d",&num);
    while((c = getchar()) != '\n') {}
    p->squadra2=&squadre[num];

    printf("Inserisci il punteggio della squadra %s", p->squadra1->nome);
    scanf("%d", &p->punti1);
    printf("Inserisci il punteggio della squadra %s", p->squadra2->nome);
    scanf("%d", &p->punti2);

    printf("Inserisci la data della partita: ");
    scanf("%d %d %d", &p->giorno_partita.giorno, &p->giorno_partita.mese, &p->giorno_partita.anno);
}

// Funzione per stampare i risultati
void stampaPartite(const Partita partite[], int numPartite) {
    for(int i=0; i<numPartite; i++ ){
        printf("Nella data %d %d %d  : %s(%d%c) %d - %d %s(%d%c)", partite[i].giorno_partita.giorno, partite[i].giorno_partita.mese, partite[i].giorno_partita.anno, partite[i].squadra1->nome, partite[i].squadra1->classe, partite[i].squadra1->sezione, partite[i].punti1, partite[i].punti2, partite[i].squadra2->nome, partite[i].squadra2->classe, partite[i].squadra2->sezione);
    }
}

int main() {
    Squadra squadre[MAX_SQUADRE];
    Partita partite[MAX_PARTITE];
    int numSquadre = 0, numPartite = 0;
    int scelta;
    char c;

    do {
        printf("\n===== TORNEO DI PALLAVOLO =====\n");
        printf("1. Inserisci nuova squadra\n");
        printf("2. Visualizza squadre\n");
        printf("3. Registra una partita\n");
        printf("4. Visualizza risultati\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        while((c = getchar()) != '\n') {}

        switch (scelta) {
            case 1:
                if (numSquadre < MAX_SQUADRE)
                    inserisciSquadra(&squadre[numSquadre++]);
                else
                    printf("Numero massimo di squadre raggiunto!\n");
                break;
            case 2:
                for (int i = 0; i < numSquadre; i++)
                    stampaSquadra(squadre[i]);
                break;
            case 3:
                if (numSquadre < 2) {
                    printf("Devi inserire almeno due squadre!\n");
                    break;
                }
                if (numPartite < MAX_PARTITE)
                    inserisciPartita(&partite[numPartite++], squadre, numSquadre);
                else
                    printf("Numero massimo di partite raggiunto!\n");
                break;
            case 4:
                stampaPartite(partite, numPartite);
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }
    } while (scelta != 0);

    return 0;
}