/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
int main(){

    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int k=0;
    int num=0;
    int q=0;
    int r=0;

    printf("inserisci un numero da 0 a 9999: ")
    scanf("%d", num&);

    if(num>0 && num<9999){

        printf("inserisci il valore di K: ");
        scanf("%d", &k);




    }
    else{
        printf("il valore non rispetta i parametri, inserirne un altro.");
    }

    return 0;
}