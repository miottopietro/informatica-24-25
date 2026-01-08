#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ---- Definizione struct necessarie ---- */
typedef struct Canzone {
    int id;
    char titolo[50];
    char artista[50];
    int durata;
    struct Canzone* next;
    struct Canzone* next_playlist;
} Canzone;

typedef struct Lista {
    Canzone* testa;
    int lunghezza;
} Lista;

/* ---- Variabile globale per gestire l'id univoco delle canzoni ---- */
int id_univoco = 0;

/* ---- Funzioni lista di canzoni disponibili ---- */
void stampa_canzone(Canzone *c);
void set_canzone(Canzone *c);
Lista* crea_lista();
void stampa_lista(Lista *l);
void inserisci_canzone_lista(Lista *l);
void ricerca_canzone_artista(Lista *l, char* artista);
void libera_memoria(Lista* l);

/* ---- Funzioni playlist (lista circolare) ---- */
void inserisci_canzone_playlist(Lista *lista_canzoni, Lista *playlist);
void stampa_playlist(Lista* playlist);
void cancella_canzone_playlist(Lista *playlist);

/* ---- MAIN ---- */
int main() {
    Lista* lista_canzoni = crea_lista();
    Lista* playlist = crea_lista();

    int scelta;
    char artista[50];

    do {
        printf("\n===== SPOTIFY 0.0.0.1 =====\n");
        printf("1. Inserisci nuova canzone nella lista\n");
        printf("2. Stampa lista canzoni\n");
        printf("3. Cerca canzoni per artista\n");
        printf("4. Aggiungi canzone alla playlist\n");
        printf("5. Stampa playlist\n");
        printf("6. Cancella canzone dalla playlist\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        getchar();

        switch (scelta) {
            case 1:
                inserisci_canzone_lista(lista_canzoni);
                break;
            case 2:
                stampa_lista(lista_canzoni);
                break;
            case 3:
                printf("Inserisci artista da cercare: ");
                fgets(artista, 50, stdin);
                ricerca_canzone_artista(lista_canzoni, artista);
                break;
            case 4:
                inserisci_canzone_playlist(lista_canzoni, playlist);
                break;
            case 5:
                stampa_playlist(playlist);
                break;
            case 6:
                cancella_canzone_playlist(playlist);
                break;
            case 0:
                printf("Uscita...\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    libera_memoria(lista_canzoni);
    free(playlist);   // CORREZIONE: la playlist non libera le canzoni
    return 0;
}

/* =======================================================================================
   Implementazione funzioni
======================================================================================= */

void stampa_canzone(Canzone *c) {
    printf("ID %d | %s di %s - %d secondi\n",
           c->id, c->titolo, c->artista, c->durata);
}

void set_canzone(Canzone *c) {
    id_univoco++;
    c->id = id_univoco;

    printf("Inserisci titolo: ");
    fgets(c->titolo, 50, stdin);
    c->titolo[strcspn(c->titolo, "\n")] = 0;

    printf("Inserisci artista: ");
    fgets(c->artista, 50, stdin);
    c->artista[strcspn(c->artista, "\n")] = 0;

    printf("Inserisci durata: ");
    scanf("%d", &c->durata);
    getchar();

    c->next = NULL;
    c->next_playlist = NULL;
}

Lista* crea_lista() {
    Lista* l = malloc(sizeof(Lista));
    l->testa = NULL;
    l->lunghezza = 0;
    return l;
}

void stampa_lista(Lista *l) {
    Canzone* temp = l->testa;

    while (temp != NULL) {
        stampa_canzone(temp);
        temp = temp->next;
    }
}

void inserisci_canzone_lista(Lista *l) {
    Canzone* c = malloc(sizeof(Canzone));

    set_canzone(c);
    c->next = l->testa;
    l->testa = c;

    l->lunghezza++;
}

void ricerca_canzone_artista(Lista *l, char* artista) {
    Canzone* temp = l->testa;
    int trovata = 0;

    /* CORREZIONE: rimozione \n */
    artista[strcspn(artista, "\n")] = 0;

    while (temp != NULL) {
        if (strcmp(temp->artista, artista) == 0) {
            stampa_canzone(temp);
            trovata = 1;
        }
        temp = temp->next;
    }

    if (trovata == 0) {
        printf("Nessuna canzone trovata\n");
    }
}

void libera_memoria(Lista* l) {
    Canzone* temp = l->testa;

    while (temp != NULL) {
        Canzone* da_liberare = temp;
        temp = temp->next;
        free(da_liberare);
    }

    free(l);
}

void inserisci_canzone_playlist(Lista *lista, Lista *playlist) {
    int id;
    printf("Inserisci id canzone: ");
    scanf("%d", &id);
    getchar();

    Canzone* temp = lista->testa;
    while (temp != NULL && temp->id != id) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Canzone non trovata\n");
        return;
    }

    if (playlist->testa == NULL) {
        playlist->testa = temp;
        temp->next_playlist = temp;
    } else {
        Canzone* curr = playlist->testa;
        while (curr->next_playlist != playlist->testa) {
            curr = curr->next_playlist;
        }
        curr->next_playlist = temp;
        temp->next_playlist = playlist->testa;
    }

    playlist->lunghezza++;
}

void stampa_playlist(Lista* playlist) {
    if (playlist->testa == NULL) return;

    Canzone* temp = playlist->testa;

    for (int i = 0; i < playlist->lunghezza; i++) {
        stampa_canzone(temp);
        temp = temp->next_playlist;
    }
}

void cancella_canzone_playlist(Lista *playlist) {
    if (playlist->testa == NULL) return;

    int id;
    printf("Inserisci id da eliminare: ");
    scanf("%d", &id);
    getchar();

    Canzone* curr = playlist->testa;
    Canzone* prev = NULL;

    for (int i = 0; i < playlist->lunghezza; i++) {
        if (curr->id == id) {
            if (playlist->lunghezza == 1) {
                playlist->testa = NULL;
            } else {
                if (prev != NULL) {
                    prev->next_playlist = curr->next_playlist;
                } else {
                    Canzone* last = curr;
                    while (last->next_playlist != curr) {
                        last = last->next_playlist;
                    }
                    playlist->testa = curr->next_playlist;
                    last->next_playlist = playlist->testa;
                }
            }
            playlist->lunghezza--;
            return;
        }
        prev = curr;
        curr = curr->next_playlist;
    }

    printf("Canzone non trovata\n");
}