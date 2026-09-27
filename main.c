#include <stdio.h>
#include "biblioteca.h"

int main() {

    int opcao;

    do {
        exibirMenu();

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    } while (opcao != 0);

    return 0;
}