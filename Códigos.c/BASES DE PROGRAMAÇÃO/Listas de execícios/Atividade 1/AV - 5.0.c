//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>

//QUESTÃO 5
int main(){
    char nome[30];
    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    printf("O NOME DIGITADO FOI: ");
    puts(nome);
    return 0;

}
