#include <stdio.h>

int main() {
    int numeroLinhas;

    // Solicita ao usuário um número
    printf("Digite um número: ");
    scanf("%d", &numeroLinhas);

    // Verifica se o número inserido é válido (maior que 0)
    if (numeroLinhas > 0) {
        int i = 1; // Inicializa a variável de controle

        do {
            // Imprime os pares de *#
            int j = 0;
            do {
                if (j % 2 == 0) {
                    printf("*");
                } else {
                    printf("#");
                }
                j++;
            } while (j < i);

            printf("\n"); // Pula para a próxima linha
            i++;
        } while (i <= numeroLinhas); // Condição de saída do loop
    } else {
        printf("O número inserido não é válido.\n");
    }

    return 0;
}


