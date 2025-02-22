#include <stdio.h>

int main() {
    // Criando e inicializando o tabuleiro 10x10 com '~' (mar)
    char tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Habilidade Cone - Padrão 3x5 (matriz de cone)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // Posicionando a habilidade cone no tabuleiro (em uma posição fixa para exemplo)
    printf("Coordenadas da habilidade em Cone:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                tabuleiro[i+2][j+3] = 'C';  // Colocando a habilidade em cone no tabuleiro
                printf("(%d, %d)\n", i+2, j+3);  // Coordenadas da habilidade
            }
        }
    }

    int octaedro [3][5] =
    {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    printf("\nCoordenadas da habilidade em Octaedro:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                tabuleiro[i+5][j+2] = 'O';  // Colocando a habilidade em octaedro
                printf("(%d, %d)\n", i+5, j+2);  // Coordenadas da habilidade
            }
        }
    }

      // Habilidade Cruz - Padrão 3x5
      int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Posicionando a habilidade cruz no tabuleiro
    printf("\nCoordenadas da habilidade em Cruz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                tabuleiro[i+7][j+4] = 'X';  // Colocando a habilidade em cruz
                printf("(%d, %d)\n", i+7, j+4);
            }
        }
    }


    // Exibir o Tabuleiro atualizado
    printf("\nTabuleiro atualizado:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
