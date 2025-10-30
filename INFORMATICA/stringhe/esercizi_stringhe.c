/*
  PROVARE LA LIBRERIA string.h
  PER LE SEGUENTI OPERAZIONI

  1. CALCOLO LUNGHEZZA STRINGA
  2. CONTROLLO STRINGHE UGUALI
  3. COPIARE UNA STRINGA
  4. CERCARE UN CARATTERE E COMUNICARE LA FREQUENZA
  5. CONCATENARE DUE STRINGHE
  6. RICERCA DI UNA STRINGA NELL' ALTRA
  */

#include <stdio.h>
#include <string.h>

typedef char* String;

int calcola_lunghezza(String s1){
    return strlen(s1);
}

int confronta_stringhe(String s1, String s2){
    return strcmp(s1, s2);
}

int copia_stringa(String s1, String s2){
    strcpy(s1, s2);
    return 0;
}

int conta_carattere(String s1, char c){
    int count = 0;
    for(int i = 0; s1[i] != '\0'; i++){
        if(s1[i] == c){
            count++;
        }
    }
    return count;
}

int concatena_stringhe(String s1, String s2){
    strcat(s1, s2);
    return 0;
}

int ricerca_sottostringa(String s1, String s2){
    char *pos = strstr(s1, s2);
    if(pos != NULL){
        return pos - s1;
    } else {
        return -1;
    }
}

int main(){

    String s1=NULL;
    String s2=NULL;
    int lunghezza=0;
    int confronto=0;
    int frequenza=0;
    int posizione=0;
    char carattere;

    s1=(String)malloc(sizeof(char)*100);

    s2=(String)malloc(sizeof(char)*100);
    if(s1==NULL || s2==NULL){
        return 1;
    }
    printf("inserisci la prima stringa: ");
    fgets(s1,100,stdin);

    printf("inserisci la seconda stringa: ");
    fgets(s2,100,stdin);

    lunghezza=calcola_lunghezza(s1);
    printf("la lunghezza della prima stringa è: %d\n", lunghezza);

    confronto=confronta_stringhe(s1,s2);
    if(confronto==0){
        printf("le stringhe sono uguali\n");
    }else{
        printf("le stringhe sono diverse\n");
    }

    copia_stringa(s1,s2);
    printf("dopo la copia, la prima stringa è: %s\n", s1);

    printf("inserisci un carattere da cercare nella prima stringa: ");
    scanf(" %c", &carattere);

    frequenza=conta_carattere(s1,carattere);
    printf("il carattere '%c' appare %d volte nella prima stringa\n", carattere, frequenza);

    concatena_stringhe(s1,s2);
    printf("dopo la concatenazione, la prima stringa è: %s\n", s1);

    posizione=ricerca_sottostringa(s1,s2);
    if(posizione!=-1){
        printf("la seconda stringa è stata trovata nella prima alla posizione: %d\n", posizione);
    }else{
        printf("la seconda stringa non è stata trovata nella prima\n");
    }
    
    return 0;
}