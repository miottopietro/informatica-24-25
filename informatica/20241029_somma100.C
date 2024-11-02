/*Scrivi un programma in C che faccia inserire dei numeri interi all'utente: il programma si deve fermare quando la somma
dei numeri inseriti raggiunge 100 oppure quando sono stati inseriti 5 numeri. Alla fine mostrare il numero di valori inseriti 
dall'utente (usare contatore).*/

#include <stdio.h>
int main(){

    int num=0;
    int somma=0;
    int contatore=0;

    printf("inserisci il primo valore: ");
    scanf("%d", &num);
    contatore=contatore+1;

    somma=num;

    if(somma == 100){
        printf("hai raggiunto 100, con %d valori.", contatore);
    }
    if(somma > 100){
        printf("hai superato 100, con %d valori.", contatore);
    }
    else{
        printf("inserisci il secondo valore: ");
        scanf("%d", &num);
        contatore=contatore+1;
    
        somma=somma+num;

        if(somma == 100){
            printf("hai raggiunto 100, con %d valori.", contatore);
        }
        if(somma > 100){
            printf("hai superato 100, con %d valori.", contatore);
        }
        else{
            printf("inserisci il terzo valore: ");
            scanf("%d", &num);
            contatore=contatore+1;

            somma=somma+num;

            if(somma == 100){
                printf("hai raggiunto 100, con %d valori.", contatore);
            }
            if(somma > 100){
                printf("hai superato 100, con %d valori.", contatore);
            }
            else{
                printf("inserisci il quarto valore: ");
                scanf("%d", &num);
                contatore=contatore+1;

                somma=somma+num;

                if(somma == 100){
                    printf("hai raggiunto 100, con %d valori.", contatore);
                }
                if(somma > 100){
                    printf("hai superato 100, con %d valori.", contatore);
                }
                else{
                    printf("inserisci il quinto valore: ");
                    scanf("%d", &num);
                    contatore=contatore+1;

                    somma=somma+num;

                    if(somma == 100){
                        printf("hai raggiunto 100, con %d valori.", contatore);
                    }
                    if(somma > 100){
                        printf("hai superato 100, con %d valori.", contatore);
                    }
                    else{
                        printf("5 valori superati, non sei arrivato a 100.");
                    }
                }
            }
        }
    }
    return 0;
}