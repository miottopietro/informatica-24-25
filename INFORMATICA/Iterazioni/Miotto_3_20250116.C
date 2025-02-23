/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/

#include <stdio.h>

int main(){

    int num=0;
    int q=0;
    int cifra1=0;
    int cifra2=0;
    int cifra3=0;
    int cifra4=0;

    printf("inserisci il valore: ");
    scanf("%d", &num);

    if(num>9999){
        printf("inserisci un numero minore di 9999.");
    }
    else{
        
        q=num%10;
        cifra1 = q;

        printf("la prima cifra è: %d\n", cifra1);

        q=num/10%10;
        cifra2 = q;

        printf("la seconda cifra è: %d\n", cifra2);

        q=num/100%10;
        cifra3 = q;

        printf("la terza cifra è: %d\n", cifra3);

        q=num/1000%10;
        cifra4 = q;

        printf("la quarta cifra è: %d", cifra4);

    }
    
    return 0;
}