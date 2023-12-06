#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void binarizarMatriz(int **matriz, int **matrizBinarizada, int linhas, int colunas, int limiar) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizBinarizada[i][j] = (matriz[i][j] > limiar) ? 1 : 0;
        }
    }
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    int linhas, colunas;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }


    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    printf("Matriz Original:\n");
    imprimirMatriz(matriz, linhas, colunas);

    // Define um limiar
    int limiar;
    printf("Digite o limiar (t): ");
    scanf("%d", &limiar);

    // Alocar espaço para a matriz binarizada
    int **matrizBinarizada = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matrizBinarizada[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Binariza a matriz com base no limiar
    binarizarMatriz(matriz, matrizBinarizada, linhas, colunas, limiar);

    // Imprime a matriz binarizada
    printf("\nMatriz Binarizada com Limiar %d:\n", limiar);
    imprimirMatriz(matrizBinarizada, linhas, colunas);

    // Libera a memória alocada para as matrizes
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
        free(matrizBinarizada[i]);
    }
    free(matriz);
    free(matrizBinarizada);

    return 0;
}
