#include <stdio.h>

int main() {
    int passos, total = 0, horas = 0;

    while (total < 10000) {
        horas++;
        printf("Passos na hora %d: ", horas);
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Valor invalido!\n");
            horas--;
            continue;
        }
        total += passos;
    }

    printf("Meta atingida! Total: %d passos em %d hora(s).\n", total, horas);
    return 0;
}