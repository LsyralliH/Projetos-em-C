//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>

//QUESTÃO 9
int main(){
//A
    double fah, c;
    printf("Qual a temperatura em Fahrenheit?\n");
    scanf("%lf",&fah);
    c = (fah-32.0)*(5.0/9.0);
    printf("Temperatura em Celsius:%lf ºC\n", c);
    return 0;

}

/*
int main(){
    //B
    int fah, c;
    printf("Qual a temperatura em Fahrenheit?\n");
    scanf("%d",&fah);
    c = ((fah-32)*5/9);
    printf("Temperatura em Celsius:%d ºC\n", c);
    return 0;

}*/



