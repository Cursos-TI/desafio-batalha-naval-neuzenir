#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    //Declaração e inicialização das variáveis, vetores e matriz
    int i, j, tamanho_navio = 3;
    char coluna[COLUNAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[LINHAS] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tabuleiro [LINHAS][COLUNAS];
    int navio_horizontal_linha;
    int navio_horizontal_coluna;
    int navio_vertical_linha;
    int navio_vertical_coluna;
    int navio_diagonal_principal_linha;
    int navio_diagonal_principal_coluna;
    int navio_diagonal_secundaria_linha;
    int navio_diagonal_secundaria_coluna;

    //Preenche o tabuleiro com zeros para representar a água
    for (i = 0; i < LINHAS; i++){
        for (j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }


    /*Solicita a entrada das coordenadas, verifica se o navio está dentro dos limites do tabuleiro e
    preenche a posição de um navio na horizontal*/
    printf("Entre com as coordenadas iniciais (linha e coluna) \npara posicionar um navio na horizontal: \n");
    scanf("%d\n %d", &navio_horizontal_linha, &navio_horizontal_coluna);
    if (navio_horizontal_coluna + tamanho_navio > COLUNAS) {
        printf("ERRO: Coordenadas inválidas, o navio horizontal \nestá fora dos limites do tabuleiro!\n\n");
    } else {
        for (int j = navio_horizontal_coluna; j < navio_horizontal_coluna + tamanho_navio; j++) {
            tabuleiro[navio_horizontal_linha][j] = 3;
        }
    }

    /*Solicita a entrada das coordenadas, verifica se o navio está dentro dos limites do tabuleiro e
    preenche a posição de um navio na vertical*/
    printf("Entre com as coordenadas iniciais (linha e coluna) \npara posicionar um navio na vertical: \n");
    scanf("%d\n %d", &navio_vertical_linha, &navio_vertical_coluna);
    if (navio_vertical_linha + tamanho_navio > LINHAS) {
        printf("ERRO: Coordenadas inválidas, o navio vertical \nestá fora dos limites do tabuleiro! \n\n");
    } else {
        for (int i = navio_vertical_linha; i < navio_vertical_linha + tamanho_navio; i++) {
            tabuleiro[i][navio_vertical_coluna] = 3;
        }
    }

    /*Solicita a entrada das coordenadas, verifica se o navio está dentro dos limites do tabuleiro e
    preenche a posição de um navio na diagonal secundária, se a soma dos valores de "i" e de "j" for igual a 8*/
      printf("Entre com as coordenadas iniciais (linha e coluna) \npara posicionar um navio na diagonal secundária: \n");
    scanf("%d\n %d", &navio_diagonal_secundaria_linha, &navio_diagonal_secundaria_coluna);
    if (navio_diagonal_secundaria_linha + tamanho_navio > LINHAS || navio_diagonal_secundaria_coluna + tamanho_navio > COLUNAS) {
        printf("ERRO: Coordenadas inválidas, o navio da diagonal secundária \nestá fora dos limites do tabuleiro! \n\n");
    } else {
     for (i = 0; i < 3 + tamanho_navio; i++){
        for (j = 0; j < 3 + tamanho_navio; j++){
            if (i + j == 8){
            tabuleiro[i][j] = 3;
            }
        }
     }
     }


    /*Preenche a posição de um navio na diagonal principal, se
    os valores de "i" e "j" forem iguais. */
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

    for (j = 0; j < COLUNAS; j++){

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