#include <stdio.h>

int main(){
    for (int i=1; i<4; i++){
        if(i%2==0){
            for(int j=1; j<=3; i++){
                printf("%d-%d ", i, j);
            }
        }
    }
    return 0;
}