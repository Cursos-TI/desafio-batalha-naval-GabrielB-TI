#include <stdio.h>

int main() {

    int tabuleiro[10][10]; 

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            tabuleiro[x][y] = 0;
        }
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
