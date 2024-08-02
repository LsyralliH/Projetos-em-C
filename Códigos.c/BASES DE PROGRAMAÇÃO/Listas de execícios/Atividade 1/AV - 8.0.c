//LAÍS HILLARYY SANTOS DE MIRANDA

#include <stdio.h>

//QUESTÃO 8
int main(){
    int x, num;
        for(int x = 1;x<=9; x++){
            printf("\nTABUADA DO %d\n", x);
                for(int num =0;num<=10; num++){
                    printf("%d x %d = %d\n",x, num, x*num);
                   }
        }
        return 0;

}
