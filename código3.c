#include <stdio.h>

int main() {
    float nota, soma = 0.0;

    for (int i = 1; i <= 10; i++) {
        printf("Nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota invalida! Tente novamente.\n");
            i--; // Repete a tentativa para o mesmo cliente
            continue;
        }
        soma += nota;
    }

    float media = soma / 10;
    printf("Media geral: %.2f\n", media);

    if (media < 7.0) {
        printf("ALERTA: Media abaixo de 7.0!\n");
    }
    return 0;
}