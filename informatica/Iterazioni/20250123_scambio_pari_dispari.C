/*DATI  DUE  NUMERI  A  PIU' CIFRE(STESSO NUMERO DI CIFRE) SCAMBIARE TRA DI LORO LE CIFRE DI POSIZIONE PARI*/

#include <stdio.h>
int main(){

    int num1=0;
    int num2=0;
    int cifra1Num1=0;
    int cifra2Num1=0;
    int cifra3Num1=0;
    int cifra4Num1=0;
    int q1=0;
    int cifra1Num2=0;
    int cifra2Num2=0;
    int cifra3Num2=0;
    int cifra4Num2=0;
    int q2=0;

    do{
        printf("inserisci il primo valore tra 1000 e 9999: ");
        scanf("%d", &num1);
    }while(num1<=1000 || num1>=9999);

    do{
        printf("inserisci il secondo valore tra 1000 e 9999: ");
        scanf("%d", &num2);
    }while(num2<=1000 || num2>=9999);

    //cifre primo numero

    q1=num1%10;
    cifra1Num1 = q1;

    q1=num1/10%10;
    cifra2Num1 = q1;

    q1=num1/100%10;
    cifra3Num1 = q1;

    q1=num1/1000%10;
    cifra4Num1 = q1;

    //cifre secondo numero

    q2=num2%10;
    cifra1Num2 = q2;

    q2=num2/10%10;
    cifra2Num2 = q2;

    q2=num2/100%10;
    cifra3Num2 = q2;

    q2=num2/1000%10;
    cifra4Num2 = q2;

    printf("il primo valore %d dopo aver scambiato le cifre pari diventa: %d%d%d%d\n", num1, cifra4Num2, cifra3Num1, cifra2Num2, cifra1Num1);

    printf("il secondo valore %d dopo aver scambiato le cifre pari diventa: %d%d%d%d", num2, cifra4Num1, cifra3Num2, cifra2Num1, cifra1Num2);

    return 0;
}