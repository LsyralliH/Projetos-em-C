#include <stdio.h>
#include <stdbool.h>

struct Atendimento {
    char tipoCombustivel, tipoAbastecimento;
    float quantidade, valor;
    int formaPagamento, parcelas;
};

void exibirMenuPagamento() {
    printf("FORMAS DE PAGAMENTO:\n");
    printf("1. Dinheiro\n");
    printf("2. Pix\n");
    printf("3. Cartão de Crédito\n\n");
}

void exibirTiposCombustivel() {
    printf("TIPO DE COMBUSTÍVEL:\n");
    printf("G - GASOLINA = R$5.62 \n");
    printf("E - ETANOL = R$3.54\n");
    printf("D - DIESEL = R$6.01\n\n");
}

int main() {
    struct Atendimento atendimento;

    char continuarAtendimento = 'N';

    int totalAtendimento = 0;
    int vendasAPrazo = 0;
    int totalParcelas = 0;
    int vendasAVista = 0;
    float gasolina = 5.62;
    float etanol = 3.54;
    float diesel = 6.01;


    do {
        printf("SISTEMA DE ABASTECIMENTO\n\n");

        exibirMenuPagamento();

        printf("Escolha a opção de pagamento (1-3): ");
        scanf("%d", &atendimento.formaPagamento);

        switch (atendimento.formaPagamento) {
            case 1:
                vendasAVista++;
                break;

            case 2:
                vendasAVista++;
                break;

            case 3:
                printf("Quantas parcelas (até 3 vezes)? ");
                scanf("%d", &atendimento.parcelas);
                if (atendimento.parcelas > 0 && atendimento.parcelas <= 3) {
                    vendasAPrazo++;
                    totalParcelas += atendimento.parcelas;
                } else {
                    printf("Número de parcelas inválido. Escolha entre 1 e 3.\n");
                    continue;
                }
                break;

            default:
                printf("Opção inválida.\n");
                continue;
        }
        system("cls");

         exibirTiposCombustivel();

        printf("\nEscolha o tipo de combustível que deseja abastecer (G - E - D):\n");
        scanf(" %c", &atendimento.tipoCombustivel);

        printf("\nDeseja abastecer por valor ou litros? (V - Valor, L - Litros):\n");
        scanf(" %c", &atendimento.tipoAbastecimento);

        printf("\nQuanto deseja abastecer?\n");
        scanf("%f", &atendimento.quantidade);
        system("cls");

        if (atendimento.tipoAbastecimento == 'v' || atendimento.tipoAbastecimento == 'V') {
            switch (atendimento.tipoCombustivel) {
                case 'g':
                case 'G':
                    atendimento.valor = atendimento.quantidade / gasolina;
                    printf("\nResumo do atendiento:\n");
                    printf("Tipo de combustível: Gasolina\n");
                    printf("Você irá abastecer R$%.2f / %.1f litros \n", atendimento.quantidade, atendimento.valor);

                    break;

                case 'e':
                case 'E':
                    atendimento.valor = atendimento.quantidade / etanol;
                    printf("\nResumo do atendiento:\n");
                    printf("Tipo de combustível: Etanol\n");
                    printf("Você irá abastecer R$%.2f / %.1f litros \n", atendimento.quantidade, atendimento.valor);

                    break;

                case 'd':
                case 'D':
                    atendimento.valor = atendimento.quantidade / diesel;
                    printf("\nResumo do atendiento:\n");
                    printf("Tipo de combustível: Diesel\n");
                    printf("Você irá abastecer R$%.2f / %.1f litros \n", atendimento.quantidade, atendimento.valor);

                    break;

                default:
                    printf("Opção de combustível inválida. Por favor, escolha novamente.\n\n");
                    continue;
            }
        } else if (atendimento.tipoAbastecimento == 'l' || atendimento.tipoAbastecimento == 'L') {
            switch (atendimento.tipoCombustivel) {
                case 'g':
                case 'G':
                    atendimento.valor = atendimento.quantidade * gasolina;
                    printf("\nResumo do atendiento:\n");
                    printf("Tipo de combustível: Gasolina\n");
                    printf("Você irá abastecer R$ %.2f / %.1f litros\n", atendimento.valor, atendimento.quantidade);

                    break;

                case 'e':
                case 'E':
                    atendimento.valor = atendimento.quantidade * etanol;
                    printf("\nResumo do atendiento:\n");
                    printf("Tipo de combustível: Etanol\n");
                    printf("Você irá abastecer R$ %.2f / %.1f litros\n", atendimento.valor, atendimento.quantidade);

                    break;

                case 'd':
                case 'D':
                    atendimento.valor = atendimento.quantidade *diesel;
                    printf("\nResumo do atendiento:\n");
                    printf("Tipo de combustível: Diesel\n");
                    printf("Você irá abastecer R$ %.2f / %.1f litros\n", atendimento.valor, atendimento.quantidade);

                    break;

                default:
                    printf("Opção de combustível inválida. Por favor, escolha novamente.\n\n");
                    continue;
            }
        } else {
            printf("Opção inválida. Por favor, escolha novamente.\n\n");
            continue;
        }

        printf("Método de pagamento: ");
            if(atendimento.formaPagamento==3){
                printf("Pagamento com cartão de crédito em %d parcelas.\n", atendimento.parcelas);
            }else if(atendimento.formaPagamento==2){
                printf("Pagamento via Pix\n");
            }else{
                printf("Pagamento em dinheiro\n");
            }

        totalAtendimento++;


        printf("\nDeseja encerrar o atendimento? (S/N): ");
        scanf(" %c", &continuarAtendimento);
        system("cls");



    } while (continuarAtendimento != 'S' && continuarAtendimento != 's');
    system("cls");

    printf("\nRelatorio para o Gerente:\n");
    printf("Numero Total de Atendimentos: %d\n", totalAtendimento);
    printf("Vendas com Cartao de Credito: %d\n", vendasAPrazo);
    printf("Parcelas Realizadas: %d\n", totalParcelas);
    printf("Atendimentos Pagos a Vista: %d\n", vendasAVista);

    system("pause");

    return 0;
}

