/*
Scrivere un programma in linguaggio C che calcoli e visualizzi il codice fiscale (senza il carattere di controllo finale) 
chiedendo all’utente di inserire nome, cognome, data di nascita nel formato GG/MM/AAAA, sesso (M o F).

Sarà necessario verificare la correttezza degli input, quindi nome e cognome devono essere composti solo 
da lettere; la data deve essere composta solo da numeri (oltre agli eventuali /, 
si può scegliere se far inserire un valore della data alla volta o tutta la data con il separatore /); il sesso può avere solo la lettera M o F.
Per il controllo di nome, cognome e data, si suggerisce di leggere l’input carattere per carattere usando getchar().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* Stringa;

void Cognome(Stringa _Cognome){
    int len=0;
    len=strlen(_Cognome);
    for(int i=0; i<len; i++){
        if(_Cognome[i]!='A','E','I','O','U','a','i','o','u')
            _Cognome[i]=_Cognome[i];
    }
    realloc(_Cognome, 4*sizeof(char)); 
}

void Nome(Stringa _Nome){
    int len=0;
    len=strlen(_Nome);
    for(int i=0; i<len; i++){
        if(_Nome[i]!='A','E','I','O','U','a','i','o','u')
            _Nome[i]=_Nome[i];
    }
    realloc(_Nome,4*sizeof(char));
}


int main(){
    char Codice[17];
    char Cognome[30];
    char Nome[30];
    int Giorno=0;
    char mese[30];
    char anno[4];
    Stringa Comune="G186";

    printf("Inserisci il tuo cognome:\n");
    fgets(Nome, 30, stdin);
    printf("Inserisci il tuo nome:\n");
    fgets(Cognome, 30, stdin);
    printf("Inserisci il tuo giorno di nascita(se ha una cifra aggiungi 0): \n");
    scanf("%d", &Giorno);
    printf("Inserisci il tuo mese di nascita:\n");
    fgets(mese, 30, stdin);
    printf("Inserisci il tuo anno di nascita: \n");
    fgets(anno, 4, stdin);

    printf("il codice fiscale è: %s%s%d%s%s", Cognome, Nome, Giorno, mese, anno);

    return 0;
}