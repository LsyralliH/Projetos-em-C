/*
//1
#include <stdio.h>
#include <math.h>

int main(){
    float x=0;

    printf("Digite um número\n");
    scanf("%f", &x);

    if(x>=0){
        printf("O cubo de %0.1f é %0.1f\n", x, x*x*x);
        printf("A raiz quadrada de %0.1f é %0.1f\n", x, sqrt(x));
    } else{
        printf("Esse é um número negativo");
    }

    return 0;
}*/


/*
//2
#include <stdio.h>

int main(){
    int x=0;
    
    printf("Digite um número entre 12 e 20\n");
    scanf("%d", &x);

    while(x<12 || x>20){
        printf("Entrada inválida\n");
        printf("Digite outro número entre 12 e 20\n");
        scanf("%d", &x);
    }
    

    printf("O NÚMERO DIGITADO FOI: %d\n", x);

    return 0;

}*/


/*
//3
#include <stdio.h>

int main(){
    int dia=0;

    printf("Digite um número entre 1 e 7, que correspondem aos dias da semana:\n");
    scanf("%d", &dia);
    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-Feira\n");
        break;
    case 3:
        printf("Terça-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-Feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
    printf("Entrada inválida\n");
        break;
    }
    return 0;

}*/

/*
//4
#include <stdio.h>

int main(){
    int x=0, quantidade=0, quantidade2=0;

    printf("Digite 10 números:\n");
    for(int i =1;i<=10;i++){
    scanf ("%d", &x);
    if(x%2==0){
        quantidade++;
    }
    else {
        quantidade2++;
    }
    
    }

    printf("%d número(s) pares\n", quantidade );
    printf("%d número(s) ímpares\n", quantidade2 );

    return 0;
}*/


/*
//5
#include <stdio.h>

int main(){
    float x1=0, x2=0;
    char operador;

    printf(" '+' - Soma\n");
    printf(" '-' - Subtração\n");
    printf(" '*' - Multiplicação\n");
    printf(" '/' - Divisão\n\n");

    printf("Escolha um desses operadores:\n");
    scanf("%c", &operador);

    printf("Digite um número:\n");
    scanf("%f",&x1);
    printf("Digite um segundo número:\n");
    scanf("%f",&x2);

    if (operador =='+'){
        printf("A soma é %0.1f", x1+x2);
    }
    else if(operador=='-'){
        printf("A subtração é %0.1f", x1-x2);
    }else if(operador=='*'){
        printf("A multiplicação é %0.1f", x1*x2);
    }else if(operador=='/'){
        printf("A divisão é %0.1f", x1/x2);
    }else{
        printf("Operação inválida");
    }

    return 0;
}*/


/*
//6
#include <stdio.h>

int main(){
    printf("Números pares entre 79 e 201:\n");

    for(int i =79;i<=201;i++){
        if( i % 2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}*/

/*
//7
#include <stdio.h>

int main(){
    int x=0, resultado=0;

    do{
    printf("Digite um número inteiro entre 1 e 10:\n");
    scanf("%d", &x);
    }while (x<1 || x>10);
    
    printf("TABUADA DO %d\n", x);
    for(int y =0; y<=10; y++){
        resultado=x*y;
        printf("%d x %d = %d\n", x, y, resultado);  
    }
    return 0;

}*/

/*
//8
#include <stdio.h>

int main(){
    printf("Números de 7 até 61:\n");

    for(int i =7;i<=61;i++){
            printf("%d\n", i);
        
    }
    return 0;
}*/

/*
//9
#include <stdio.h>

int main(){
    int x=0, quantidade=0, quantidade2=0;

    printf("Digite 10 números:\n");
    for(int i =1;i<=10;i++){
    scanf ("%d", &x);
    if(x>=10 && x<=20){
        quantidade++;
    }
    else {
        quantidade2++;
    }
    
    }

    printf("%d número(s) estão no intervalo de [10,20]\n", quantidade );
    printf("%d número(s) não estão no intervalo de [10,20]\n", quantidade2 );

    return 0;
}*/


/*
//10
#include <stdio.h>

int main(){
    int x=1;
    while(x<=11)
    {
        printf("%d - HELLO WORLD!\n", x);
        x++;
    }
    return 0;
}*/

/*
//11
#include <stdio.h>

int main(){
    printf("Números de 1 até 50:\n");
    int x=1;
    while(x<=50){
            printf("%d\n", x);
            x++;
    }
    return 0;
}*/


/*
//12
#include <stdio.h>

int main(){
    float x=1, nota=0, soma=0;
    printf("Digite 3 notas:\n");
    
    while(x<=3){
        scanf("%f",&nota);
        soma+=nota;
        x++;
    }

    printf("A média das três notas é: %0.2f", soma/3);
    return 0;
}*/

/*
//13
#include <stdio.h>

int main(){
    int x=0, y=0, resultado=0;

    printf("Digite um número:\n");
    scanf("%d", &x);
    
    printf("TABUADA DO %d\n", x);
    while (y<=10)
    {
        resultado=x*y;
        printf("%d x %d = %d\n", x, y, resultado); 
        y++; 
    }
    return 0;

}*/


/*
//14
#include <stdio.h>
#include <stdlib.h>

int main(){
    int id=0, contadorSal=0, contadorSexo=0, idMaior=0, idMenor =150, idSal = 0;
    float sal=0, somaSal=0, salMenor  = 9999;
    char sexo, sexoSal;

    while (id>=0)
    {
        //IDADE
        printf("IDADE:\n");
        scanf("%d", &id);
        if (id<0)
        {
            break;
        }
        if (id<idMenor){
            idMenor = id;
        } 
        else if (id>idMaior){
            idMaior = id;
        }


        //SALARIO
        printf("SALÁRIO:\n");
        scanf("%f", &sal);

        //SEXO
        do
        {
            printf("SEXO (M/F):\n");
            scanf(" %c", &sexo);
            } while (sexo !='f' && sexo!='F'&& sexo !='m' && sexo!='M');
            if(sexo =='f'|| sexo == 'F'){
                contadorSexo++;
                }

        //SALARIO
        contadorSal++;
        somaSal+=sal;
        if (sal<salMenor){
            salMenor = sal;
            sexoSal = sexo;
            idSal = id;
        }       

        system("cls");
    }

    system("cls");

    //A
    printf("A média dos salários do grupo: R$ %0.3f\n",somaSal/contadorSal);

    //B
    printf("A maior idade do grupo: %d ano(s)\n", idMaior);
    printf("A menor idade do grupo: %d ano(s)\n",  idMenor);

    //C
    printf("A quantidade de mulheres na região: %d mulher(es)\n",contadorSexo );

    //D
    printf("A idade da pessoa com o menor salário: %d ano(s)\n", idSal);
    printf("O sexo da pessoa com o menor salário: %c\n", sexoSal);
    
    
}*/

/*
//15
#include <stdio.h>

int main(){
    int x=0;

    do{
    printf("Digite um número:\n");
    scanf("%d", &x);
    }while (x>1);
    
    return 0;

}*/


/*
//16
#include <stdio.h>

int main(){
    int x=0, soma=0;

    do{
    printf("Digite um número:\n");
    scanf("%d", &x);
    soma+=x;
    }while (x!=0);

    printf("A soma dos números digitados: %d\n", soma);

    return 0;

}*/