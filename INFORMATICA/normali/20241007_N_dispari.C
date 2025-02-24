/*STABILIRE SE UN NUMERO E' DISPARI CONTROLLANDO L'ULTIMA 
CIFRA MENO SIGNIFICATIVA*/
#include <stdio.h>

int main(){

    int num=0;
    int cifra=0;

    printf("inserisci un valore: ");
    scanf("%d", &num);

    cifra = num%10;

    if(cifra%2==0){
        printf("il numero %d è pari", num);
    }
    else{
        printf("il numero %d è dispari", num);
    }
    return 0;
}