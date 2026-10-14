#include <stdio.h>

int main() {
    // Declaração das variáveis
    float nota;          // nota do cliente atual
    float soma = 0;      // acumulador: começa em ZERO
    float media;         // média geral

    // Repete 10 vezes (um cliente por volta)
    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        // Acumular a nota
        soma += nota;
    }

    // Calcular a média (fora do loop)
    media = soma / 10;
    printf("\nMedia geral do atendimento: %.2f\n", media);

    // Decisão sobre a média final
    if (media < 7) {
        printf("ALERTA: o atendimento esta abaixo do esperado!\n");
    }

    return 0;
}
