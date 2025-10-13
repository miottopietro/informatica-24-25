/*==============================================================
=    APPUNTI COMMENTATI LABORATORIO DI INFORMATICA (C)         =
=    File: Appunti_commentati.c                                =
=    Contiene tutti gli esercizi forniti, ciascuno in una     =
=    sezione separata (#if 0 / #endif) per evitare conflitti  =
=    di multipli main durante la compilazione.                 =
=    Ogni riga riporta un commento esplicativo in italiano.    =
==============================================================*/

/* Nota:
   - Per compilare uno specifico esercizio: togliere il #if 0 / #endif
     attorno alla sezione che ti interessa (o cambiare in #if 1).
   - Questo mantiene TUTTI gli esempi nel singolo file come richiesto.
*/

/* ======================================================================
   ESERCIZIO: Memorizzazione del numero di capelli dei clienti
   ====================================================================== */
#if 0
#include <stdio.h>   // libreria per input/output (printf, scanf)
#include <stdlib.h>  // libreria per funzioni di allocazione dinamica (malloc, free)

int main(){                                      // funzione principale del programma
    int *capelli;                                // puntatore che conterrà l'array dinamico dei capelli
    int n;                                       // variabile per il numero di clienti

    printf("quanti clienti ci sono oggi?");      // messaggio per chiedere il numero di clienti
    scanf("%d", &n);                             // legge il numero di clienti nella variabile n

    capelli = (int*)malloc(n * sizeof(int));    // alloca dinamicamente spazio per n interi
    if(capelli == NULL){                         // controllo dell'allocazione
        printf("troppi clienti!");               // messaggio di errore in caso di fallimento
        return 1;                                // esci con codice di errore
    }

    free(capelli);                               // libera la memoria allocata dinamicamente
    return 0;                                     // termina il programma con successo
}
#endif

/* ======================================================================
   ESERCIZIO: Array e Matrici (inserimento e stampa)
   ====================================================================== */
#if 0
#include <stdio.h>           // input/output
#define DIM 5               // definizione costante dimensione array

int main(){                                   // main
    int array[]={1,2,3,4,5};                   // inizializzazione statica di un array di DIM elementi
    int mat[3][4] = {                          // inizializzazione statica di una matrice 3x4
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for(int i = 0; i < DIM; i++){              // ciclo per leggere valori dall'utente e sovrascrivere array
        printf("inserisci valore: ");          // richiede il valore
        scanf("%d", &array[i]);                // legge il valore nell'elemento i-esimo
    }
    for(int i = 0; i < DIM; i++){              // ciclo per stampare gli elementi dell'array
        printf("%d", array[i]);                // stampa l'elemento i-esimo
    }
    for(int i = 0; i < 3; i++){                // ciclo esterno per le righe della matrice
        for(int j = 0; j < 4; j++){            // ciclo interno per le colonne della matrice
            printf("%d\t", mat[i][j]);         // stampa l'elemento [i][j] con tabulazione
        }
        printf("\n");                          // va a capo dopo ogni riga
    }
    return 0;                                  // fine programma
}
#endif

/* ======================================================================
   ESERCIZIO: Memorizzazione dei voti di uno studente (malloc + realloc)
   ====================================================================== */
#if 0
#include <stdio.h>    // input/output
#include <stdlib.h>   // malloc, realloc, free

int main(){
    float *voti = NULL;    // puntatore iniziale ai voti (NULL)
    int num = 0;           // numero di voti inseriti

    printf("quanti voti vuoi aggiungere?");   // chiede quanti voti iniziali inserire
    scanf("%d", &num);                       // legge il numero

    voti = (float*) malloc(num * sizeof(float)); // alloca spazio per num float
    if(voti == NULL){                         // controllo dell'allocazione
        printf("errore di allocazione memoria!!!!!!! :((()"); // messaggio di errore
        return 1;                             // esce con errore
    }
    for(int i = 0; i < num; i++){             // ciclo di inserimento voti
        printf("Inserisci il voto %d", i+1);  // chiede il voto i+1
        scanf("%f", &voti[i]);                // legge il voto nella posizione i
    }
    voti = (float*)realloc(voti, (num+1)*sizeof(float)); // rialloca per aggiungere uno spazio in più
    if(voti == NULL){                         // controllo successivo allrealloc
        printf("errore di allocazione memoria!!!!!!! :((()"); // messaggio di errore
        return 1;                             // esci con errore
    }
    num++;                                    // incremento del conteggio dei voti
    printf("Inserisci il voto %d", num);      // richiede il voto aggiuntivo
    scanf("%f", &voti[num-1]);                // legge il voto nell'ultima posizione

    free(voti);                               // libera la memoria
    voti = NULL;                              // azzera il puntatore (buona pratica)
    return 0;                                 // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Matrice dinamica di voti per studenti (righe variabili)
   ====================================================================== */
#if 0
#include <stdio.h>   // stdio
#include <stdlib.h>  // malloc, free

int main(){
    float **mat = NULL;          // puntatore a puntatori: matrice dinamica
    int numero_voti = 0;         // variabile temporanea per numero voti di uno studente
    int righe_studenti = 0;      // numero totale di studenti

    printf("quanti studenti devi valutare?"); // chiede il numero di studenti
    scanf("%d", &righe_studenti);            // legge righe_studenti

    mat = (float**)malloc(righe_studenti * sizeof(float*)); // alloca l'array di puntatori alle righe
    if(mat == NULL){                           // controllo allocazione
        printf("Errore allocazione righe\n");  // messaggio di errore
        return 1;                              // esce
    }

    for(int i = 0; i < righe_studenti; i++){   // per ogni studente
        printf("quanti voti ha lo studente? "); // chiede quanti voti ha lo studente i
        scanf("%d", &numero_voti);              // legge il numero di voti
        mat[i] = (float*)malloc(numero_voti * sizeof(float)); // alloca la riga con numero_voti colonne
        if(mat[i] == NULL){                     // controllo allocazione riga
            printf("Errore allocazione singola riga\n"); // messaggio di errore
            // libera le righe già allocate prima di uscire
            for(int k = 0; k < i; k++) free(mat[k]);
            free(mat);
            return 1;
        }
        for(int j = 0; j < numero_voti; j++){   // inserisce i voti per lo studente i
            printf("inserisci il voto dello studente: ");
            scanf("%f", &mat[i][j]);            // legge il voto nella colonna j
            printf("%f", mat[i][j]);            // stampa il voto appena inserito
        }
    }

    // esempio: aggiungere una nuova riga con realloc (come nel file originale)
    mat = (float**)realloc(mat, (righe_studenti + 1) * sizeof(float*)); // aumenta di una unità il numero di righe
    if(mat == NULL){                              // controllo realloc
        printf("Errore realloc mat\n");
        return 1;
    }
    mat[righe_studenti] = malloc(5 * sizeof(float)); // esempio: alloca 5 float per la nuova riga

    // libera la memoria: NOTA: l'ultima riga (righe_studenti) è stata allocata sopra
    for(int i = 0; i <= righe_studenti; i++){      // cicla tutte le righe allocate
        free(mat[i]);                              // libera la memoria di ciascuna riga
    }
    free(mat);                                     // libera l'array di puntatori
    return 0;                                      // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Stringhe - conta occorrenze di un carattere in una stringa
   ====================================================================== */
#if 0
#include <stdio.h>   // stdio per printf/scanf

int main(){
    char s[20];            // buffer statico per la stringa (max 19 caratteri + terminatore)
    int cnt = 0;           // contatore delle occorrenze
    int i = 0;             // indice per scorrere la stringa
    char car;              // carattere da cercare

    printf("inserire la stringa");               // chiede la stringa
    scanf("%19['^\\n']s", s);                    // legge una stringa fino a newline (protezione overflow)

    printf("quale carattere si desidera cercare?"); // chiede il carattere da cercare
    // Nota: dopo scanf precedente, il buffer può contenere il newline; usare getchar o consumare spazio
    scanf(" %c", &car);                          // legge un singolo carattere (preceduto da spazio per saltare ws)

    while(s[i] != '\\0'){                        // cicla fino al terminatore di stringa
        if(car == s[i]){                         // se il carattere corrente è quello cercato
            cnt++;                               // incrementa il contatore
        }
        i++;                                     // passa al carattere successivo
    }
    printf("il carattere %c compare %d volte.", car, cnt); // stampa il risultato

    return 0;                                    // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Crea stringa con prime N lettere dell'alfabeto
   ====================================================================== */
#if 0
#include <stdio.h>   // stdio
#include <stdlib.h>  // malloc, free

int main(){
    int N;                 // numero di lettere da generare
    char lettera = 'a';    // prima lettera dell'alfabeto
    char *str = NULL;      // puntatore alla stringa dinamica

    do{
        printf("inserisci un numero: ");        // chiede N
        scanf("%d", &N);                        // legge N
    } while(N <= 0 || N > 26);                  // valida che 1 <= N <= 26

    str = (char*)malloc((N + 1) * sizeof(char)); // alloca N+1 char (incluso terminatore)
    if(str == NULL){                            // controllo allocazione
        printf("Errore allocazione stringa\n");
        return 1;
    }
    for(int i = 0; i < N; i++){                  // riempi la stringa con le lettere incrementali
        str[i] = lettera++;                      // assegna lettera e incrementa
    }
    str[N] = '\\0';                              // terminatore di stringa
    printf("%s", str);                           // stampa la stringa generata

    free(str);                                   // libera la memoria
    return 0;                                    // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Messaggio di lunghezza variabile (lettura carattere per carattere)
   ====================================================================== */
#if 0
#include <stdio.h>   // stdio
#include <stdlib.h>  // realloc, free

typedef char* String; // alias per puntatore a char

int main(){
    String frase = NULL;    // puntatore alla stringa dinamica
    int cnt = 0;            // lunghezza attuale (numero di caratteri inseriti)
    int capacita = 0;       // spazio attualmente allocato
    char c;                 // carattere letto

    c = getchar();          // legge il primo carattere da stdin
    while(c != '\\n'){      // continua finché non trova newline
        if(cnt + 1 > capacita){                    // se serve più spazio
            capacita += 10;                        // aumenta la capacità a blocchi di 10
            frase = (String) realloc(frase, capacita * sizeof(char)); // rialloca lo spazio
            if(frase == NULL){                     // controllo realloc
                printf("Ahia ahia :(");            // messaggio di errore
                return 1;                          // esce con errore
            }
        }
        frase[cnt] = c;     // memorizza il carattere nella posizione cnt
        cnt++;              // incrementa il contatore
        c = getchar();      // legge il carattere successivo
    }
    frase[cnt] = '\\0';     // aggiunge il terminatore di stringa
    printf("%s", frase);    // stampa la frase
    free(frase);            // libera la memoria
    return 0;               // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Libreria libstring (funzioni: crea stringa, calcola lunghezza)
   ====================================================================== */
#if 0
/* In origine c'era un file header "libstring.h" e implementazioni.
   Qui riportiamo due funzioni viste nel file: crea_stringa_dimensionata
   e calcola_lunghezza_stringa. */

#include <stdio.h>
#include <stdlib.h>

typedef char* stringa;                     // alias per puntatore a char

stringa crea_stringa_dimensionata(int n){  // crea una stringa con lunghezza massima n
    stringa c = (stringa)malloc(n * sizeof(char)); // alloca n char
    if(c == NULL){                          // controllo allocazione
        printf("Errore");                   // stampa errore
        exit(1);                            // esce con errore
    }
    fgets(c, n, stdin);                     // legge una riga da stdin con massimo n caratteri
    return c;                               // restituisce il puntatore
}

int calcola_lunghezza_stringa(stringa c){  // calcola lunghezza fino a '\0'
    int dim = 0;                           // contatore
    while(c[dim] != '\\0'){                // scorre fino al terminatore
        dim++;                             // incrementa il contatore
    }
    return dim;                            // ritorna la lunghezza
}
#endif

/* ======================================================================
   ESERCIZIO: Lettura dinamica di stringa - esempio (realloc per ogni char)
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>

typedef char* String;   // alias

int main() {
    String str = NULL;  // puntatore alla stringa dinamica
    int size = 0;       // lunghezza corrente (numero caratteri)
    char c;

    printf("Inserisci una stringa (termina con invio):\n"); // istruzione utente

    while ((c = getchar()) != '\\n' && c != EOF) {  // leggi carattere per carattere
        // aumento di 1 il buffer per il nuovo carattere
        str = realloc(str, (size + 2) * sizeof(char)); // rialloca spazio per size+1 char + terminatore
        if (str == NULL) {                       // controllo realloc
            printf("Errore di allocazione\n");   // messaggio di errore
            return 1;                            // esce con errore
        }

        str[size] = c;      // aggiunge il carattere in coda
        size++;             // aggiorna la lunghezza
        str[size] = '\\0';  // aggiorna il terminatore per sicurezza
    }

    printf("Hai inserito: %s\n", str); // stampa la stringa inserita

    free(str);                          // libera la memoria
    return 0;                           // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Variante efficiente lettura stringa con capacity a blocchi (typedef)
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>

typedef char* String; // alias per puntatore a char

int main(){
    String str = NULL;    // puntatore stringa dinamica
    int size = 0;         // lunghezza reale
    int capacity = 0;     // spazio allocato
    char c;

    printf("Inserisci una stringa (termina con invio):\n"); // istruzione utente

    while((c = getchar()) != '\\n' && c != EOF){  // legge finché non newline o EOF
        if((size + 1) >= capacity){                // se non c'è posto
            capacity += 10;                        // aumenta la capacità di 10
            String tmp = realloc(str, capacity * sizeof(char)); // rialloca un blocco più grande
            if(tmp == NULL){                       // controllo realloc
                free(str);                         // libera eventuale memoria
                printf("Errore di allocazione");   // messaggio errore
                return 1;                          // esce con errore
            }
            str = tmp;                             // aggiorna il puntatore
        }
        str[size] = c;      // scrive il carattere
        size++;             // incrementa la lunghezza
    }
    str[size] = '\\0';      // terminatore di stringa
    printf("Hai inserito: %s\n", str); // stampa la stringa
    free(str);               // libera la memoria
    return 0;                // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Scambio diagonali (matrice NxN)
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

void caricaMat(int (*_mat)[N]){             // funzione per riempire la matrice con valori casuali
    printf("Carichiamo la matrice: \n");    // messaggio
    for(int i = 0; i < N; i++)              // scorre le righe
        for(int j = 0; j < N; j++)          // scorre le colonne
            _mat[i][j] = rand() % 30 + 1;  // assegna un valore casuale tra 1 e 30
}

void stampaMat(int (*_mat)[N]){             // funzione per stampare la matrice
    for(int i = 0; i < N; i++){             // per ogni riga
        for(int j = 0; j < N; j++)          // per ogni colonna
            printf("%d\t", _mat[i][j]);     // stampa elemento con tab
        printf("\n");                       // newline dopo ogni riga
    }
    printf("\n");                           // riga vuota finale
}

void scambioDiag(int (*_mat)[N]){           // funzione che scambia diagonale principale e secondaria
    int tmp;                                // variabile temporanea per lo scambio
    for(int i = 0; i < N; i++){             // per ogni indice i sulla diagonale
        tmp = _mat[i][i];                   // salva l'elemento della diagonale principale
        _mat[i][i] = _mat[i][N - i - 1];   // assegna elemento della diagonale secondaria
        _mat[i][N - i - 1] = tmp;           // ripristina il valore salvato nella posizione opposta
    }
}

int main(){
    int matrice[N][N] = {0};                // dichiara e inizializza a zero la matrice
    srand(time(NULL));                      // inizializza il generatore di numeri casuali

    caricaMat(matrice);                     // riempie la matrice con valori casuali
    stampaMat(matrice);                     // stampa la matrice originale
    scambioDiag(matrice);                   // esegue lo scambio diagonale
    stampaMat(matrice);                     // stampa la matrice modificata
    return 0;                               // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Gestione array dinamico con menu (aggiungi, visualizza, cerca, ordina, elimina)
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeri = NULL;   // array dinamico di interi (inizialmente NULL)
    int dimensione = 0;   // numero di elementi attuali
    int scelta, n, i, j, trovato; // variabili di lavoro

    do {
        printf("\n--- MENU ---\n");               // stampa menu
        printf("1. Aggiungi numero\n");          // opzione 1
        printf("2. Visualizza numeri\n");        // opzione 2
        printf("3. Cerca numero\n");            // opzione 3
        printf("4. Ordina numeri (crescente)\n");// opzione 4
        printf("5. Elimina numero\n");          // opzione 5
        printf("6. Esci\n");                    // opzione 6
        printf("Scelta: ");                     // chiede scelta
        scanf("%d", &scelta);                   // legge la scelta

        if (scelta == 1) {                      // se scelta è aggiungi
            printf("Inserisci un numero: ");    // chiede numero
            scanf("%d", &n);                    // legge numero
            numeri = (int *)realloc(numeri, (dimensione + 1) * sizeof(int)); // rialloca per un elemento in più
            if (numeri == NULL) {              // controllo realloc
                printf("Errore di allocazione!\n"); // messaggio di errore
                return 1;                      // esci con errore
            }
            numeri[dimensione] = n;            // inserisce il nuovo numero alla fine
            dimensione++;                      // incrementa il conteggio
            printf("Numero aggiunto!\n");       // conferma
        } else if (scelta == 2) {               // visualizza
            printf("Numeri attuali:\n");        // messaggio
            for (i = 0; i < dimensione; i++)   // stampa tutti gli elementi
                printf("%d ", numeri[i]);      // stampa elemento i
            if (dimensione == 0) printf("(nessun numero)"); // se vuoto segnala
            printf("\n");                      // newline
        } else if (scelta == 3) {               // cerca
            printf("Numero da cercare: ");     // chiede il numero da cercare
            scanf("%d", &n);                   // legge il numero
            trovato = 0;                       // flag iniziale
            for (i = 0; i < dimensione; i++) { // scorre l'array
                if (numeri[i] == n) {          // se trova il numero
                    printf("Trovato all'indice %d\n", i); // stampa indice
                    trovato = 1;               // setta trovato
                    break;                     // esce dal ciclo
                }
            }
            if (!trovato) printf("Numero non trovato.\n"); // se non trovato
        } else if (scelta == 4) {               // ordina (bubble sort)
            for (i = 0; i < dimensione - 1; i++) {
                for (j = 0; j < dimensione - i - 1; j++) {
                    if (numeri[j] > numeri[j+1]) { // confronto
                        int tmp = numeri[j];      // swap elementi
                        numeri[j] = numeri[j+1];
                        numeri[j+1] = tmp;
                    }
                }
            }
            // Visualizza
            printf("Numeri ordinati:\n");       // stampa header
            for (i = 0; i < dimensione; i++){   // stampa gli elementi ordinati
                printf("%d ", numeri[i]);       // stampa elemento i
            }
            printf("\n");                       // newline
        } else if (scelta == 5) {               // elimina
            printf("Numero da eliminare: ");    // chiede numero da eliminare
            scanf("%d", &n);                    // legge il numero
            trovato = -1;                       // indice trovato inizialmente -1
            for (i = 0; i < dimensione; i++) {  // ricerca elemento
                if (numeri[i] == n) {           // se è quello da eliminare
                    trovato = i;                // salva indice
                    break;                      // esci dal ciclo
                }
            }
            if (trovato != -1) {                // se trovato
                for (i = trovato; i < dimensione - 1; i++) // shift a sinistra
                    numeri[i] = numeri[i+1];   // sposta elemento successivo
                dimensione--;                  // decrementa dimensione
                numeri = realloc(numeri, dimensione * sizeof(int)); // riduce la memoria
                printf("Numero eliminato.\n"); // conferma
            } else {
                printf("Numero non trovato.\n"); // non trovato
            }
        }
    } while (scelta != 6);                     // ripete finché non si sceglie Esci

    free(numeri);                              // libera l'array dinamico
    printf("Programma terminato.\n");          // messaggio finale
    return 0;                                  // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Matrice a spirale (riempi e stampa)
   ====================================================================== */
#if 0
#include <stdio.h>
#define N 4

void riempiMat(int _mat[][N]){                 // riempie la matrice NxN a spirale
    int num = 1, i;
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;

    while(num <= N * N){                       // finché non ho riempito tutti i numeri
        for(i = left; i <= right; i++)         // sinistra -> destra sulla riga top
            _mat[top][i] = num++;
        top++;                                 // restringe il bordo superiore
        for(i = top; i <= bottom; i++)         // alto -> basso sulla colonna right
            _mat[i][right] = num++;
        right--;                               // restringe il bordo destro
        for(i = right; i >= left; i--)         // destra -> sinistra sulla riga bottom
            _mat[bottom][i] = num++;
        bottom--;                              // restringe il bordo inferiore
        for(i = bottom; i >= top; i--)         // basso -> alto sulla colonna left
            _mat[i][left] = num++;
        left++;                                // restringe il bordo sinistro
    }
}

void stampaMat(int _mat[][N]){                 // stampa la matrice
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%d\t", _mat[i][j]);        // stampa elemento con tab
        printf("\n");                          // newline dopo ogni riga
    }
}

int main(){
    int mat[N][N];                             // matrice dichiarata
    riempiMat(mat);                            // riempi a spirale
    printf("La matrice a spirale è:\n");       // header stampa
    stampaMat(mat);                            // stampa matrice
    return 0;                                  // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Crea array, calcola somma multipli di 3 e crea array di dispari
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){                         // funzione per allocare un vettore di _n interi
    int *_vettore = (int*)malloc(_n * sizeof(int)); // alloca memoria per _n interi
    if(_vettore == NULL){                       // controllo allocazione
        printf("Errore di allocazione!\n");     // messaggio di errore
        return NULL;                            // ritorna NULL in caso di fallimento
    }
    return _vettore;                            // ritorna il puntatore
}

int* inserisciValori(int *_vettore, int _n){   // funzione per leggere valori dall'utente
    for(int i = 0; i < _n; i++){                // per ogni elemento
        printf("Inserisci l'elemento: ");      // chiede l'elemento
        scanf("%d", &_vettore[i]);             // legge e salva nell'array
    }
    return _vettore;                            // ritorna il puntatore (utile per chaining)
}

void stampaVett(int *_vettore, int _n){         // funzione per stampare vettore
    printf("Hai inserito i seguenti elementi: ");
    for(int i = 0; i < _n; i++){                // scorre gli elementi
        printf("%d\t", _vettore[i] );           // stampa elemento con tab
    }
    printf("\n");                               // newline finale
}

int calcolaSomma(int *_vettore, int _n){       // calcola somma degli elementi divisibili per 3
    int somma = 0;                             // inizializza somma
    for(int i = 0; i < _n; i++){               // scorre gli elementi
        if(_vettore[i] % 3 == 0)               // se elemento multiplo di 3
            somma += _vettore[i];              // aggiunge alla somma
    }
    return somma;                              // ritorna la somma
}

int *estraiDispari(int *_vettore, int _n, int *_dimDispari){ // estrae i numeri dispari in un nuovo array dinamico
    int *_dispari = NULL;                      // puntatore per l'array dei dispari
    *_dimDispari = 0;                          // inizializza dimensione dispari a 0

    for(int i = 0; i < _n; i++){               // scorre gli elementi originali
        if(_vettore[i] % 2 != 0){              // se elemento dispari
            (*_dimDispari)++;                  // incrementa contatore dispari
            int *tmp = realloc(_dispari, (*_dimDispari) * sizeof(int)); // rialloca spazio per inserire nuovo dispari
            if(tmp == NULL){                   // controllo realloc
                printf("Errore di allocazione!\n"); // errore
                free(_dispari);                // libera memoria parziale
                return NULL;                    // ritorna NULL
            }
            _dispari = tmp;                    // aggiorna puntatore
            _dispari[(*_dimDispari) - 1] = _vettore[i]; // inserisce il nuovo dispari
        }
    }
    return _dispari;                           // ritorna l'array dei dispari
}

int main(){
    int *vettore = NULL; // puntatore al vettore principale
    int *dispari;        // puntatore all'array dei dispari
    int dimDispari;      // dimensione dell'array dei dispari
    int n;               // numero elementi

    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);   // legge la dimensione richiesta
    } while(n < 0);        // richiede valore non negativo

    vettore = creaVett(n);               // crea vettore
    vettore = inserisciValori(vettore, n); // inserisce valori
    stampaVett(vettore, n);              // stampa vettore
    printf("La somma degli elementi divisibili per 3 vale: %d\n ", calcolaSomma(vettore, n)); // stampa somma

    // crea l'array contenente solo i valori dispari
    dispari = estraiDispari(vettore, n, &dimDispari);
    printf("L'array contenente gli elementi dispari risulta: ");
    stampaVett(dispari, dimDispari);     // stampa array dei dispari

    free(vettore);                       // libera vettore originale
    free(dispari);                       // libera array dei dispari
    return 0;                             // fine
}
#endif

/* ======================================================================
   ESERCIZIO: Aumentare dimensione array con funzione aumentaDim (esempio)
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){                      // funzione crea vettore
    int *_vettore = (int*)malloc(_n * sizeof(int)); // alloca
    if(_vettore == NULL){
        printf("Errore di allocazione!\n");
        return NULL;
    }
    return _vettore;
}

int* inserisciValori(int *_vettore, int _n){ // legge valori
    for(int i = 0; i < _n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){       // stampa vettore
    printf("Hai inserito i seguenti elementi: ");
    for(int i = 0; i < _n; i++){
        printf("%d\t", _vettore[i] );
    }
    printf("\n");
}

int* aumentaDim(int _n, int *_vettore){       // funzione per aumentare la dimensione dell'array
    int nuovaDim = 0;                         // nuova dimensione desiderata
    int *_aumenta = NULL;                     // puntatore temporaneo

    do{
        printf("inserisci una nuova dimensione: ");
        scanf("%d", &nuovaDim);               // legge nuova dimensione
        _aumenta = (int*)realloc(_vettore, nuovaDim * sizeof(int)); // rialloca memoria
        for(int i = _n; i < nuovaDim; i++){   // per i nuovi slot
            printf("inserisci nuovi valori: ");
            scanf("%d", &_aumenta[i]);        // legge nuovi valori
        }
    } while(nuovaDim != _n);                  // attenzione: il do/while come nel file originale sembra avere logica difettosa

    return _aumenta;                          // ritorna puntatore riallocato
}

int main(){
    int *vettore = NULL; // puntatore al vettore
    int n;
    int scelta = 0;
    do{
        printf("inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    } while(n < 0);

    vettore = creaVett(n);                    // crea vettore
    vettore = inserisciValori(vettore, n);    // inserisce valori
    stampaVett(vettore, n);                   // stampa

    printf("vuoi aumentare la dimensione? se vuoi aumentarla insierisci 1 altrimenti 0");
    scanf("%d", &scelta);                     // legge scelta

    if(scelta == 1){
        vettore = aumentaDim(n, vettore);     // aumenta dimensione (nota: funzione sopra ha logica particolare)
    }
    stampaVett(vettore, n);                   // stampa (attenzione: n non aggiornato dopo aumentaDim)
    free(vettore);                            // libera memoria
    return 0;
}
#endif

/* ======================================================================
   ESERCIZIO: Metodo efficiente per stringhe (typedef + capacity)
   ====================================================================== */
#if 0
#include <stdio.h>
#include <stdlib.h>

typedef char* String;                         // alias per puntatore a char

int main(){
    String str = NULL;                        // puntatore stringa
    int size = 0;                             // lunghezza reale
    int capacity = 0;                         // spazio allocato
    char c;

    printf("Iserisci una stringa (termina con invio):\n"); // messaggio

    while((c = getchar()) != '\\n' && c != EOF){ // leggi carattere per carattere
        if((size + 1) >= capacity){            // se non c'è spazio sufficiente
            capacity += 10;                    // incremento capacity
            String tmp = realloc(str, capacity * sizeof(char)); // rialloca
            if (tmp == NULL){                  // controllo
                free(str);                     // libera memoria
                printf("Errore di allocazione"); // errore
                return 1;                      // esce con errore
            }
            str = tmp;                         // aggiorna puntatore
        }
        str[size+1] = c;                       // ATTENZIONE: nel file originale c'era un errore di indice -> corretto normalmente sarebbe str[size] = c;
    }
    str[size] = '\\0';                         // terminatore (nota: nel codice originale alcuni indici sembrano spostati)
    printf("Hai inserito: %s\n", str);         // stampa
    free(str);                                 // libera
    return 0;                                  // fine
}
#endif

/* ======================================================================
   FINE DEL FILE - ulteriori sezioni presenti nel documento originario
   possono essere aggiunte su richiesta seguendo lo stesso schema
   (#if 0 / sezione codice / #endif) per mantenere il file compilabile.
   ====================================================================== */
