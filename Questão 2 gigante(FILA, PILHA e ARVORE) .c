#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


int main() {
    int opcao;

do {
printf("\nMenu Principal:\n");
printf("1. Executar Pilha\n");
printf("2. Executar Fila\n");
printf("3. Executar Árvore\n");
printf("0. Sair\n");
printf("Opção: ");
scanf("%d", &opcao);

switch (opcao) {
case 1: {
Pilha* pilha = criarPilha();
int opcaoPilha;
do {
printf("\nMenu da Pilha:\n");
printf("1. Empilhar\n");
printf("2. Desempilhar\n");
printf("3. Imprimir Pilha\n");
printf("4. Limpar Pilha\n");
printf("5. Imprimir Topo da Pilha\n");
printf("0. Voltar\n");
printf("Opção: ");
scanf("%d", &opcaoPilha);

switch (opcaoPilha) {
case 1: {
int dado;
printf("Digite o elemento a ser empilhado: ");
scanf("%d", &dado);
empilhar(pilha, dado);
break;
}
case 2:
desempilhar(pilha);
break;
case 3:
imprimirPilha(pilha);
break;
case 4:
limparPilha(pilha);
break;
case 5:
imprimirTopoPilha(pilha);
break;
case 0:
printf("Voltando ao menu principal...\n");
break;
default:
printf("Opção inválida!\n");
break;
}
} while (opcaoPilha != 0);

free(pilha);
break;
}
case 2: {
Fila* fila = criarFila();
int opcaoFila;

do {
printf("\nMenu da Fila:\n");
printf("1. Enfileirar\n");
printf("2. Desenfileirar\n");
printf("3. Imprimir Fila\n");
printf("4. Limpar Fila\n");
printf("5. Maior elemento da Fila\n");
printf("6. Menor elemento da Fila\n");
printf("0. Voltar\n");
printf("Opção: ");
scanf("%d", &opcaoFila);

switch (opcaoFila) {
case 1: {
int dado;
printf("Digite o elemento a ser enfileirado: ");
scanf("%d", &dado);
enfileirar(fila, dado);
break;
}
case 2:
desenfileirar(fila);
break;
case 3:
imprimirFila(fila);
break;
case 4:
limparFila(fila);
break;
case 5: {
if (fila->frente != NULL) {
 int maiorElemento = encontrarMaiorElementoFila(fila);
printf("Maior elemento da Fila: %d\n", maiorElemento);
} else {
printf("A Fila está vazia.\n");
}
break;
}
case 6: {
if (fila->frente != NULL) {
 int menorElemento = encontrarMenorElementoFila(fila);
printf("Menor elemento da Fila: %d\n", menorElemento);
} else {
printf("A Fila está vazia.\n");
}
break;
}
case 0:
printf("Voltando ao menu principal...\n");
break;
default:
printf("Opção inválida!\n");
break;
 }
 } while (opcaoFila != 0);

free(fila);
break;
}
case 3:
printf("Executando Árvore...\n");
break;
case 0:
printf("Encerrando o programa...\n");
break;
default:
printf("Opção inválida!\n");
break;
}
    } while (opcao != 0);

    return 0;
}
