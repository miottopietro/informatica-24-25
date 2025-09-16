//Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.

#include <stdio.h>

int main() {
    int matrice[10][10] = {0};
    int rig = 0;
    int col = 0;
    int i, j, temp;

    printf("Inserisci il numero di righe (max 10): ");
    scanf("%d", &rig);
    printf("Inserisci il numero di colonne (max 10): ");
    scanf("%d", &col);

    printf("Inserisci gli elementi della matrice:\n");
    for (i=0; i<rig; i++) {
        for (j=0; j<col; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    printf("Matrice originale:\n");
    for (i=0; i<rig; i++) { 
        for (j=0; j<col; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<rig; i++) {
        temp = matrice[i][i];
        matrice[i][i] = matrice[i][col-i-1];
        matrice[i][col-i-1] = temp;
    }

    printf("Matrice dopo lo scambio delle diagonali:\n");
    for (i=0; i<rig; i++) {
        for (j=0; j<col; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}