#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char *argv[]){
if(argc < 2){
    printf("FALTAM INFORMAÇÔES");
    printf("Digite o tamanho do vetor");
    return -1;
}
  float soma;
  srand(time(NULL));
  
  float *vetor = (float *)malloc(atoi(argv[1])*sizeof(float));
  for(int i = 0; i < atoi(argv[1]); i++){
    *(vetor + i) = rand() % 100;
    soma += vetor[i];
  }
  printf("Soma dos elementos do vetor %.2f", soma);
return 0;
}