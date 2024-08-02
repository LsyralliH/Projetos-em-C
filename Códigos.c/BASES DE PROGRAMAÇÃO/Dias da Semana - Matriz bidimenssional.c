#include <stdio.h>

int main(void) 
{
	char dias[7][10] = {"Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sábado"};
	int dia;
	scanf("%d", &dia);
	if (dia >= 0 && dia < 7)
	{
		printf("Versão do ponteiro: %s\n", dias + dia);
		printf("Versão do índice de matriz: %s\n", dias[dia]);
	}
	else
		puts("Erro, essse dia não existe.");
	return 0;
}