//COMBINA��ES DE ESTRUTURAS - CONDICIONAIS E REPETI��O
/*
#include <stdio.h>

int main() {*/
//1.	Fa�a um programa que imprima os n�meros de 1 a 20, mas substitua os m�ltiplos de 3 por "Fizz" e os m�ltiplos de 5 por "Buzz" usando if e for
        /*for(int x = 1; x<=20; x++){
        if(x%3==0){
            printf("Fizz\n");
        }else if("x%5==0"){
            printf("Buzz\n");
        }else{
            printf("%d\n",x);
        }


    }
    return 0;
}*/


//2.	Escreva um programa que solicite ao usu�rio um n�mero e calcule seu fatorial usando for.
        /*int y, fat=1;
        printf("Digite um numero:\n");
        scanf("%d",&y);
        if(y>=0){
        for(int x=1;x<=y;x++){
            fat*=x;
        }
        printf("O fat orial do numero e: %d ", fat);
        } else{
            printf("N�o existe fatorial de numero negativo");
        }
        return 0;
}*/

//3.	Desenvolva um programa que simule o lan�amento de um dado 10 vezes e conte quantas vezes o n�mero 6 aparece, utilizando for.


    /*int contaseis=0;
    // Inicializar a fun��o rand
    srand(time(NULL));
    for(int x = 1; x<=10; x++){
        int resultado = rand() % 6 + 1; //Essa express�o � usada para gerar numeros aleatorios de 1 a 6
            if(resultado==6){
                contaseis++;
            }

        printf("Lancamento %d: %d\n", x, resultado);
    }

    printf("O numero 6 apareceu %d vez(es) em 10 lancamentos.\n", contaseis);

    return 0;
}*/


//4.	Crie um programa que encontre e exiba os n�meros primos de 1 a 50 usando for e if.
       /* for(int p = 2; p<=50;p++){
                int i =1;
            for(int r = 2; r*r<=p; r++){
                 if( p%r==0){
                    i =0;
                 break;

            }
        }
            if(i){
                printf("%d\n",p);
            }


        }

        return 0;
}*/


/*int p, i=2;
for(int p = 2; p<=50;p++){
        int r =1;
for(i=2;i<=p/2;i++){
    if( p%i==0 ){
        r = 0;
        break;
}

    }
            if (r == 1) {
            printf("%d\n", p);
}
}
return 0;
}*/


//5.	Implemente um programa que calcule a m�dia de uma lista de n�meros fornecida pelo usu�rio, desconsiderando os valores negativos, utilizando while e if.

        /*int x,m=0,soma=0;
        printf("Forne�a uma lista de numeros:\n");
        while(x!=0){
            scanf("%d",&x);
            m++;
            if(x<0){
                soma-=x;;
            } else{
            soma+=x;}
        }
        int media = soma/(m-1);
        printf("%d", media);
        return 0;
}*/

//6.	Elabore um programa que solicite ao usu�rio a base e o expoente e calcule a pot�ncia usando um loop while.

    /*int x, y, p=1, z=1;
    printf("Digite a base de um numero:\n");
    scanf("%d", &x);
    printf("Agora digite um expoente pra essa base:\n");
    scanf("%d", &y);
    while(z<=y){
        p= p*x;
        z++;
        }
        printf("A potencia e: %d\n", p);
    return 0;
}*/


//7.	Fa�a um programa que imprima a tabela de multiplica��o de 7 at� 10 usando for.
        /*int x, num;
        for(int x = 7;x<=10; x++){
            printf("\nTABELA DE MULTIPLCACAO DE %d\n", x);
                for(int num =0;num<=10; num++){
                    printf("%d x %d = %d\n",x, num, x*num);
                   }
        }
        return 0;
}*/
  /*if(x==7){
    printf("%d x %d = %d\n",x, num, x*num);
    } else if(x==8){
        printf("%d x %d = %d\n",x, num, x*num);
    } else if(x==9){
        printf("%d x %d = %d\n",x, num, x*num);
    } else if(x==10){
        printf("%d x %d = %d\n",x, num, x*num);
}*/


//8.	Desenvolva um programa que calcule a soma dos d�gitos de um n�mero fornecido pelo usu�rio usando um loop do-while.
    /*int num, soma =0, x;
    printf("Digite um numero: \n");
    scanf("%d", &num);
   do {
        x = num%10;
        soma+=x;
        num = num / 10;

       }while(num!=0);

       printf("A soma dos d�igitos e: %d", soma);


    return 0;
}*/


//9.	Escreva um programa que determine se um n�mero � primo ou n�o, utilizando um loop do-while e if.


/*int p, i=2;
printf("Digite um numero:\n");
scanf("%d", &p);
do {

    if( p%i==0 && p!=i || p<2){
        printf("Esse numero nao e primo");
        return 0;
    }
    i++;
    }while(i<=p/2);
        printf("Esse numero e primo");


return 0;
}*/


//10.	Crie um programa que solicite ao usu�rio um n�mero e, usando um loop while, imprima os n�meros �mpares de 1 at� esse n�mero.

        /*int x, i=0;
        printf("Digite um numero maior que 0:\n");
        scanf("%d", &x);
        printf("\nOs numeros impares de 1 ate %d sao:\n", x);
        while(i<=x){
            if(i%2!=0){
            printf("%d\n", i);
        }
        i++;
        }

        return 0;
}*/








/*  3.  rand(): Esta fun��o em C retorna um n�mero pseudoaleat�rio no intervalo de 0 a RAND_MAX. RAND_MAX � uma constante definida na biblioteca padr�o de C e representa o valor m�ximo que rand() pode gerar.

% 6: O operador % (m�dulo) � usado para obter o resto da divis�o por 6. Isso significa que a express�o rand() % 6 resultar� em um n�mero entre 0 e 5.

+ 1: Adicionando 1 � express�o rand() % 6, o intervalo � deslocado para 1 a 6. Agora, a express�o rand() % 6 + 1 gera um n�mero aleat�rio no intervalo de 1 a 6, inclusivo.*/


/*
    int n, quad;
    while(1){
        printf("Digite um valor a ser multiplicado:\n ");
        scanf("%d", &n);

        if(n==0){

        break;
    } else{
        printf("QUADRADO DE %d = %d\n", n, n*n);
    }

    }
    return 0;
    */
/*
    int n, y=0, soma=0;
    printf("DIGITE UM NUMERO:");
    scanf("%d", &n);
    while(y<=n){
        soma+=y;
        y++;

    }
    printf("A SOMA �: %d\n", soma);

    return 0;
    }*/
/*
    int n, y=0;
    printf("DIGITE UM NUMERO:");
    scanf("%d", &n);
    printf("OS NUMEROS IMPARES DE 0 ATE %d:\n",n);
    while(y<=n){

         if(y%2!=0){
           printf("\t%d\n", y);

        }
        y++;
    }

    return 0;
    }
*/
