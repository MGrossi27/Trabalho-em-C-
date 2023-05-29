#include <stdio.h>
#include "funcoes.h"

int main() {
    int tamanho = 5;  
    int vetor[] = {5, 2, 8, 1, 3};  

    printf("Escolha o método de ordenação:\n");
    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("Opção: ");
    int opcao;
    scanf("%d", &opcao);

    printf("Vetor original: ");
    imprimirVetor(vetor, tamanho);

    switch (opcao) {
        case 1:
            bubbleSort(vetor, tamanho);
            printf("Vetor ordenado (Bubble Sort): ");
            imprimirVetor(vetor, tamanho);
            break;
        case 2:
            insertionSort(vetor, tamanho);
            printf("Vetor ordenado (Insertion Sort): ");
            imprimirVetor(vetor, tamanho);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
