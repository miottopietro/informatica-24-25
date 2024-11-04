//Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.
#include <stdio.h>

int main(){

    float num1=0;
    float num2=0;
    float num3=0;
    float media=0;
    float max=0;
    float min=0;

    printf("inserire i tre valori: ");
    scanf("%f%f%f", &num1, &num2, &num3); //quando iserisci i valori inseriti con uno spazio

    max=num1;
    min=num1;

    if(max<num2){
        max=num2;
        if(max<num3)
            max=num3;
    
    printf("il massimo è: %.2f", max);

    if(min>num2){
        min=num2;
        if(min>num3){
            min=num3;
        }
    }
    else{
        if(min>num3){
            min=num3;
        }
    printf("\nil valore minimo è: %.2f", min);

    }
    }

    media=(num1+num2+num3)/3;
    printf("\nla media dei tre valori è: %.2f", media);

}