//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>

//QUESTÃO 1
int main(){
     float sal_min, sal_pes, qtd_sal_min;
    printf("Informe o valor do salario minimo: \n");
    scanf("%f", &sal_min);
    printf("Informe o valor da salario da pessoa:\n");
    scanf("%f", &sal_pes);
    qtd_sal_min = (sal_pes/sal_min);
    printf("O valor do salario minimo e: R$%f\n", sal_min);
    printf("O salário da pessoa e: R$%f\n", sal_pes);
    printf("A pessoa recebe %2.f salario(s) minimo(s)\n", qtd_sal_min);
    return 0;

}
