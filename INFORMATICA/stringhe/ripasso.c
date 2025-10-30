#include <stdio.h>
#include <stdlib.h>

typedef char* String;

int main(){

    String str=NULL;
    int dim=0;
    int capacity=0;
    char c=0;

    printf("inserisic una stringa: ");

    while((c=getchar())!='\n'){
        if(dim+1>=capacity){
            capacity+=10;

            String temp=realloc(str, capacity*sizeof(char));

            if(temp==NULL){
                free(str);
                printf("errore.");
                return 1;
            }
            str=temp;
        }
        str[dim++]=c;
    }

    str[dim]='\n';

    printf("la stringa è: %s", str);

    free(str);

    return 0;
}