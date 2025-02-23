/*si scriva un programmain linguaggio che letto un numero intero positvo dallo standardinput,
visualizzi a terminale il quadrato del numero stesso facendo uso soltanto operazioni di somma.

_si osservi che il quadrato di ogni numero 

intero positivo N può essere costruito sommando tra loro i primi N numeri dispari.

_esempio: N = 5; N2 = 1+3+5+7+9 = 25.
*/

#include <stdio.h>
int main(){

    int num=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);



    return 0;
}