#include <stdio.h>

int main() {
    int opcao;
    float total = 0.0;

    do {
        printf("\n1-R$0,50 | 2-R$1,00 | 3-R$2,00 | 0-Sair\nEscolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) total += 0.50;
        else if (opcao == 2) total += 1.00;
        else if (opcao == 3) total += 2.00;
        else if (opcao != 0) printf("Opcao invalida!\n");

    } while (opcao != 0);

    printf("Total acumulado: R$ %.2f\n", total);
    return 0;
}