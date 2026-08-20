# 💻 Estudos em Linguagem C

Repositório com exercícios e protótipos desenvolvidos durante meus estudos de lógica de programação em C.

## 📁 Arquivos

### `variaveis.c`
Exercício introdutório sobre declaração de variáveis e formatação de saída com `printf`. Cobre os tipos primitivos `int`, `float` e `char`, e os especificadores de formato `%d`, `%.2f` e `%c`.

```c
int idade = 25;
int idade2 = 77;
float altura = 1.75;
char inicial = 'J';
```

### `Menu_visual.c`Q
Exercício de aula sobre construção de menus visuais em terminal usando bibliotecas da linguagem C. Utiliza a `windows.h` (função `Sleep()`) para simular uma sequência de carregamento e a `stdlib.h` (`system("cls")`) para limpar o terminal, antes de exibir um menu de exemplo para um sistema fictício de controle de ferramentas:

1. Cadastrar uma nova ferramenta
2. Consultar ferramenta por setor
3. Verificar status de garantia
4. Sair do sistema

> ⚠️ Este arquivo depende de `windows.h`, então só compila no Windows. É um exercício focado na interface do menu — a lógica das opções (cadastro, consulta, verificação) não faz parte do escopo.

## ▶️ Como compilar e executar

Com o GCC instalado:

```bash
gcc variaveis.c -o variaveis
./variaveis
```

```bash
gcc Menu_visual.c -o menu_visual
./menu_visual
```

## 🎯 Objetivo

Repositório de exercícios de aula sobre os fundamentos da linguagem C: tipos de dados, entrada/saída formatada e uso de bibliotecas padrão para construção de interfaces de terminal.

## 🛠️ Tecnologias

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
