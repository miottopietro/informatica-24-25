/*scrivi un programma che legge un numero NUM strettamente positivo e visualizza tutti i numeri 
pari inferiori a tale numero fino a 0.*/

    #include <stdio.h>
    int main(){

    int NUM=0;
    int i=NUM - 1;

    do {
        printf("Inserisci un numero strettamente positivo: ");
        scanf("%d", &NUM);
        if (NUM <= 0) {
            printf("Il numero deve essere strettamente positivo. Riprova.\n");
        }
    } while (NUM <= 0);

    printf("Numeri pari inferiori a %d fino a 0:\n", NUM);

    while (i >= 0) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--; 

    printf("\n");
}
    return 0;
}