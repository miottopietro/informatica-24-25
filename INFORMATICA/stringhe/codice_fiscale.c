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

typedef char* String;



int main(){

    String Nome=NULL;
    String Cognome=NULL;
    String DataNascita=NULL;
    char Sesso=0;
    char codiceComune[]="G186"
    int dim=0;

    Nome=(String)malloc(30*sizeof(char));
    if(Nome==NULL){
        printf("Errore allocazione\n");
        return 1;
    }
    printf("Inserisci il Nome: ");
    i=0;
    while(1){
        Nome[i]=getchar();
        if(Nome[i]=='\n'){
            Nome[i]='\0';
            break;
        }
        if((Nome[i]<'A' || Nome[i]>'Z') && (Nome[i]<'a' || Nome[i]>'z')){
            printf("il nome deve contenere solo lettere.\n");
            free(Nome);
            return 1;
        }
        i++;
    }  
    

    return 0;
}