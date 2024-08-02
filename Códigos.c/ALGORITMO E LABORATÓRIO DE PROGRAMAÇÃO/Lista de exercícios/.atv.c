#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    char nome[60];
    printf("Digite seu nome:\n");
    fgets(nome,sizeof(nome),stdin);

    system("cls");

    SYSTEMTIME hora;
    GetLocalTime(&hora);
    int horas = hora.wHour;

    if(horas >=5 && horas<=12)
    {
        printf("Bom dia, %s", nome);
    }
    else if (horas>12 && horas<=18)
    {
        printf("Boa tarde, %s", nome);
    }
    else if (horas>18 && horas<=24)
    {
        printf("Boa noite, %s", nome);
    }
   else{
        printf("Boa madrugada, %s", nome);
    }

    return 0;
}
