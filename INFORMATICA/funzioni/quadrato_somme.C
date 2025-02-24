/*si scriva un programmain linguaggio che letto un numero intero positvo dallo standardinput,
visualizzi a terminale il quadrato del numero stesso facendo uso soltanto operazioni di somma.

_si osservi che il quadrato di ogni numero 

intero positivo N può essere costruito sommando tra loro i primi N numeri dispari.

_esempio: N = 5; N2 = 1+3+5+7+9 = 25.
*/

#include <stdio.h>

void quadrato(int *_num, int *_somma);

int main(){
	int num=0;
	int somma=0;
	
	do{
		printf("inserisci un valore: ");
		scanf("%d", &num);
	}while(num<0);
	
	quadrato(&num, &somma);
	
	printf("il quadrato di %d vale: %d", num, somma);
	
	return 0;
}
void quadrato(int *_num, int *_somma){
	int dispari=1;
	
	for(int i=1; i<=*_num; i++){
		*_somma+=dispari;
		dispari+=2;
	}
}