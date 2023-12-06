#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

void normalizar_dados(float vetor[], int tamanho) {
    int min = vetor[0];
    int max = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < min) {
            min = vetor[i];
        }
        if (vetor[i] > max) {
            max = vetor[i];
        }
    }

   
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (vetor[i] - min) / (float)(max - min);
    }
}

int main() {
  float vetor[TAM];
  srand(time(NULL));
  
  for(int i = 0; i < TAM; i++){
    vetor[i] = rand() % 100;
  }

  printf("Vetor antes: \n");
  for (int i = 0; i < TAM; i++) {
      printf("%.0f ", vetor[i]);
  }
    normalizar_dados(vetor, TAM);

   
    printf("\nVetor depois: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
