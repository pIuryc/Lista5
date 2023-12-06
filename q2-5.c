#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char *argv[]){
if(argc < 2){
    printf("FALTAM INFORMAÇÔES");
    printf("Digite o tamanho do vetor");
    return -1;
}

srand(time(NULL));
int *vetor = (int *)(malloc(sizeof(int)* atoi(argv[1])) );
if(vetor == NULL) printf("Falha na alocacao de memoria");
  
int *menor = vetor;

  for(int i = 0; i < atoi(argv[1]); i++){
   *(vetor + i) = rand() % 100;

  if (*(vetor + i) < *menor) {
    menor = (vetor + i);
  }
}  
 
  free(vetor);
  return 0;
}