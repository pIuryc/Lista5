#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM 10

float calcularEMQ(int vetorA[], int vetorB[]) {
    float emq = 0.0;

    for (int i = 0; i < TAM; i++) {
        float diferenca = vetorA[i] - vetorB[i];
        emq += diferenca * diferenca;
    }

    emq /= TAM;

    return emq;
}

int main() {
    srand(time(NULL));

    int *vetorA = (int *)malloc(TAM * sizeof(int));
    int *vetorB = (int *)malloc(TAM * sizeof(int));

    for (int i = 0; i < TAM; i++) {
        vetorA[i] = rand() % 10;
        vetorB[i] = rand() % 10;
    }

    float emq = calcularEMQ(vetorA, vetorB);

    printf("Erro Médio Quadrático: %.2f\n", emq);

    free(vetorA);
    free(vetorB);

    return 0;
}
