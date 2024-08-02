//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>
#include <locale.h>

//QUESTÃO 4
int main(){
    float comprimento, largura, area=0;
    printf("Digite a largura do terreno(em metros):\n");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno(em metros):\n");
    scanf("%f", &comprimento);
    area = (comprimento*largura);
    printf("A area do terreno e %f metros", area);
    return 0;

}
