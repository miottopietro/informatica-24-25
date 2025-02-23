/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo 
(perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/

#include <stdio.h>
int main(){

    float l1=0;
    float l2=0;
    float l3=0;
    float somma1=0;
    float somma2=0;
    float somma3=0;

    printf("inserisci il valore del primo lato: ");
    scanf("%f", &l1);

    printf("inserisci il valore del secondo lato: ");
    scanf("%f", &l2);

    printf("inserisci il valore del terzo lato: ");
    scanf("%f", &l3);

    somma1=l1+l2;
    somma2=l2+l3;
    somma3=l3+l1;

    if(somma1>l3 && somma2 >l1 && somma3 > l2){
        printf("la forma geometrica è un triangolo.");
    }
    else{
        printf("la somma geometrica non è un triangolo.");
    }

    return 0;
}