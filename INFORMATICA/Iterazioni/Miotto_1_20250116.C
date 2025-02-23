/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/

#include <stdio.h>
int main(){

    int Nnum=0;
    int num=0;
    int numPrimo=0;

    do{
        printf("inserisci il valore di quanti numeri vuoi inserire: ");
        scanf("%d", &Nnum);
    }while(Nnum<=0);

    for(int i=1; i<=Nnum; i++){
        printf("inserisci un valore: ");
        scanf("%d", &num);

        if(num%num==0 && num%2!=0 && num%3!=0){
            printf("%d è un numero primo", num);
        }
    }

    return 0;
}