/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/

#include <stdio.h>
int main(){

    int sommaDiv=0;
    int numPrimo=0;

    for(int i=1; i<=100; i++){
        for(int j=1; j<=i; i++){
            if(i%j==0){
                sommaDiv+=j;
            }
            if(sommaDiv==i+1){
                printf("%d è un numero primo", i);
            }
        }
    }



    return 0;
}