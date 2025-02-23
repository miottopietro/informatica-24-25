/*scrivi un programma che ricerchi i primi tre numeri perfetti e li visualizza sullo schermo
ES: n=6 divisori=1,2,3 somma=1+2+3=6
6 - 28 - 496*/

#include <stdio.h>
int main(){

    int sommaDiv=0;
    int add=0;

    for(int num=1; num<500; num++){
        for(int i=1; i<num; i++){
            if(num%i==0){
                sommaDiv+=i;
            } 
        }
        if(sommaDiv==num){
            printf("%d è un numero perfetto.\n", sommaDiv);
        }

        sommaDiv=0;
    }

    return 0;
}