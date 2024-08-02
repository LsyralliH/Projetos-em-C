//ESTRUTURAS DE REPETI��O
//1.	Desenvolva um programa que imprima os n�meros de 1 a 10 usando uma estrutura de repeti��o for.
#include <stdio.h>

int main(){
    /*for(int i =1; i<=10; i++) {
        printf("%d\n", i);
    }
    return 0;

}*/

//2.	Elabore um programa que calcule a soma dos n�meros pares de 1 a 50 usando um loop for.
//      1
    /*int soma;
    for(int i = 2; i<=50; i+=2){
        soma +=i;
    }
    printf("%d\n", soma);
    return 0;
}

//       2
    int soma;
    for(int i = 1; i<=50; i++){
        if(i%2==0){
            soma +=i;
            }
    }
    printf("%d\n", soma);
    return 0;
}*/

//3.	Crie um programa que solicite n�meros ao usu�rio e calcule a m�dia, encerrando a entrada quando o n�mero 0 for digitado, utilizando while.

    /*float x, soma=0, m=0, media;
    printf("Digite suas notas(O programa calcula sua media quando digitar 0:\n");
    while(x!=0){
        scanf("%f", &x);
        soma+=x;
        m++;
        if (x==0){
            break;
        }

    }
    media =soma/(m-1);
    printf("A media do numeros e: %2.f", media);
    return 0;
}*/

//4.	Implemente um programa que exiba os n�meros de 1 a 5 usando um loop do-while.

    /*int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while(i<=5);
    return 0;
}*/



//5.	Desenvolva um programa que pe�a ao usu�rio para adivinhar um n�mero entre 1 e 10, encerrando quando o palpite for correto, usando do-while.
    /*int x, y;
    y = 6;
    do{
        printf("Adivinhe um numero entre 1 e 10:\n");
        scanf("%d", &x);
        if(x==y){
            printf("\n%d e o numero correto\n", x);
            break;
        }
    } while(x<=10);
    return 0;*/
}



