/*Scrivere un programma che legge 2 orari in ore minuti e secondi e dice quale viene prima dei due.
(Si risolva l’esercizio senza trasformare tutto in secondi).*/

#include <stdio.h>
int main(){

    int ss1=0;
    int mm1=0;
    int oo1=0;
    int ssTOT1=0;

    int ss2=0;
    int mm2=0;
    int oo2=0;
    int ssTOT2=0;

    printf("inserisci i secondi del primo orario: ");
    scanf("%d", &ss1);
    printf("inserisci i minuti del primo orario: ");
    scanf("%d", &mm1);
    printf("inserisci le ore del primo orario: ");
    scanf("%d", &oo1);

    printf("inserisci i secondi del secondo orario: ");
    scanf("%d", &ss2);
    printf("inserisci i minuti del secondo orario: ");
    scanf("%d", &mm2);
    printf("inserisci le ore del secondo orario: ");
    scanf("%d", &oo2);

    ssTOT1= ss1+(mm1*60)+(oo1*3600);
    ssTOT2= ss1+(mm2*60)+(oo2*3600);

    if(ssTOT1 <= 86400){
        printf("il primo orario è accettabile.\n");
        }else{
        printf("il primo orario non è accetabile.\n");
        }

    if(ssTOT2 <= 86400){
        printf("il secondo orario è accettabile.\n");
        }else{
        printf("il secondo orario non è accetabile.\n");
        }

    if(oo1 < oo2){
        printf("il primo orario vieni prima.");
    }
    else{
        if(oo1 > oo2){
            printf("il secondo orario vieni prima.");
        }
        else{
            if(mm1 < mm2){
                printf("il primo orario vieni prima.");
            }
            else{
                if(mm1 > mm2){
                    printf("il secondo orario vieni prima.");
                }
                else{
                    if(ss1 < ss2){
                        printf("il primo orario vieni prima.");
                    }
                    else{
                        if(ss1 > ss2){
                            printf("il secondo orario vieni prima.");
                        }
                        else{
                            printf("gli orari sono uguali.");
                        }
                    }
                }
            }
        }
    }

    return 0;
}