#include <stdio.h>


int main() {
    //Declaração e inicialização das variáveis, vetores e matriz
    int i, j;
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navio1[3] = {3, 3, 3}, navio2[3] = {3, 3, 3};
    int tabuleiro [10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    //Exibição do tabuleiro
    printf (" :.:.:.:.:. Jogo Batalha Naval .:.:.:.:.: \n\n\a");
    printf ("   ");
    
    for (j = 0; j < 10; j++){

        printf ("%c   ", coluna[j]);//Imprime as letras das colunas
    }        
            printf("\n");
   
    for (i = 0; i < 10; i++){
        
        printf ("%d  ", linha[i]);//Imprime os números das linhas
        
        for (j = 0; j < 9; j++){
        printf ("%d ~ ", tabuleiro[i][j]);//Imprime as colunas do tabuleiro
    }
        printf ("%d\n", tabuleiro[i][j]);//Imprime as linhas do tabuleiro
        
    }


    return 0;
}