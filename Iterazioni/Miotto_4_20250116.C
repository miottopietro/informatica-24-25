/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/

#include <stdio.h>

int main(){
    
    int scelta=0;
    int num=0;

    print("se vuoi serie crescente digita 0.");
    print("se vuoi serie decrescente digita 1.");

    printf("scegli che serie fare: ");
    scanf("%d", &scelta);

    switch (scelta){
        case 0:{
            do{
                printf("inserisci un valore: ");
                scanf("%d", &num);
            }while(num!=0);
            
            
            printf("");
            break;}

        case 1:{
            do{
                printf("inserisci un valore: ");
                scanf("%d", &num);
            }while(num!=0);

            printf("");
            break;}

        default:{
            printf("hai inserito una scelta non valida.");
            break;
        }
    }

    return 0;
}