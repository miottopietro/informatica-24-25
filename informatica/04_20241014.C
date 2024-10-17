/*Memorizzare il seme e il punteggio di due carte da poker. Dire quale delle carte vale di più.
Il valore di una carta da poker è dato in primo luogo dal punteggio e in caso di parità di punteggio dal seme.
I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1}, i semi in ordine decrescente sono
{cuori, quadri, fiori, picche} per i semi memorizzare solo la lettera iniziale del seme.
PS: l’ordine dei semi può essere ricordato grazie alla frase “come quando fuori piove”
in cui le parole ricordano i nomi dei semi (cuori, quadri, fiori, picche).*/

#include <stdio.h>
int main(){

    int carta1=0;
    int carta2=0;

    int seme1=0;
    int valore1=0||1||2||3||4||5||6||7||8||9, j=10, q=11, k=12;

    int seme2=0;
    int valore2=0||1||2||3||4||5||6||7||8||9;

    printf("dimmi qual'è il seme della prima carta: ");
    scanf("%d", &seme1);
    printf("dimmi qual'è il valore della prima carta: ");
    scanf("%d", &valore1);

    printf("dimmi qual'è il seme della seconda carta: ");
    scanf("%d", &seme2);
    printf("dimmi qual'è il valore della seconda carta: ");
    scanf("%d", &valore2);




    return 0;
}