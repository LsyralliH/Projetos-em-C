/*
//1 - Construa o programa que calcule o fatorial de um numero informado pelo usuário. Use função.

#include <stdio.h>

int fatorial(int x){
    if (x==0)
    {
        return 1;
    }
    return  x* fatorial(x-1);
    
}


int main()
{
    int fat;
    printf("Digite um número para calcular o fatorial:\n");
    scanf("%d", &fat);

    printf("O fatorial de %d é %d", fat, fatorial(fat));

    return 0;
}*/

/*
//2 - Construa um programa que calcule a sequência de fibonacci. Use função.

#include <stdio.h>

int fibonacci (int x){
    for (int i = 0; i <9; i++)
    {
        if (x < 2) {
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
    }

    return 0;
}

int main()
{
    int fibo[10];

    for (int i = 0; i < 9; i++) {
        printf("%d\n", fibonacci(fibo[10]));
    }
    
    return 0;

}*/

/*
//3 - Construa um programa que calcule as operações: Soma, Subtração, Multiplicação, Divisão Potenciação, Dobro, Triplo. Use Struct.

#include <stdio.h>

struct operacoes
{
    float v1;
    float v2;
    
  
};


int main(){

float pot = 1;
struct operacoes op;

printf("Digite o valor 1:\n");
scanf("%f", &op.v1);
printf("Digite o valor 2:\n");
scanf("%f", &op.v2);

printf("A soma de %0.1f e %0.1f: %0.1f\n", op.v1, op.v2, op.v1 + op.v2);
printf("A subtração de %0.1f e %0.1f: %0.1f\n", op.v1, op.v2, op.v1 - op.v2);
printf("A multiplicação de %0.1f e %0.1f: %0.1f\n", op.v1, op.v2, op.v1 * op.v2);
printf("A divisão de %0.1f e %0.1f:  %0.1f\n", op.v1, op.v2, op.v1 / op.v2);


for (int i = 1; i <= op.v2; i++)
{
    float x = op.v1;
    pot = x*pot;
}
printf("A potência de %0.1f elevado a %0.1f: %0.1f\n", op.v1, op.v2, pot);


printf("O dobro de %0.1f: %0.1f:\n", op.v1, op.v1 *2);
printf("O dobro de %0.1f: %0.1f:\n", op.v2, op.v2 *2);

printf("O triplo de %0.1f: %0.1f\n", op.v1, op.v1 *3);
printf("O triplo de %0.1f: %0.1f\n", op.v2, op.v2 *3);

return 0;

}*/



