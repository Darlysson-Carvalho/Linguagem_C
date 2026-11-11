#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *meu_arquivo;

    meu_arquivo = fopen("dados.txt","w");

    fclose(meu_arquivo);

    return 0;
}
