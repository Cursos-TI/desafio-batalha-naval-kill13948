#include <stdio.h>


int main() {
    int linhas = 10;
    int colunas = 10;

    int tabulheiro[10][10] = { 
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
    printf("\n");
    // tamno do navio//
    int tamanho_navio = 3;
    // decalaracao vetores navio//
    int navio_horizontal[3]={3};
    int navio_vertical[3]={3};

    // codenadas dos navios//
    int i_horizontal = 2, j_horizontal = 5;
    int j_vertical = 4, i_vertical = 3;

    //navio horizontal no tabuleiro//]
   for (int j = 0; j < tamanho_navio; j++){
if (j_horizontal + j < colunas )
{
    tabulheiro[i_horizontal][j_horizontal + j]= 3;
    navio_horizontal[j] = j_horizontal +j;
}
    }
    // navio vertival no tabuleiro//
    for (int i = 0; i < tamanho_navio; i++){
if (i_vertical + i < linhas )
 {

    tabulheiro[i_vertical + i][j_vertical] = 3;
    navio_vertical[i] = i_vertical + i;
 }
    }
    
    // Imprimir as letras A a J para as colunas
    printf("\n");
    for (int j = 0; j < colunas; j++) {
        printf("%c  ", 'A' + j); // Imprime as letras de A a J
    }
    printf("\n");

    // Imprimir os números de 1 a 10 antes da primeira coluna (linhas) e a matriz
    for (int i = 0; i < linhas; i++) { 
        printf("%2d ", i + 1); // Imprime os números de 1 a 10 para as linhas
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", tabulheiro[i][j]); // Imprime os valores da matriz com espaçamento
        }
        printf("\n"); 
    }

    return 0;

}
