#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, soma=0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);
    
    do{
    printf("Digite um segundo numero inteiro (Maior que  o primeiro):\n");
    scanf("%d", &n2);
    }while(n1>n2);

    system("cls");
    
    for(int x=n1;x<=n2;x++){
        soma+=x;
    }
    printf("A soma dos numeros inteiros do numero 1 ate o numero 2: %d\n", soma);
return 0;
}
