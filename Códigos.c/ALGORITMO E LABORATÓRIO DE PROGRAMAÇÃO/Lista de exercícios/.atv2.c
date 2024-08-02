/*
// 1 - Cria um algoritmo que conte até 10

#include <stdio.h>

int main() {
    for(int i =0;i<=10;i++){
        printf("%d\n", i);
    }
    return 0;
}*/


/*
// 2 - crie um algoritmo que imprima os valores pares

#include <stdio.h>

int main() {
    for(int i =0;i<=25;i++){
        if( i % 2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}
*/

/*
// 3 - crie um algoritmo que imprima os valores impares

#include <stdio.h>

int main() {
    for(int i =0;i<=25;i++){
        if( i % 2!=0){
            printf("%d\n", i);
        }
    }
    return 0;
}*/


/*
// 4 - Crie um algoritmo que calcule o IMC do usuário

#include <stdio.h>

int main() {
    float peso=0, altura=0;
    printf("Qual o seu peso?\n");
    scanf("%f",&peso);
    printf("Qual sua altura?\n");
    scanf("%f", &altura);

    float imc= (peso/(altura*altura));
    printf("IMC: %0.2f\n", imc);

   if(imc<18.5){
    printf("Classificação: MAGREZA");
    }
    else if(imc>=18.5 && imc<=24.9){
        printf("Classificação: NORMAL");
    }
    else if(imc>=25.0 && imc<=29.9){
        printf("Classificação: SOBREPESO");
    }
    else if(imc>=30.0 && imc<=34.9){
        printf("Classificação: OBESIDADE GRAU 1");
    }
    else if(imc>=35.0 && imc<=39.9){
        printf("Classificação: OBESIDADE GRAU 2");
    }
        else{
        printf("Classificação: OBESIDADE GRAU 3");
    }
    return 0;
}*/



/*
// 5 -Crie um algoritmo eu converta temperatura fahrenheit para celsius com a formula ((0 °C × 9/5) + 32 = 32 °F)

#include <stdio.h>

int main(){
    int fah=0, cel=0;
    printf("Qual a temperatura em Fahrenheit?\n");
    scanf("%d",&fah);
    cel = ((fah-32)*5/9);
    printf("Temperatura em Celsius:%d ºC\n", cel);
    return 0;

}*/


/*
// 6- Crie um algoritmo que calcule o fatorial de um numero qualquer

#include <stdio.h>

int main(){
    int x=0, y=0, fat=1;
    printf("Digite um numero:\n");
    scanf("%d", &x);
    if(x>=0){
        for(y=1;y<=x;y++){
        fat*=y;
    }
    printf("O fatorial de %d é %d", x, fat);
    }else{
        printf("Não existe fatorial do número %d", x);
    }
return 0;
}*/
