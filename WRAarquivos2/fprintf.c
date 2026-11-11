#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo = fopen("mensagem.txt","w");

    int idade = 25;

    fprintf(arquivo, "Olá Mundo!.\n");
    fprintf(arquivo, "Minha idade e %d anos.\n", idade);

    fclose(arquivo);
    printf("Arquivo gerado com sucesso!\n");

    return 0;
}
