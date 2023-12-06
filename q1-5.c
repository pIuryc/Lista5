#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
if(argc < 4){
    printf("FALTAM INFORMAÇÔES");
    printf("Digite nessa ordem numero1 numero2 operação");
    return -1;
}

switch(*argv[3]){
case '+':
printf("Soma: %d", (atoi(argv[1]) + atoi(argv[2])));
break;
case '*':
printf("Multiplicação: %d", (atoi(argv[1]) * atoi(argv[2])));
break;
}

return 0;
}