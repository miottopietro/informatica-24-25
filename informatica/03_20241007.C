/*DATO UN NUMERO A PIù CIFRE STAMPARE LE CIFRE CHE LO 
COMPONGONO*/
#include <stdio.h>

int main(){

    int num=0;
    int q=0;
    int r=0;
    int cifra1=0;
    int cifra2=0;
    int cifra3=0;

    printf("inserisci il valore: ");
    scanf("%d", &num);

    if(num<999){
        printf("il numero deve essere di 3 cifre.");
    }
    else{
        
        q = num/10;
        r = num%10;
        cifra1 = r;

        printf("la prima cifra è: %d\n", cifra1);

        q = num/100;
        r = num%100;
        cifra2 = r;

        printf("la seconda cifra è: %d\n", cifra2);

        q = num/1000;
        r = num%1000;
        cifra3 = r;

        printf("la terza cifra è: %d", cifra3);

    }

    return 0;
}
