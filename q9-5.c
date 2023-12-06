#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPar(int numero) {
    return numero % 2 == 0;
}

void verificarSomaDiagonal(int **matriz, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é %s.\n", ehPar(soma) ? "par" : "ímpar");
}

void imprimirMatriz(int **matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int tamanho;
    printf("Digite o tamanho da matriz (N): ");
    scanf("%d", &tamanho);

    int **matriz = (int **)malloc(tamanho * sizeof(int *));
    for (int i = 0; i < tamanho; i++) {
        matriz[i] = (int *)malloc(tamanho * sizeof(int));
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = rand() % 101; 
        }
    }

    printf("Matriz Gerada:\n");
    imprimirMatriz(matriz, tamanho);

    verificarSomaDiagonal(matriz, tamanho);

    for (int i = 0; i < tamanho; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
