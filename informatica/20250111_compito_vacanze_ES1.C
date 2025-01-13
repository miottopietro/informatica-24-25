/*Sviluppa un programma che eroga il resto per un distributore di bevande automatico. Il cliente sceglie un prodotto ù
(numero intero da 1 a 5) e gli viene visualizzato il costo: quindi inizia a inserire monete nell’apposita fessura, 
che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, il programma interrompe l’acquisizione della sequenza e restituisce
 una serie di numeri interi corrispondenti al resto in monete da 1 e 5 centesimi.

Passi operativi

    Definisci le costanti per inserire il prezzo dei prodotti.
    Definisci le variabili necessarie per compiere tutte le operazioni, contemplando anche il caso di inserimento di moneta errata e, quindi, rifiutata.
    Scrivi il programma e predisponi un elenco di use case con i quali testarne il funzionamento.
    Suggerisci come potresti estendere il programma per utilizzare anche altre monete come resto.
*/

#include <stdio.h>
int main(){

    const float 1= 0.80;
    const float 2= 0.90;
    const float 3= 1.70;
    const float 4= 1.50;
    const float 5= 1.20;

    printf("SCEGLI UNO DEI 5 PRODOTTI:\n\n\tACQUA NATURALE: DIGITA 1.\n\tACQUA FRIZZANTE: DIGITA 2.\n\tCOCACOLA: DIGITA 3.\n\tCAFFÉ: DIGITA 4.\n\tTHE: DIGITA 5.");
    

    return 0;
}