#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    //Declaração e inicialização das variáveis, vetores e matriz
    int i, j;
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro [LINHAS][COLUNAS];

    //Preenche o tabuleiro com zeros
    for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

     /*Preenche a posição de um navio na horizontal na
     linha 2, nas colunas F, G e H e outro navio na vertical,
     na coluna C, linhas 3, 4 e 5*/
     for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            tabuleiro[1][5] = 3;
            tabuleiro[1][6] = 3;
            tabuleiro[1][7] = 3;
            tabuleiro[2][2] = 3;
            tabuleiro[3][2] = 3;
            tabuleiro[4][2] = 3;

        }
    }

    /*Preenche a posição de um navio na diagonal, se
    a soma do valor de "i" e de "j" for igual a 8. */
     for (i = 0; i < 9; i++){
        for (j = 0; j < 3; j++){
            if (i + j == 8){
            tabuleiro[i][j] = 3;
            }
        }
     }


    /*Preenche a posição de um navio na diagonal, se
    o valor de "i" for igual ao valor de "j". */
     for (i = 6; i < 9; i++){
        for (j = 6; j < 9; j++){
            if (i == j){
            tabuleiro[i][j] = 3;
            }
        }
     }

    //Exibição do tabuleiro
    printf ("\n :.:.:.:.:. Jogo Batalha Naval .:.:.:.:.: \n\n");
    printf ("   ");

    for (j = 0; j < 10; j++){

        printf ("%c   ", coluna[j]);//Imprime a letra das colunas
    }
            printf("\n");

    for (i = 0; i < LINHAS; i++){

        printf ("%d  ", linha[i]);//Imprime o número das linhas

        for (j = 0; j < 9; j++){
        printf ("%d ~ ", tabuleiro[i][j]);//Imprime as colunas do tabuleiro
    }
        printf ("%d\n", tabuleiro[i][j]);//Imprime as linhas do tabuleiro

    }

    return 0;
}