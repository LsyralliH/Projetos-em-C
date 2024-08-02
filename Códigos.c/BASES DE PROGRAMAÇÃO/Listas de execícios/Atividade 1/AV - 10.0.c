//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>
#include <math.h>

//QUESTÃO 10
int main(){
   double n1, n2, raiz, seno, mod;
   printf("Digite um numero:\n");
   scanf("%lf", &n1);
   printf("Digite outro numero:\n");
   scanf("%lf", &n2);

   /*A*/printf("A soma dos numeros: %lf\n", n1+n2);

   /*B*/printf("O produto do primeiro numero pelo quadrado do segundo: %lf\n", n1*(n2*n2));

   /*C*/printf("O quadrado do primeiro numero: %lf\n", n1*n1);

   raiz = sqrt((n1*n1)+(n2*n2));
   /*D*/printf("A raiz quadrada da soma dos quadrados: %lf\n",raiz);

   seno = sin(n1-n2);
   /*E*/printf("O seno da diferença do primeiro numero pelo segundo: %lf\n",seno);

   mod = fabs(n1);
   /*F*/printf("O modulo do primeiro numero: %0.1lf\n",mod);


   return 0;
}
