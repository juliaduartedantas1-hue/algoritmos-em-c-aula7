#include <stdio.h>

int main() {
    // Declaração das variáveis
    int opcao;           // escolha do usuário no menu
    float total = 0;     // acumulador: cofrinho começa vazio

    do {
        // Mostrar o menu
        printf("\n--- COFRINHO DIGITAL ---\n");
        printf("1 - Moeda de R$0,50\n");
        printf("2 - Moeda de R$1,00\n");
        printf("3 - Moeda de R$2,00\n");
        printf("0 - Parar e mostrar o total\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        // Decidir qual moeda somar
        if (opcao == 1) {
            total += 0.50;
        } else if (opcao == 2) {
            total += 1.00;
        } else if (opcao == 3) {
            total += 2.00;
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

        // Mostrar o saldo parcial (se não for sair)
        if (opcao != 0) {
            printf("Saldo atual: R$%.2f\n", total);
        }

    } while (opcao != 0);   // repete enquanto não escolher 0

    // Mostrar o total final
    printf("\nTotal acumulado no cofrinho: R$%.2f\n", total);

    return 0;
}
