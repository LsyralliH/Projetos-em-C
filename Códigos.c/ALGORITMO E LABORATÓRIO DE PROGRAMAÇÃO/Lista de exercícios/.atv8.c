#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    char destino[50];
    char partida[50];
    char data[10];
    char classe[15];
    int hora;
    int pag;
    int qtd_pas;
    int parcelas;
    float v1;
    float v2;
    float v3;

} passagemOnibus;

passagemOnibus passageiro;


void pagamento(){
    
    do{
    printf("\n*******************\n\n");
    printf("Formas de pagamento:\n");
    printf("1 - Boleto\n");
    printf("2 - Cartão de Crédito\n\n");

    printf("Escolha a opção de pagamento: \n");
    scanf("%d%*c", &passageiro.pag);
    }while (passageiro.pag>2 || passageiro.pag<1);

        if (passageiro.pag==2){
            do{
                printf("Quantas parcelas (até 3 vezes)? ");
                scanf("%d%*c", &passageiro.parcelas);
            }while(passageiro.parcelas > 3 || passageiro.parcelas < 1);

                if (passageiro.hora==1){
                    if (passageiro.qtd_pas==1){
                        passageiro.v1 = 40.17/passageiro.parcelas;
                    }
                    if (passageiro.qtd_pas==2){
                        passageiro.v1 = (2*40.17)/passageiro.parcelas;
                    }
                    if (passageiro.qtd_pas==3){
                        passageiro.v1 = (3*40.17)/passageiro.parcelas;
                    }                   
                }
                else if (passageiro.hora==2){
                    if (passageiro.qtd_pas==1){
                        passageiro.v2 = 53.67/passageiro.parcelas;
                    }
                    if (passageiro.qtd_pas==2){
                        passageiro.v2 = (2*53.67)/passageiro.parcelas;
                    }
                    if (passageiro.qtd_pas==3){
                        passageiro.v2 = (3*53.67)/passageiro.parcelas;
                    }
                }
                else if (passageiro.hora==3){
                    if (passageiro.qtd_pas==1){
                        passageiro.v3 = 49.84/passageiro.parcelas;
                    }
                    if (passageiro.qtd_pas==2){
                        passageiro.v3 = (2*49.84)/passageiro.parcelas;
                    }
                    if (passageiro.qtd_pas==3){
                        passageiro.v3 = (3*49.84)/passageiro.parcelas;
                    }
                }
            }
        
}

void adicionar(){
    printf("\nQual o nome do passageiro?\n");
    fgets(passageiro.nome, sizeof(passageiro.nome), stdin);

    printf("\nDe onde está partindo?\n");
    fgets(passageiro.partida, sizeof(passageiro.partida), stdin);

    printf("\nPara onde quer ir?\n");
    fgets(passageiro.destino, sizeof(passageiro.destino), stdin);

    printf("\nQual a data que deseja? (Dia/Mês/Ano)\n");
    scanf("%s%*c", passageiro.data);

    printf("\n*******************\n\n");

    printf("Escolha a classe que deseja(Convencional / Semi-Leito / Executivo)\n");
    scanf("%s", passageiro.classe);

    printf("\n*******************\n\n");

    do{
       printf("Passagens disponíveis:\n");
       printf("1 - 18:30 ___________________________ R$ 40,17\n");
       printf("2 - 19:00 ___________________________ R$ 53,67\n");
       printf("3 - 21:30 ___________________________ R$ 49,84\n\n");

       printf("Escolha uma opção:\n");
       scanf("%d%*c", &passageiro.hora);
    } while (passageiro.hora > 3 || passageiro.hora < 0);

    do{
    printf("Quantas passagens deseja?(MÁX:3):\n");
    scanf("%d", &passageiro.qtd_pas);
    }while(passageiro.qtd_pas > 3 || passageiro.qtd_pas < 1);

    pagamento();

    system("cls");
}

void exibir(){
    system("cls");
    printf("\nDADOS DA PASSAGEM\n\n");
        switch (passageiro.pag) {
            case 1:
                if (passageiro.hora==1){
                    if (passageiro.qtd_pas==1){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 40,17\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 18:30\n");
                    }
                    if (passageiro.qtd_pas==2){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 80,34\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 18:30\n");
                    }
                    if (passageiro.qtd_pas==3){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 120,51\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 18:30\n");
                    }
                }
                if (passageiro.hora==2){
                    if (passageiro.qtd_pas==1){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 53,67\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 19:00\n");
                    }
                    if (passageiro.qtd_pas==2){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 117,34\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 19:00\n");
                    }
                    if (passageiro.qtd_pas==3){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 176,01\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 19:00\n");
                    }
                }
                if (passageiro.hora==3){
                    if (passageiro.qtd_pas==1){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 49,84\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 21:30\n");
                    } 
                    if (passageiro.qtd_pas==2){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 99,68\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 21:30\n");
                    }
                    if (passageiro.qtd_pas==3){
                        printf("Nome do passageiro: %s", passageiro.nome);
                        printf("Você irá pagar R$ 149,52\n"); 
                        printf("Dia da viagem: %s\n", passageiro.data);
                        printf("Partida: %s", passageiro.partida);
                        printf("Destino: %s", passageiro.destino);
                        printf("Classe: %s\n", passageiro.classe);
                        printf("Horário de saída: 21:30\n");
                }
                
                break;

            case 2:
                if (passageiro.hora==1){
                    printf("Nome do passageiro: %s", passageiro.nome);
                    printf("Você irá pagar R$ %0.2f por mês em %dx\n", passageiro.v1, passageiro.parcelas); 
                    printf("Dia da viagem: %s\n", passageiro.data);
                    printf("Partida: %s", passageiro.partida);
                    printf("Destino: %s", passageiro.destino);
                    printf("Classe: %s\n", passageiro.classe);
                    printf("Horário de saída: 18:30\n");
                }
                if (passageiro.hora==2){
                   printf("Nome do passageiro: %s", passageiro.nome);
                    printf("Você irá pagar R$ %0.2f por mês em %dx\n", passageiro.v2, passageiro.parcelas); 
                    printf("Dia da viagem: %s\n", passageiro.data);
                    printf("Partida: %s", passageiro.partida);
                    printf("Destino: %s", passageiro.destino);
                    printf("Classe: %s\n", passageiro.classe);
                    printf("Horário de saída: 19:00\n");
                }
                if (passageiro.hora==3){
                    printf("Nome do passageiro: %s", passageiro.nome);
                    printf("Você irá pagar R$ %0.2f por mês em %dx\n", passageiro.v3, passageiro.parcelas); 
                    printf("Dia da viagem: %s\n", passageiro.data);
                    printf("Partida: %s", passageiro.partida);
                    printf("Destino: %s", passageiro.destino);
                    printf("Classe: %s\n", passageiro.classe);
                    printf("Horário de saída: 21:30\n");
                }
                break;
            }
        }
        printf("\n*******************\n\n");
}

void menu() {
    int op;
    do
    {
        printf("\nMenu de Venda de Passagens de Ônibus\n");
        printf("1 - Adicionar passagem\n");
        printf("2 - Exibir passagem\n");
        printf("3 -  Sair\n\n");
        printf("Digite a opção desejada:\n ");
        scanf("%d%*c", &op);

        switch(op)
        {
            case 1:
                adicionar();
            break;
            case 2:
                exibir();
            break;
            case 3:
                printf("\nPROGRAMA ENCERRADO\n");
            break;   
            default:
                 printf(" \n Opção não existente. ");
            break;
        }
    }while(op!=3);
}


int main() {

menu();

return 0;
} 