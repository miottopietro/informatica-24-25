/*data una data in formato gg mm aaaa verificare 
se la data è accettabile*/

#include <stdio.h>
int main(){

    int gg=0;
    int mm=0;
    int aaaa=0;
    int bisestile=0;

    printf("inserisci il giorno: ");
    scanf("%d", &gg);

    printf("inserisci il mese: ");
    scanf("%d", &mm);

    printf("inserisci l'anno: ");
    scanf("%d", &aaaa);

    //contrtollo anno
    /*un anno è bisestile se è un multiplo di 4 ma non di 100
    oppure multiplo di 400*/

    if(aaaa%100==0){
        if(aaaa%400==0){
            printf("l'anno è bisestile.\n");
            bisestile=1;
        }
    }
    else{
        if(aaaa%4==0){
            printf("l'anno è bisestile.\n");
            bisestile=1;
        }
    }

    //controllo mese e giorno

    if(mm>=1 && mm<=12){
        if(mm==2){
            if(gg>=1 && gg<=28+bisestile);
            printf("la data è accettabile.\n");
        }
        else{
            printf("la data non è accettabile.");
        }
        else{
            if(mm==11 || mm==4 || mm==6 || mm==9){
                if(gg>=1 && gg<=30){
                    printf("la data è accettabile.");
                }
                else{
                    printf("la data non è accettabile.");
                }
            }
            else{
                if(gg>=1 && gg<=31){
                    printf("la data è accettabile.");
                }
                else{
                    printf("la data non è accettabile.");
                }
            }
        }
    }
    else{
        printf("la data non è accettabile.");
    }
    return 0;
}