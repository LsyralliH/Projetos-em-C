#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *numeros, quantidade_numeros;
    int i, aux;
    int trocado;

    printf("Quantos números você vai ordenar?\n");
    scanf("%d", &quantidade_numeros);
    if(quantidade_numeros <= 0 || quantidade_numeros > 1000000) {
        
        return 1;
    }
    numeros = (int *) malloc(quantidade_numeros * sizeof(int));
    if(numeros == NULL) {
        printf("Falha na alocação\n");
        return 1;
    }
    for(i = 0; i < quantidade_numeros; i++) {
        printf("\nDigite o número %i:\n", i + 1);
        scanf("%d", numeros + i);
    }
    do {
        trocado = 0;
        for(i = 0; i < quantidade_numeros - 1; i++)
            if(numeros[i] > numeros[i + 1]) {
                trocado = 1;
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
    } while(trocado);
    printf("\nA matriz ordenada:\n");
    for(i = 0; i < quantidade_numeros; i++)
        printf("%d ", numeros[i]);
    printf("\n");
    free(numeros);
    return 0;
}
