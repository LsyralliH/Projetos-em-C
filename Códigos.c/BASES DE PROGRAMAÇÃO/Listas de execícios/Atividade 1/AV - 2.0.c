//LA�S HILLARYY SANTOS DE MIRANDA

#include <stdio.h>
#include <locale.h>

//QUEST�O 2
int main(){
    setlocale(LC_ALL, "Portuguese");
    int min, hora;
    printf("Que horas s�o?(FORMATO 24h)\n");
    scanf("%d", &hora);
    min = hora*60;
    printf("Se passaram %d minutos", min);
    return 0;

}
