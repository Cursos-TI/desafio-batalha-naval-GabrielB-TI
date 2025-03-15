#include <stdio.h>

int main() {

    int tabuleiro[10][10]; 

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            tabuleiro[x][y] = 0;
        }
    }

    int linha1 = 2, coluna1 = 4; 
    int linha2 = 6, coluna2 = 1; 

    for (int i = 0; i < 3; i++) {
        tabuleiro[linha1][coluna1 + i] = 3;
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = 3;
    }

    printf("\nTabuleiro de Batalha Naval:\n");
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    return 0;
}
