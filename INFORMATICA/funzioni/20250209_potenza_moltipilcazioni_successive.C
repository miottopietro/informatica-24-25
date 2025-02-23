/*Scrivete una funzione avente due parametri interi(passati per valore) b ed e che calcoli la potenza b^e 
con il metodo delle moltiplicazioni successive.*/

#include <stdio.h>

int calcoloPotenza(int _b, int _e);

int main(){

    int b=0;
    int e=0;
    int potenza=0;

    do{
        printf("inserisci il valore di b: ");
        scanf("%d", &b);
    }while(b<=0);

    do{
        printf("inserisci il valore di e: ");
        scanf("%d", &e);
    }while(e<=0);

    potenza=calcoloPotenza(b, e);

    printf("la potenza di %d^%d è: %d", b, e, potenza);

    return 0;
}
int calcoloPotenza(int _b, int _e){
    int _potenza=1;
    int _cnt=1;

    do{
        _potenza *= _b;
        _cnt++;
    }while(_cnt<=_e);
    
    return _potenza;
}