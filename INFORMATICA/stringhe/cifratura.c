/*inserita una stringa che fa una cifrature di 3 
 casa = fdvd
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* Stringa;

Stringa crea_stringa_dinamica(char terminator){
    Stringa str = NULL;
    int size = 0;       
    int capacity = 0;   
    char c;

    printf("Inserisci una stringa (termina con %c): ", terminator);

    while ((c = getchar()) != terminator && c != EOF) {
        if (size + 1 >= capacity) {
            capacity += 10; 
            str = (Stringa) realloc(str, capacity * sizeof(char));
            if (str == NULL) {
                printf("Errore di allocazione\n");
                exit(1);
            }
        }
        str[size++] = c;
    }
    str[size] = '\0'; 

    return str;
}

int calcola_lunghezza_stringa(Stringa s1){
    int dim=0;
    while(s1[dim]!='\0') dim++;
    
    return dim;
}

void cifra_stringa(Stringa s1, int shift){
    int dim=calcola_lunghezza_stringa(s1);

    for(int i=0; i<dim; i++){
        if(s1[i]=='z'){
            s1[i]=='c';
        }else if(s1[i]=='Z'){
            s1[i]=='C';
        }else{
            s1[i]+=shift;
        }
    }
    return s1;
}

void decifra_stringa(Stringa s1, int shift){
    int dim=calcola_lunghezza_stringa(s1);

    for(int i=0; i<dim; i++){
        if(s1[i]=='c'){
            s1[i]=='z';
        }else if(s1[i]=='C'){
            s1[i]=='Z';
        }else{
            s1[i]-=shift;
        }
    }
    return s1;
}

int main(){
    Stringa s1 = crea_stringa_dinamica('\n');
    int shift = 3;

    cifra_stringa(s1, shift);

    printf("Stringa cifrata: %s\n", s1);
    
    free(s1);
    return 0;
}
