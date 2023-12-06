#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maior_menor(int *vetor, int tamanho, int **maior, int **menor);

int main(int argc,char *argv[]){
if(argc < 2){
    printf("FALTAM INFORMAÇÔES");
    printf("Digite o tamanho do vetor");
    return -1;
}

srand(time(NULL));
int tamanho = atoi(argv[1]);
int *vetor = (int *)(malloc(sizeof(int)* atoi(argv[1])) );
if(vetor == NULL) printf("Falha na alocacao de memoria");
  
int *menor = vetor;
int *maior = vetor;

  maior_menor(vetor, tamanho, &maior, &menor);
  
  free(vetor);
  return 0;
}

void maior_menor(int *vetor, int tamanho, int **maior, int **menor){
    for(int i = 0; i < tamanho; i++){
     *(vetor + i) = rand() % 100;
  if (*(vetor + i) < **menor) {
     *menor = (vetor + i);}
  if (*(vetor + i) > **maior) {
      *maior = (vetor + i);}
}
}