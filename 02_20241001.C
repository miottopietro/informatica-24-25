//Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.
#include <stdio.h>

int main(){

    float num1=0;
    float num2=0;
    float num3=0;
    float media=0;

    printf("inserire il primo valore: ");
    scanf("%f", num1);

    printf("inserire il secondo valore: ");
    scanf("%f", num2);

    printf("inserire il terzo valore: ");
    scanf("%f", num3);

    media = (num1+num2+num3)/3;
    printf("la media aritmetica è: %f", media);

    if(num1<num2){
        printf("il numero minore è %f", num1);
    }
    else{
        if(num2<num1){
            printf("il numero minore è %f", num2);
        }
        else{
            if(num1<num3){
                printf("il numero minore è %f", num1);
            }
            else{
                if(num3<num1){
                    printf("il numero minore è %f", num3);
                }
            }
        }
    }
}