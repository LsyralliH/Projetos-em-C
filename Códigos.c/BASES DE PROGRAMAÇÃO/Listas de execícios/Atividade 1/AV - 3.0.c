//LA�S HILLARYY SANTOS DE MIRANDA

#include <stdio.h>

//QUEST�O 3
int main(){
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);
    media = (nota1+nota2+nota3)/3;
    printf("A media das notas sao:%2.f",media);
    return 0;
}
