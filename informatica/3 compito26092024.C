#include <stdio.h>

/*Calcola l’importo totale da pagare al cinema, sapendo che, ogni 12 studenti,
 spetta una gratuità e che per chi ha meno di 15 anni il biglietto è scontato del 40%:
 leggi in ingresso il numero di studenti, il numero di studenti con meno di 15 anni e
  il costo del biglietto.*/

  int main(){

    float TOTeuro, biglietto, TOTstudenti, studentiMIN15, EURObiglGRATIS, studentiRES, costostudentiRES;
    int gratuito;

    TOTeuro=0;
    biglietto=0;
    TOTstudenti=0;
    studentiMIN15=0;
    gratuito=0;
    EURObiglGRATIS=0;
    costostudentiRES=0;
    studentiRES=0;

    printf("digita un numero di studenti: ");
    scanf("%f", &TOTstudenti);

    printf("digita il numero di studenti con meno di 15 anni: ");
    scanf("%f", &studentiMIN15);

    printf("digita il costo di un biglietto: ");
    scanf("%f", &biglietto);

    gratuito = TOTstudenti / 12;
    EURObiglGRATIS = ((studentiMIN15*biglietto)*40)/100;
    studentiRES = TOTstudenti - gratuito - studentiMIN15;
    costostudentiRES = studentiRES*biglietto;
    TOTeuro = EURObiglGRATIS + costostudentiRES;
    
    printf("il costo totale per andare al cinema è di: %.2f",TOTeuro);


  }