//stabilire se dati due numeri A e B controllare se A è minore, uguale o maggiore di B

#include <stdio.h>
int main(){

    float A=0;
    float B=0;

    printf("inserire un valore: ");
    scanf("%f", &A);
    printf("inserire un altro valore: ");
    scanf("%f", &B);

    if(A==B){
        printf("i due valori sono uguali");
    }
    else{
        if(A>B)
            printf("%.2f è maggiore di %.2f", A,B);
        else
            printf("%.2f è minore di %.2f", A,B);

    }

}