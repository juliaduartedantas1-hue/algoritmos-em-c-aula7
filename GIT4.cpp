#include <stdio.h>

int main() {
    // Declaração das variáveis
    int passos;          // passos da hora atual
    int total = 0;       // acumulador: total de passos
    int horas = 0;       // contador: horas já registradas

    // Repete enquanto a meta de 10000 passos não for atingida
    while (total < 10000) {
        printf("Passos dados na hora %d: ", horas + 1);
        scanf("%d", &passos);

        total += passos;   // acumula os passos
        horas++;           // conta mais uma hora
    }

    // Resultado final (depois do loop)
    printf("\nMeta atingida! Total: %d passos em %d hora(s).\n", total, horas);

    return 0;
}
