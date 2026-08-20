#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    //Sistema simples para carregar informacao na tela
    printf("Iniciando o sistema FerraLog...\n");
    printf("\n");
    Sleep(1000);
    printf("[*]Conectando ao Banco de Dados...\n");
    Sleep(1500);
    printf("[*]Carregando modulo de leitura de QR Code...\n");
    Sleep(1500);
    printf("[*]Verificando status e validade das garantias...\n");
    Sleep(2000);
    printf("[*]Sicronizando Dados...\n");
    Sleep(1000);
    //Limpando o terminal
    system("cls");

    //Cabecalho do Sistema FerraLog
    printf("====================================\n");
    printf("SISTEMA FERRALOG - INVENTARIO\n");
    printf("====================================\n");
    printf("\n");
    printf("Bem-vindo ao controle logistico de ferramentas\n");
    printf("\n");
    //Apresentar as opcoes no Menu
    printf("Selecione uma opcao no menu abaixo\n");
    printf("\n");
    printf("[1]Cadastrar uma nova ferramenta\n");
    printf("[2]Consultar ferramenta por Setor\n");
    printf("[3]Verificar status de garantia\n");
    printf("[4]Sair do sistema\n");
    printf("\n");
    //Resultado das opcoes devem aparecer abaixo
    printf("====================================\n");
    printf("Digite a opcao: \n");
    printf("====================================\n");
    return 0;
}
