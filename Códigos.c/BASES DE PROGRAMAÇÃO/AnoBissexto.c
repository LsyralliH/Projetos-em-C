#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano:\n");
    scanf("%d", &ano);
	if (ano % 400 == 0 || (ano % 100 != 0 && ano % 4 == 0)){
	    printf("%d é um ano bissexto", ano);
	}else{
	    printf("%d não é um ano bissexto", ano);
	}
	return 0;
}