/*7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Imprima o vetor, o maior elemento e a posição que ele se encontra. */

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x [10], valmaior=0, posicao=0;

    printf("Escreva 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++)
    { 
        scanf("%d",&x[i]); 
        
        if(x[i]>valmaior){
        valmaior = x[i];
        posicao = i +1;
        }
    }
    system("cls");

     printf("Os numeros digitados:\n");
     for (int i = 0; i < 10; i++)
     {
        printf("%d\n",x[i]);
     }

     printf("\n");
     printf("O maior valor foi: %d\n", valmaior);
     printf("Ele estava na posição %d", posicao);
    
    return 0;
}*/



//8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[6];

    printf("Escreva 6 numeros inteiros:\n");
    for (int i = 0; i < 6; i++)
    { 
        scanf("%d",&x[i]); 
        
    }
    system("cls");

     printf("Os numeros digitados em ordem inversa:\n");
     for (int i = 5; i >= 0; i--)
     {
        printf("%d\n", x[i]);
     }
    
    return 0;
}*/


//9. Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa 
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[6];

    printf("Escreva 6 numeros inteiros pares:\n");
    for (int i = 0; i < 6; i++) 
    { 
        do
        {
            scanf("%d",&x[i]);
            if (x[i] % 2 != 0){
           printf("Escreva somente numeros pares:\n");
        }
        } while (x[i] % 2 != 0);
        
    }
    system("cls");

     printf("Os numeros digitados em ordem inversa:\n");
     for (int i = 5; i >= 0; i--)
     {
        printf("%d\n", x[i]);
     }
    
    return 0;
}*/


//10. Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.
/*
#include <stdio.h>

int main()
{
    float nota[15], soma = 0;

    printf("Escreva as notas dos alunos:\n");
    for (int i = 0; i < 15; i++)
    { 
        printf("Nota %d- ", i+1);
        scanf("%f",&nota[i]); 
        soma+=nota[i];
        
    }
    
    printf("Média das notas: %0.2f", soma/15);

    return 0;
}*/

/*11. Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a quantidade de numeros negativos 
e a soma dos numeros positivos desse vetor.*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[10], soma=0;
    int negativo=0, positivo=0;

    printf("Escreva 10 numeros reais:\n");
    for (int i = 0; i < 10; i++)
    { 
        scanf("%f",&x[i]); 

        if (x[i]<0)
        {
           negativo++;
        }else if (x[i]>=0)
        {
            positivo++;
            soma+=x[i];
        }
        
    }
    
    printf("Quantidade de numeros negativos: %d\n", negativo);
    printf("Quantidade de numeros positivos: %d\n", positivo);
    printf("Soma dos numeros positivos: %0.2f", soma);
    
    return 0;
}*/



/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a media 
dos valores.*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[5], soma=0, xmaior =0, xmenor=999;

    printf("Escreva 5 valores:\n");
    for (int i = 0; i < 5; i++)
    { 
        scanf("%f",&x[i]); 

        if (x[i]>xmaior)
        {
            xmaior = x[i];
        }else if (x[i<xmenor])
        {
            xmenor = x[i];
        }

        soma+=x[i];
        
    }

    system("cls");

   printf("Os valores digitados:\n");
   for (int i = 0; i < 5; i++)
   {
    printf("%0.1f\n",x[i]);

    }
    printf("\n");
    printf("O valor maior foi: %0.2f\n", xmaior);
    printf("O valor menor foi: %0.2f\n", xmenor);
    printf("A média do valor maior e do valor menor foi: %0.2f\n", (xmaior+xmenor)/2);
    printf("A média de todos os valores digitados foi: %0.2f\n", soma/5);

    return 0;
}*/


//13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[5], xmaior =0, xmenor=999;
    int posicao_menor =0, posicao_maior=0;

    printf("Escreva 5 valores:\n");
    for (int i = 0; i < 5; i++)
    { 
        scanf("%f",&x[i]); 

        if (x[i]>xmaior)
        {
            xmaior = x[i];
            posicao_maior = i+1;
        }
        else if (x[i]<xmenor)
        {
            xmenor = x[i];
            posicao_menor = i+1;
        }
        
    }

    printf("O maior valor se encontra na posição %d\n", posicao_maior);
    printf("O menor valor se encontra na posição %d", posicao_menor);


    return 0;
}*/
