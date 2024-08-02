//LAÍS HILLARY SANTOS DE MIRANDA

/*
//1
#include <stdio.h>

int main() {
    for(int i =0;i<=100;i++){
        if( i % 2==0){
            printf("%d\n", i);
        }
        else{
            printf("");
        }
    }
    return 0;
}*/

/*
//2
#include <stdio.h>

int main() {
printf("Múltiplos de 3 até 100:\n");

for(int i = 1; i <= 100; i++) {
  if(i % 3 == 0){
      printf("%d\n", i);
  }
}
}*/


/*
//3
#include <stdio.h>
int main() {
    for(int i =100;i>=1;i--){
       
            printf("%d\n", i);
    }
    return 0;
}*/

/*
//4
#include <stdio.h>
int main() {
    int x;
    printf("Digite um número:\n");
    scanf("%d", &x);

    for(int i =0;i<=x;i++){
       
            printf("%d\n", i);
    }
    return 0;
}*/


/*
//5
#include <stdio.h>

int main() {
    for(int i=1;i<=100;i++){
        if(i==51){
        break;
        }
        printf("%d\n", i);
    }
   
    return 0;
}*/


/*
//6
#include <stdio.h>

int main() {
    int x, num;
    for (int x = 1;x<=10; x++){
    printf("\nTABUADA DO %d\n", x);
   
    for(int num =0;num<=10; num++){
        printf("%d x %d = %d\n",x, num, x*num);
        }
       
        }
        return 0;
}*/


/*
//7
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
//8
#include <stdio.h>
#include <string.h>

int main(){
      char palavra [50], fim[50];
    do
    {
    printf("Digite uma palavra aleatória\n");
    scanf("%s", palavra);

    printf("Deseja continuar?(Se deseja encerrar o programa digite \"fim\"): ");
    scanf("%s", fim);
    if( strcmp (fim,"fim")==0){
        break;
      }
    }while(1);
    printf(" A palavra foi: %s",palavra);

    printf("PRGRAMA ENCERRADO");

    return 0;
}*/

/*
//9
#include <stdio.h>
#include <string.h>

int main(){
    printf("Números de 1 até 10:\n");
    int x=1;
    char para [10];
    do{
       
        for(int i =1;i<=10;i++){
        printf("%d\n", i);
    }
       
        printf("Digite 'parar' para encerrar: ");
        scanf("%s", para);
       
        if( strcmp (para,"parar")==0){
        break;
      }
    }while(1);

    printf("PRGRAMA ENCERRADO");

    return 0;
}*/


/*
//10
#include <stdio.h>
#include <string.h>

int main(){
   
    char para [10];
    do{

        for(int i =1;i<=1;i++){
        printf("HELLO WORLD!\n", i);
    }

        printf("Digite 'parar' para encerrar:\n ");
        scanf("%s", para);

        if( strcmp (para,"parar")==0){
        break;
      }
    }while(1);

  printf("PRGRAMA ENCERRADO");

    return 0;
}*/



       

       

