#include <stdio.h>

int main() {
    // Declaração das variáveis
    float consumo;       // consumo do morador atual
    float soma = 0;      // acumulador: começa em ZERO
    float media;         // média geral

    // Repete 5 vezes (um morador por volta)
    for (int i = 1; i <= 5; i++) {

        // Pedir consumo
        printf("Digite o consumo do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        // Decisão: até 20 m3 é "dentro da média"
        if (consumo <= 20) {
            printf("Morador %d: dentro da media.\n\n", i);
        } else {
            printf("Morador %d: acima da media.\n\n", i);
        }

        // Acumular: soma o consumo deste morador ao total
        soma += consumo;
    }

    // Calcular a média (FORA do loop, uma vez só)
    media = soma / 5;

    // Mostrar o resultado final
    printf("Consumo medio geral: %.2f m3\n", media);

    return 0;
}
