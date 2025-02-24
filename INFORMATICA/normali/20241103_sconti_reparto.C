/*Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:
    -  reparto 1 = nessuno sconto 
    -  reparto 2 = sconto 3%
    -  reparto 3 = sconto 2%
    -  reparto 4 = sconto 5%
Dati reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/

#include <stdio.h>
int main(){

    int repartoProdotto=0;
    float prezzoProdotto=0;
    float prezzoScontato=0;

    printf("inserisci il reparto del prodotto: ");
    scanf("%d", &repartoProdotto);
    
    printf("inserisci il prezzo del prodotto: ");
    scanf("%f", &prezzoProdotto);

    switch(repartoProdotto){
        case 1: prezzoScontato==prezzoProdotto;{
            printf("il prezzo rimane uguale non viene scontato rimane %.2f.", prezzoProdotto);
        }
        break;

        case 2: prezzoScontato=((prezzoProdotto-3)/100)*prezzoProdotto;{
            printf("il prezzo scontato è di: %.2f", prezzoScontato);
        }
        break;

        case 3: prezzoScontato=((prezzoProdotto-2)/100)*prezzoProdotto;{
            printf("il prezzo scontato è di: %.2f", prezzoScontato);
        }
        break;

        case 4: prezzoScontato=((prezzoProdotto-5)/100)*prezzoProdotto;{
            printf("il prezzo scontato è di: %.2f", prezzoScontato);
        }
        break;

        default:{
            printf("non ci sono altri reparti.");
        }
    }

    return 0;
}