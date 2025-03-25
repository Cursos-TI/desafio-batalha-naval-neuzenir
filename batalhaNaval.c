#include <stdio.h>


int main() {
    //Declaração e inicialização das variáveis, vetores e matriz
    int i, j;
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro [10][10];
    //Preenche o array com zeros
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
     /*Preenche a posição de um navio na horizontal na 
     linha 4, nas colunas F, G e H e outro navio na vertical, 
     na coluna C, linhas 3, 4 e 5*/
     for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[3][5] = 3;
            tabuleiro[3][6] = 3;
            tabuleiro[3][7] = 3;
            tabuleiro[2][2] = 3;
            tabuleiro[3][2] = 3;
            tabuleiro[4][2] = 3;

        }
    }
    
    
    //Exibição do tabuleiro
    printf ("\n :.:.:.:.:. Jogo Batalha Naval .:.:.:.:.: \n\n");
    printf ("   ");
    
    for (j = 0; j < 10; j++){

        printf ("%c   ", coluna[j]);//Imprime a letra das colunas
    }        
            printf("\n");
   
    for (i = 0; i < 10; i++){
        
        printf ("%d  ", linha[i]);//Imprime o número das linhas
        
        for (j = 0; j < 9; j++){
        printf ("%d ~ ", tabuleiro[i][j]);//Imprime as colunas do tabuleiro
    }
        printf ("%d\n", tabuleiro[i][j]);//Imprime as linhas do tabuleiro
        
    }
        
    return 0;
}