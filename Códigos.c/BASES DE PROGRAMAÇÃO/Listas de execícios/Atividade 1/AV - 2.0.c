//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>
#include <locale.h>

//QUESTÃO 2
int main(){
    setlocale(LC_ALL, "Portuguese");
    int min, hora;
    printf("Que horas são?(FORMATO 24h)\n");
    scanf("%d", &hora);
    min = hora*60;
    printf("Se passaram %d minutos", min);
    return 0;

}
