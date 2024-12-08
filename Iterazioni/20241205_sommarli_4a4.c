/*dati N numeri, sommarli 4 a 4 termina non appena si introduce uno 0.*/

#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    int somma=0;
    
    do{
        do{
            printf("inserisci il primo valore: ");
            scanf("%d", &num1);
            printf("inserisci il secondo valore: ");
            scanf("%d", &num2);
            printf("inserisci il terzo valore: ");
            scanf("%d", &num3);
            printf("inserisci il quarto valore: ");
            scanf("%d", &num4);

            somma=num1+num2+num3+num4;

            printf("la somma dei 4 valori è: %d\n", somma);

        }while(num1!=0 && num2!=0 && num3!=0 && num4!=0);

    }while(num1!=0 && num2!=0 && num3!=0 && num4!=0);

    return 0;
}