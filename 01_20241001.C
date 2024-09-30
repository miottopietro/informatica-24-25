//Verificare se un numero dato in input è divisibile sia per 3 sia per 5

#include <stdio.h>

int main(){

    int valore=0;
    float frattoTre=0;
    float frattoCinque=0;

    printf("inserisci un valore:");
    scanf("%d", &valore);

    frattoTre = valore/3;
    frattoCinque = valore/5;

    if(frattoTre %=!0,frattoCinque %=!0){
        printf("il valore è divisibile sia per 3 e 5");
    }
    else{
        printf("il valore non è divisibile sia per 3 e 5");
    }
}