#include <stdio.h>

int main() {
    
    int tabuleiro[10][10];
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navio1 = 3, navio2 = 6;

    //Exibe as letras acima do mar, para servir como coordenada.
    for (int i = 0; i < 10; i++) {

        if (i == 0)
        {
            printf("   A ");
        } else {
        
            printf("%c ", linha[i]);

        }
        
    }

    printf("\n");

    //Força o tabuleiro a ser composto completamente por zero.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    
    }
    
    //Exibe os navios por meio de um loop que percorre as posições do tabuleiro e coloca 3 no lugar de 0.
    for (int i = 0; i < 3; i++, navio1++) {
        tabuleiro[navio1][3] = 3;
    }

    for (int i = 0; i < 3; i++, navio2++) {
        tabuleiro[1][navio2] = 3;
    }

    

    //Exibe o tabuleiro e os números a esquerda que servem de coordenadas.
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    printf("\n");

      

    return 0;
}
