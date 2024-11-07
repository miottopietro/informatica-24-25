/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/

#include <stdio.h>
int main(){

    int num=0;
    int somma=0;
    int contatore=0;

    printf("inserisci il primo valore: ");
    scanf("%d", &num);
    contatore=contatore+1;

    somma=num;

    if(somma == 200){
        printf("hai raggiunto 200, con %d valori.\n", contatore);
    }
    else if(somma > 200){
        printf("hai superato 200, con %d valori.\n", contatore);
    }
    else{
        printf("inserisci il secondo valore: ");
        scanf("%d", &num);
        contatore=contatore+1;
    
        somma=somma+num;

        if(somma == 200){
            printf("hai raggiunto 200, con %d valori.\n", contatore);
        }
        else if(somma > 200){
            printf("hai superato 200, con %d valori.\n", contatore);
        }
        else{
            printf("inserisci il terzo valore: ");
            scanf("%d", &num);
            contatore=contatore+1;

            somma=somma+num;

            if(somma == 200){
                printf("hai raggiunto 200, con %d valori.\n", contatore);
            }
            else if(somma > 200){
                printf("hai superato 200, con %d valori.\n", contatore);
            }
            else{
                printf("inserisci il quarto valore: ");
                scanf("%d", &num);
                contatore=contatore+1;

                somma=somma+num;

                if(somma == 200){
                    printf("hai raggiunto 200, con %d valori.\n", contatore);
                }
                else if(somma > 200){
                    printf("hai superato 200, con %d valori.\n", contatore);
                }
                else{
                    printf("4 valori superati, non sei arrivato a 200.");
                }
            }
        }           
    }
    
    return 0;
}
    
   
          