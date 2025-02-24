//verificare se A è il quadrato di B

#include <stdio.h>
int main(){

    float A,B,quadrato;

    A=0;
    B=0;
    quadrato=0;

    printf("inserire un valore: ");
    scanf("%f", &A);
    printf("inserire un altro valore: ");
    scanf("%f", &B);

    quadrato = B*B;
    printf("il doppio è: %.2f ", quadrato);

    if (A==quadrato){
        printf("il primo valore %.2f è il quadrato del secondo %.2f", A,B);
    }
    else{
        printf("il primo valore %.2f non è il quadrato del secondo %.2f", A,B);
    }
    }
