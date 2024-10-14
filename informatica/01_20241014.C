/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/

#include <stdio.h>
int main(){
    int ggD1=0;
    int mmD1=0;
    int aaD1=0;

    int ggD2=0;
    int mmD2=0;
    int aaD2=0;

    int bisestile=0;

    int piurecente=0;
    int menorecente=0;

    printf("inserisci il giorno della prima data: ");
    scanf("%d", &ggD1);
    printf("inserisci il mese della prima data: ");
    scanf("%d", &mmD1);
    printf("inserisci l'anno della prima data: ");
    scanf("%d", &aaD1);

    printf("inserisci il giorno della seconda data: ");
    scanf("%d", &ggD2);
    printf("inserisci il mese della seconda data: ");
    scanf("%d", &mmD2);
    printf("inserisci l'anno della seconda data: ");
    scanf("%d", &aaD2);

    //controllo mese e giorno prima data

    if(mmD1>=1 && mmD1<=12){
        if(mmD1==2){
            if(ggD1>=1 && ggD1<=28+bisestile)
                printf("la prima data è accettabile.\n");
            else{
                printf("la prima data non è accettabile.\n");
            }
        }
        else{
            if(mmD1==11 || mmD1==4 || mmD1==6 || mmD1==9){
                if(ggD1>=1 && ggD1<=30){
                    printf("la prima data è accettabile.\n");
                }
                else{
                    printf("la prima data non è accettabile.\n");
                }
            }
            else{
                if(ggD1>=1 && ggD1<=31){
                    printf("la prima data è accettabile.\n");
                }
                else{
                    printf("la prima data non è accettabile.\n");
                }
            }
        }
    }
    else{
        printf("la prima data non è accettabile.\n");
    }

    //controllo mese e giorno seconda data

    if(mmD1>=1 && mmD1<=12){
        if(mmD1==2){
            if(ggD1>=1 && ggD1<=28+bisestile)
                printf("la seconda data è accettabile.\n");
            else{
                printf("la seconda data non è accettabile.\n");
            }
        }
        else{
            if(mmD1==11 || mmD1==4 || mmD1==6 || mmD1==9){
                if(ggD1>=1 && ggD1<=30){
                    printf("la seconda data è accettabile.\n");
                }
                else{
                    printf("la seconda data non è accettabile.\n");
                }
            }
            else{
                if(ggD1>=1 && ggD1<=31){
                    printf("la seconda data è accettabile.\n");
                }
                else{
                    printf("la seconda data non è accettabile.\n");
                }
            }
        }
    }
    else{
        printf("la seconda data non è accettabile.");
    }

    if(aaD1 > aaD2){
        printf("la prima data è più recente.");
    }
    else{
        if(aaD1 < aaD2){
            printf("la seconda data è più recente.");
        }
        else{
            if(mmD1 > mmD2){
                printf("la prima data è più recente.");
            }
            else{
                if(mmD1 < mmD2){
                    printf("la seconda data è più recente.");
                }
                else{
                    if(ggD1 > ggD2){
                        printf("la prima data è più recente.");
                    }
                    else{
                        if(ggD1 < ggD2){
                            printf("la seconda data è più recente.");
                        }
                        else{
                            printf("le due date sono uguali.");
                        }
                    }
                }
            }
        }
    }

return 0;
}