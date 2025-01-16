/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/

#include <stdio.h>

int main(){
    
    int scelta=0;
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    print("se vuoi serie crescente digita 0.");
    print("se vuoi serie decrescente digita 1.");

    printf("scegli che serie fare: ");
    scanf("%d", &scelta);

    switch (scelta){
        case 0:{
            
            printf("inserisci un valore: ");
            scanf("%d", &num1);
            printf("inserisci un valore: ");
            scanf("%d", &num2);
            printf("inserisci un valore: ");
            scanf("%d", &num3);
            printf("inserisci un valore: ");
            scanf("%d", &num4);

            if(num1<num2 && num2<num3 && num3<num4){
                printf("%d %d %d %d", num1, num2, num3, num4)
            }
            else{

            }
            break;}

        case 1:{
            printf("inserisci un valore: ");
            scanf("%d", &num1);
            printf("inserisci un valore: ");
            scanf("%d", &num2);
            printf("inserisci un valore: ");
            scanf("%d", &num3);
            printf("inserisci un valore: ");
            scanf("%d", &num4);

            if(num1>num2 && num2>num3 && num3>num4){
                printf("%d %d %d %d", num4, num3, num2, num1)
            }
            else{

            }
            break;}

        default:{
            printf("hai inserito una scelta non valida.");
            break;
        }
    }

    return 0;
}