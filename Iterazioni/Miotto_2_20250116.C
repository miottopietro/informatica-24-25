/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/

#include <stdio.h>

int main(){
    
    int num1=0;
    int num2=0;
    int sommaDiv1=0;
    int sommaDiv2=0;

    do{
        printf("inserisci il primo valore: ");
        scanf("%d", &num1);
    }while(num1<=0);

    do{
        printf("inserisci il secondo valore: ");
        scanf("%d", &num2);
    }while(num2<=0);

    for(int i=1; i<=num1; i++){
        if(num1%i==0){
            sommaDiv1+=i;
        }
    }

    for(int i=1; i<=num1; i++){
        if(num2%i==0){
            sommaDiv2+=i;
        }
    }

    if(sommaDiv1==num2 && sommaDiv2==num1){
        printf("%d e %d sono amicali.", num1, num2);
    }else{
        printf("%d e %d sono amici.", num1, num2);
    }

    return 0;
}