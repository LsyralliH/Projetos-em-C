
//1. Escreva um trecho de co´digo para fazer a criac¸a˜o dos novos tipos de dados conforme solicitado abaixo:
/*
#include <stdio.h>
#include <stdlib.h>

struct Agendamento{
int hora;
int minuto;
int segundo;
int dia;
int mes;
int ano;
char text[150];

};

struct Agendamento hora, data, compromisso;

void Horario(){
  printf("\nHORÁRIOS\n");
  printf("Digite a hora do compromisso: ");
  scanf("%d", &hora.hora);
  printf("Digite o minuto do compromisso: ");
  scanf("%d", &hora.minuto);
  printf("Digite o segundo do compromisso: ");
  scanf("%d", &hora.segundo);

  system("cls");


  printf("HORÁRIO MARCADO NA AGENDA\n");
  printf("Horário: %d:%d:%d\n", hora.hora, hora.minuto, hora.segundo);
}

void Data(){
  printf("\nDATA\n");
  printf("Digite o dia do compromisso: ");
  scanf("%d", &data.dia);
  printf("Digite o mes do compromisso: ");
  scanf("%d", &data.mes);
  printf("Digite o ano do compromisso: ");
  scanf("%d", &data.ano);

  system("cls");
  
  printf("DATA MARCADA NA AGENDA\n");
  printf("Data: %d/%d/%d\n\n", data.dia, data.mes, data.ano);
  
}

void Compromisso(){
    printf("\nHORÁRIOS\n");
    printf("Digite a hora do compromisso: ");
    scanf("%d", &hora.hora);
    printf("Digite o minuto do compromisso: ");
    scanf("%d", &hora.minuto);
    printf("Digite o segundo do compromisso: ");
    scanf("%d", &hora.segundo);

    system("cls");

    printf("\nDATA\n");
    printf("Digite o dia do compromisso: ");
    scanf("%d", &data.dia);
    printf("Digite o mes do compromisso: ");
    scanf("%d", &data.mes);
    printf("Digite o ano do compromisso: ");
    scanf("%d", &data.ano);

    while (getchar() != '\n');
    system("cls");
    printf("DESCRIÇÃO DO COMPROMISSO\n");
    printf("\nDigite qual é o compromisso: ");
    fgets(compromisso.text, sizeof(compromisso.text), stdin);
 
    system("cls");

    printf("COMPROMISSO MARCADO NA AGENDA\n");
    printf("Horário: %d:%d:%d\n", hora.hora, hora.minuto, hora.segundo);
    printf("Data: %d/%d/%d\n", data.dia, data.mes, data.ano);
    printf("Compromisso: %s", compromisso.text);
  
}

void Menu(){
  int opcao;
  do{
  printf("\n\nAgendar um novo comprimisso:\n");
  printf("\n1 - Horário\n");
  printf("2 - Data\n");
  printf("3 - Compromisso(Com data, hora e descrição do compromisso)\n");
  printf("4 - Sair\n\n");
do{
  printf("Escolha uma das opções para o agendamento do compromisso: \n");
  scanf("%d", &opcao);
}while(opcao<1 || opcao>4);
  switch(opcao){
    case 1:
    Horario();
    break;
    case 2:
    Data();
    break;
    case 3:
    Compromisso();
    break;
    case 4:
    printf("PROGRAMA ENCERRADO");
    break;
    default:
    printf("Opção Inválida");
    break;
  }
}while(opcao!=4);
}

int main(){
  Menu();

  return 0;
}
*/


//2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
/*
#include <stdio.h>
#include <stdlib.h>

struct pessoa {
  char nome[50];
  char endereco[50];
  int idade;
};
struct pessoa pessoa1;

int main() {
  printf("Digite o nome: ");
  fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);

  printf("Digite o endereço: ");
  fgets(pessoa1.endereco, sizeof(pessoa1.endereco), stdin);

  printf("Digite a idade: ");
  scanf("%d", &pessoa1.idade);

  system("cls");

  printf("Nome: %s", pessoa1.nome);
  printf("Endereço: %s", pessoa1.endereco);
  printf("Idade: %d", pessoa1.idade);
  
  return 0;
*/

//3.
/*
#include <stdio.h>
#include <stdlib.h>

 struct aluno {
    char nome[50];
    char curso[50];
    long long int ra;

};
 struct aluno aluno[5];

void DadosDoAluno(){
for(int i=0; i<5; i++){
    printf("\n//////////////////////////////////////////////\n");
    printf("\nAluno %d:\n\n", i+1);
    printf("Qual seu nome?\n");
    fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);

    

    printf("\nQual seu número de matrícula?\n");
    scanf("%lld", &aluno[i].ra);

    while (getchar() != '\n');

    printf("\nQual seu curso?\n");
    fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
    system("cls");
}

for(int i=0; i<5; i++){
    printf("\n//////////////////////////////////////////////\n");
    printf("\n\nAluno %d:\n", i+1);
    printf("Nome do aluno: %s", aluno[i].nome);
    printf("Número de matrícula: %lld\n", aluno[i].ra);
    printf("Curso do aluno: %s", aluno[i].curso);
}
}

int main(){
    DadosDoAluno();

    return 0;
}*/

//4. 4.	Crie uma estrutura representando os alunos de um determinado curso. 
//A estrutura deve conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    long long int ra;
    float n1;
    float n2;
    float n3;
    float media;
} alunos;

 alunos aluno[5];

void DadosDoAluno(){
    
    for(int i=0; i<5; i++){
    
    printf("\n//////////////////////////////////////////////\n");
    printf("\nAluno %d:\n\n", i+1);
    printf("Qual seu nome?\n");
    fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);

    

    printf("\nQual seu número de matrícula?\n");
    scanf("%lld", &aluno[i].ra);

    do{
    printf("\nQual a nota da prova 1?\n");
    scanf("%f", &aluno[i].n1);
    }while(aluno[i].n1<1||aluno[i].n1>10);


    do{
    printf("\nQual a nota da prova 2?\n");
    scanf("%f", &aluno[i].n2);
    }while(aluno[i].n2<1||aluno[i].n2>10);;

    do{
    printf("\nQual a nota da prova 3?\n");
    scanf("%f", &aluno[i].n3);
    }while(aluno[i].n3<1||aluno[i].n3>10);

    while (getchar() != '\n');

    aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;

    if (aluno[i].media>=6){
        printf("\nMédia: %.2f\n", aluno[i].media);
        printf("Aluno %d: %sAPROVADO\n", i+1, aluno[i].nome);
    }else{
        printf("\nMédia: %.2f\n", aluno[i].media);
        printf("Aluno %d: %sREPROVADO\n", i+1, aluno[i].nome);
    }
}
}

void Analise(){
    int contador =1, pNota1 = 0, pMediaMaior=0, pMediaMenor=0;
    float nMaior=0, nMediaMaior=0, nMediaMenor=999;

    for(int i=0; i<5; i++){
        if (aluno[i].n1>nMaior){
       nMaior=aluno[i].n1;
       pNota1 = i+1;
    }

        if (aluno[i].media>nMediaMaior){
       nMediaMaior=aluno[i].media;
       pMediaMaior = i+1;
    }
        if (aluno[i].media<nMediaMenor){
       nMediaMenor=aluno[i].media;
       pMediaMenor= i+1;
    }
    contador++;
}

printf("\n//////////////////////////////////////////////\n\n");
printf("Aluno com maior nota da primeira prova: Aluno %d ---------------- Nota = %.2f\n", pNota1, nMaior);
printf("Aluno com maior média geral: Aluno %d ---------------- Média = %.2f\n", pMediaMaior, nMediaMaior);
printf("Aluno com menor média geral: Aluno %d ---------------- Média = %.2f\n", pMediaMenor, nMediaMenor);

}

int main(){
    DadosDoAluno();
    Analise();

    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}*/

//5
/*
#include <stdio.h>
#include <stdlib.h>

struct Vetor{ 
    float x; 
    float y; 
    float z;
};
struct Vetor soma[2];

void SomaVetores(){
    float sx=0, sy=0, sz=0;

    for (int i = 0; i < 2; i++){
        
        printf("\nEscreva as tres coordenadas do vetor %d\n", i+1);
        printf("Coordenada x: ");
        scanf("%f", &soma[i].x);
        printf("Coordenada y: ");
        scanf("%f", &soma[i].y);
        printf("Coordenada z: ");
        scanf("%f", &soma[i].z);
        printf("\n//////////////////////////\n");
    }

    system("cls");
    for (int i = 0; i < 2; i++){
        printf("Vetor %d: (%.1f, %.1f, %.1f)\n",(i+1), soma[i].x, soma[i].y, soma[i].z);
        sx+=soma[i].x;
        sy+=soma[i].y;
        sz+=soma[i].z;
    }
    printf("A soma dos vetores: (%.1f, %.1f, %.1f)", sx,sy,sz);
}

int main(){
    SomaVetores();

    return 0;
}*/

//6
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    long long int ra;
    long long int codigo;
    float n1;
    float n2;
    float media;
} alunos;

 alunos aluno[10];

void DadosDoAluno(){
    
    for(int i=0; i<10; i++){
    
    printf("\n//////////////////////////////////////////////\n");
    printf("\nAluno %d:\n\n", i+1);
    printf("Qual seu nome?\n");
    fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);

    printf("Qual sua matrícula?\n");
    scanf("%lld", &aluno[i].ra);

    printf("Qual o código da turma?\n");
    scanf("%lld", &aluno[i].codigo);

    do{
    printf("Qual a nota da prova 1?\n");
    scanf("%f", &aluno[i].n1);
    }while(aluno[i].n1<1 || aluno[i].n1>10);

    do{
    printf("Qual a nota da prova 2?\n");
    scanf("%f", &aluno[i].n2);
    }while(aluno[i].n2<1 || aluno[i].n2>10);

    aluno[i].media = ((aluno[i].n1*1) + (aluno[i].n2*2))/(1+2);

    while (getchar() != '\n');

    system("cls");
    }

    for (int i = 0; i < 10; i++) {
        printf("\n//////////////////////////////////////////////\n");
        printf("\nAluno %d:\n\n", i+1);
        printf("Nome: %s", aluno[i].nome);
        printf("Matrícula: %lld\n", aluno[i].ra);
        printf("Código da turma: %lld\n", aluno[i].codigo);
        printf("Nota da prava 1: %.2f\n", aluno[i].n1);
        printf("Nota da prava 1: %.2f\n", aluno[i].n2);
        printf("Média ponderada: %.2f\n", aluno[i].media);
    }
    
}
int main(){
    DadosDoAluno();

    return 0;
}*/

//7
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void plano(float r, float t){
    float x = r*cos(t);
    float y = r*sin(t);

    printf("Coordenada cartesiana: (%.2f, %.2f)\n", x, y);
}

int main(){
    float r=0, t=0;
    
    printf("Escreva as coordenadas polares:\n");
    printf("raio (r): ");
    scanf("%f", &r);
    printf("Argumento (a) em radianos: ");
    scanf("%f", &t);

    system("cls");

    printf("Coordenada polar: (%.2f, %.2f)\n", r, t);
    plano(r,t);

    

    return 0;
}*/

/*8.Fac¸a um programa que armazene em um registro de dados (estrutura composta) os da- dos de um funciona´rio de uma empresa, 
compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Co´digo do Setor onde trabalha (0-99), 
Cargo que ocupa (string de ate´  30 caracteres) e Sala´rio.  Os dados devem ser digitados pelo usua´rio, armazenados na estrutura 
e exibidos na tela.*/
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    char cargo[30];
    int id;
    char sexo;
    long long int cpf;
    int dia;
    int mes;
    int ano;
    int codigo;
    float sal;

} funcionario;

funcionario func;

int main(){
    
    printf("\nQual o seu nome?\n");
    fgets(func.nome, sizeof(func.nome), stdin);
    
    printf("\nQual a sua idade?\n");
    scanf("%d", &func.id);

    while (getchar() != '\n');
    
    do{
    printf("\nQual seu sexo(M/F)?\n");
    scanf("%c", &func.sexo);
    }while(func.sexo != 'm' && func.sexo != 'M' && func.sexo != 'f' && func.sexo != 'F');

    while (getchar() != '\n');

    printf("\nQual seu CPF?\n");
    scanf("%lld", &func.cpf);

    printf("\nQual sua data de nascimento?\n");
    printf("Dia: ");
    scanf("%d", &func.dia);
    printf("Mês: ");
    scanf("%d", &func.mes);
    printf("Ano: ");
    scanf("%d", &func.ano);

    do{
        printf("\nQual o código do setor(0-99)?\n");
        scanf("%d", &func.codigo);
    }while(func.codigo<0 || func.codigo>99);

    while (getchar() != '\n');

    printf("\nQual o seu cargo?\n");
    fgets(func.cargo, sizeof(func.cargo), stdin);

    printf("\nQual o seu salário?\n");
    scanf("%f", &func.sal);

    system("cls");

    printf("DADOS DO FUNCIONÁRIO\n\n");
    printf("Nome: %s", func.nome);
    printf("Idade: %d anos\n", func.id);
    printf("Sexo: %c\n", func.sexo);
    printf("CPF: %lld\n", func.cpf);
    printf("Data de nascimento: %d/%d/%d\n", func.dia, func.mes, func.ano);
    printf("Código do Setor: %d\n", func.codigo);
    printf("Salário : R$%.2f\n",func.sal);

    return 0;
}
*/

/*9.	Fac¸a um programa que fac¸a operac¸o˜es simples de nu´meros complexos:
Crie e leia dois nu´meros complexos z  e w, compostos por parte real e parte ima- gina´ria.
Apresente a soma,  subtrac¸a˜o e produto entre z  e w,  nessa ordem,  bem como o mo´dulo de ambos.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct complexos{
    float r;
    float i;
};
struct complexos z, w;

int main(){

    
    printf("Escreva o número complexo de z:\n");
    printf("Parte real: ");
    scanf("%f", &z.r);
    printf("Parte imaginária(i): ");
    scanf("%f", &z.i);

    printf("\nEscreva o número complexo de w:\n");
    printf("Parte real: ");
    scanf("%f", &w.r);
    printf("Parte imaginária(i): ");
    scanf("%f", &w.i);

    system("cls");

    printf("A soma dos numeros complexos z e w é %.1f + %.1fi \n", (z.r+w.r), (z.i+w.i));
    printf("A subtração dos numeros complexos z e w é %.1f + %.1fi \n", (z.r-w.r), (z.i-w.i));
    printf("O produto dos numeros complexos z e w é %.1f + %.1fi\n", (z.r * w.r - z.i * w.i), (z.r * w.i + z.i * w.r));
    printf("O modulo dos numeros complexos z é %.2f \n", sqrt(z.r*z.r + z.i*z.i));
    printf("O modulo dos numeros complexos w é %.2f \n", sqrt(w.r*w.r + w.i*w.i));


    return 0;
}*/

/*10.	Utilizando uma estrutura, fac¸a um programa que permita a entrada de nome, enderec¸o e telefone de 5 pessoas 
e os imprima em ordem alfabe´tica.*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
    char nome[50];
    char endereco[100];
    long long int tel;
};
struct pessoa pessoa[5];

void Ordem(){

        for(int i =0; i <3; i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nPESSOA %d:\n\n", i+1);
        printf("Qual seu nome?\n");
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);

        printf("Qual seu endereço?\n");
        fgets(pessoa[i].endereco, sizeof(pessoa[i].endereco),stdin);

        printf("Qual seu telefone?\n");
        scanf("%lld", &pessoa[i].tel);

        system("cls");

        while (getchar() != '\n');

        }

    char p[50];
    for(int i =0; i<3; i++){
        for(int j = i + 1; j < 3; j++){
            if(strcmp(pessoa[i].nome, pessoa[j].nome) > 0){
                strcpy(p, pessoa[i].nome);
                strcpy(pessoa[i].nome, pessoa[j].nome);
                strcpy(pessoa[j].nome, p);
            }
        }
    }

    for(int i =0; i<3; i++){
        printf("Pessoa %d\n", i+1);
        printf("Nome: %s", pessoa[i].nome);
        printf("Endereço: %s", pessoa[i].endereco);
        printf("Telefone: %lld", pessoa[i].tel);
        printf("\n********************************\n");
}
}

int main(){
    Ordem();
}*/

//11
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    long long int ra;
    float media;
}aluno;
aluno alunos[10], aprovado[10], reprovado[10];

void DadosDoAluno(){
    for(int i =0; i<4;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nALUNO %d:\n\n", i+1);
        printf("Qual seu nome?\n");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Qual sua matrícula?\n");
        scanf("%ldd", &alunos[i].ra);

        printf("Qual sua média?\n");
        scanf("%f", &alunos[i].media);

         while (getchar() != '\n');
    }
}

void ExibirDados(){
    printf("ALUNOS APROVADOS\n");
    for(int i =0;i<4;i++){
        if(alunos[i].media>=5){
            strcpy(aprovado[i].nome, alunos[i].nome);
            aprovado[i].ra= alunos[i].ra;
            aprovado[i].media = alunos[i].media;
            printf("Aluno %d ------------ %.2f ------------  %lld - %s", i+1, aprovado[i].media, aprovado[i].ra, aprovado[i].nome);
            }
        }
    printf("\nALUNOS REPROVADOS\n");
    for(int i =0;i<4;i++){
        if(alunos[i].media<5){
            strcpy(reprovado[i].nome, alunos[i].nome);
            reprovado[i].ra = alunos[i].ra;
            reprovado[i].media= alunos[i].media;
            printf("Aluno %d ------------ %.2f ------------ %lld - %s", i+1, reprovado[i].media, reprovado[i].ra, reprovado[i].nome);
            }
        }
}

int main(){
    DadosDoAluno();
    system("cls");
    ExibirDados();

    return 0;
}*/


/*12.	Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe e seu valor) ou tipo “super trunfo” (cada carta possui um conjunto de 
atributos). Implemente a parte de distribuic¸a˜o (sorteio) de cartas para 2 jogadores, considerando que cada jogador ira´ receber 5 cartas. Exiba na tela as cartas 
que cada um dos jogadores recebeu.*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Baralho {
    char naipe[10];
    int valor;
};
struct Baralho jogo[52], distribuidas[2][5];

char n[4][10] = {"OUROS", "PAUS", "COPAS", "ESPADAS"};
int nCartas = 52;

void Cartas() {
    int qtd = 0;
    for (int i = 0; i < 4; i++) {
        for (int x = 1; x <= 13; x++) {
            strcpy(jogo[qtd].naipe, n[i]);
            jogo[qtd].valor = x;
            qtd++;
        }
    }

    struct Baralho aux;
    for (int i = 0; i < nCartas; i++) {
        int j = rand() % nCartas;
        aux = jogo[i];
        jogo[i] = jogo[j];
        jogo[j] = aux;
    }

    int carta = 0;
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 5; i++) {
            distribuidas[j][i] = jogo[carta++];
        }
    }

    for (int j = 0; j < 2; j++) {
        printf("\n***********************************\n");
        printf("Jogador %d : \n", j + 1);
        for (int i = 0; i < 5; i++) {
            printf(" %d de %s\n", distribuidas[j][i].valor, distribuidas[j][i].naipe);
        }
        printf("\n");
    }
}

int main() {
    srand(time(0));  
    Cartas();

    return 0;
}*/

/*13.	Pec¸a  ao  usua´rio  para  digitar  seus  dados  pessoais  (Nome,  Enderec¸o,  Data  de  Nasci- mento, Cidade, CEP, email), 
verifique se as informac¸o˜es de Data de Nascimento, CEP e email fazem sentido, e mostre ao usua´rio as informac¸o˜es, se esta˜o todas corretas, 
ou mostre que alguma informac¸a˜o estava errada.*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nome[50];
    char rua[30];
    char bairro[30];
    char cidade[20];
    char estado[15];
    char email[50];
    char cep[8];
    int dia;
    int mes;
    int ano;
}Informacoes;
Informacoes pessoa;


void DadosPessoais(){
        
        printf("\n//////////////////////////////////////////////\n");
        printf("\nDADOS PESSOAIS\n\n");
        printf("Qual seu nome?\n");
        fgets(pessoa.nome,sizeof(pessoa.nome), stdin);

        printf("Digite sua cidade:\n");
        fgets(pessoa.cidade, sizeof(pessoa.cidade),stdin);

        printf("\nDigite seu endereço:\n");
        printf("Rua: ");
        fgets(pessoa.rua, sizeof(pessoa.rua),stdin);
        printf("Bairro: ");
        fgets(pessoa.bairro, sizeof(pessoa.bairro),stdin);

        printf("\nDigite seu CEP(somente numeros):\n");
        scanf("%s", pessoa.cep);

        printf("\nDigite sua data de nascimento:\n");
    
        printf("Dia: ");
        scanf("%d", &pessoa.dia);
        printf("Mes: ");
        scanf("%d", &pessoa.mes);
        printf("Ano: ");
        scanf("%d", &pessoa.ano);

        while(getchar() != '\n');

        printf("\nQual seu email?\n");
        fgets(pessoa.email, sizeof(pessoa.email),stdin);

        system("cls");

}
void Validar(){
    
    printf("\n********************DADOS PESSOAIS***********************\n");
    printf("Nome: %s", pessoa.nome);
    printf("Cidade: %s", pessoa.cidade);
    printf("Endereço:\n--Rua: %s--Bairro: %s", pessoa.rua, pessoa.bairro);

    if(strlen(pessoa.cep) !=8){
        printf("CEP: INVÁLIDO\n");
    }else{
        printf("CEP: %s\n", pessoa.cep);
    }

    int data =0;
    if ((pessoa.dia >= 1 && pessoa.dia <= 31) && (pessoa.mes >= 1 && pessoa.mes <= 12) && (pessoa.ano >= 1900 && pessoa.ano <= 2024)) {
        if ((pessoa.mes == 4 || pessoa.mes == 6 || pessoa.mes == 9 || pessoa.mes == 11) && pessoa.dia > 30) {
            data=1;
        }
        if (pessoa.mes == 2) {
            if (pessoa.dia > 29 || (pessoa.dia == 29 && !(pessoa.ano % 4 == 0 && (pessoa.ano % 100 != 0 || pessoa.ano % 400 == 0)))) {
                data=1;
            }
        }
    }else {
        data=1;
    }

    if (data==0) {
        printf("Data de nascimento: %d/%d/%d\n", pessoa.dia, pessoa.mes, pessoa.ano);
    }else{
        printf("Data de nascimento: DATA INVÁLIDA\n");
    }

    int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i=0;
    
    for (i = 0; i < strlen(pessoa.email); i++) {
    char c = pessoa.email[i];
    if(c == '@') {
      if (arroba)
        break; 
      arroba = 1;
      if (i < 3)
        break; 
    }
    else if (arroba) { 
      if (ponto) { 
        depoisPonto++;
      }
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) {
          break; 
        }
      }
      else {
        antesPonto++;
      }
    }
  } 

  if (i == strlen(pessoa.email) && depoisPonto > 1)
    printf("Email: %s", pessoa.email);
  else
    printf("Email: INVÁLIDO\n");
}

int main(){
    DadosPessoais();
    Validar();

    return 0;
}*/

/*14.	Fac¸a  um  programa  que  leia  um  vetor  com  os  dados  de  5  carros:  marca  (ma´ximo  15 letras), ano e prec¸o.  
Leia um valor p e mostre as informac¸o˜es de todos os carros com prec¸o menor que p. Repita este processo ate´ que 
seja lido um valor p = 0.*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char marca[15];
    int ano;
    float preco;
}carros;
carros carro[5];

void DadosCarro(){
    for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nCARRO %d:\n\n", i+1);
        printf("Marca do carro:\n");
        fgets(carro[i].marca, sizeof(carro[i].marca), stdin);

        printf("Ano do carro:\n");
        scanf("%d", &carro[i].ano);

        printf("Preço do carro:\n");
        scanf("%f", &carro[i].preco);

        system("cls");

        while  (getchar() != '\n');
    }
}


float PrecoMenor(float p){
    printf("\n***********************\n");
    printf("CARROS MAIS BARATOS QUE P\n");
    printf("Ano\t\tPreço\t\tMarca\n");
    for(int i =0; i<5; i++){
        if(carro[i].preco<p){
            
            printf("%d\t\tR$%.2f\t%s", carro[i].ano, carro[i].preco, carro[i].marca);
        }
    }
    return p;
}

int main(){
    float p =0;

    DadosCarro();
    
    do{
    printf("\nDigite um valor de carro:\n");
    scanf("%f", &p);
    if(p==0){
        break;
    }
    PrecoMenor(p);
    }while(p!=0);

    printf("\nPROGRAMA ENCERRADO\n");

    

    return 0;
}*/

/*15.	Fac¸a um programa que leia um vetor com dados de 5 livros:  t´ıtulo (ma´ximo 30 letras), autor (ma´ximo 15 letras) e ano. 
Procure um livro por t´ıtulo, perguntando ao usua´rio qual t´ıtulo deseja buscar. Mostre os dados de todos os livros encontrados.*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titulo[30];
    char autor[15];
    int ano;
}livros;
livros livro[5];

void DadosLivro(){
    
    for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nLIVRO %d:\n\n", i+1);
        printf("Qual o título do livro?\n");
        fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);

        printf("Qual o autor do livro?\n");
        fgets(livro[i].autor, sizeof(livro[i].autor), stdin);

        printf("Qual o ano do livro?\n");
        scanf("%d",&livro[i].ano);

        system("cls");

        while  (getchar() != '\n');
    }
}

char Encontrar(char t[15]){

    int nenhum=0;
    printf("\n\n///////////////////////////////\n");
    printf("LIVROS ENCONTRADOS COM ESSE TÍTULO: \n");
    
    for(int i =0; i<5; i++){
        if(_stricmp(livro[i].titulo,t)==0){
            printf("\n***********************\n");
            printf("Titulo: %s", livro[i].titulo);
            printf("Autor: %s", livro[i].autor);
            printf("Ano: %d", livro[i].ano);
        }else{
            nenhum++;
        }
    }
    if(nenhum==5){
        printf("Nenhum livro encontrado\n");
    }
}

int main(){
    char t[15];

    DadosLivro();
    
    
    printf("\nDigite um titulo de livro:\n");
    fgets(t, sizeof(t), stdin);

    Encontrar(t);

    printf("\n\n***********************\n");
    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}*/

/*16.	Fac¸a um programa que seja uma agenda de compromissos e:
Crie e leia um vetor de 5 estruturas de dados com: compromisso (ma´ximo 60 letras) e data. A data deve ser outra estrutura de dados contendo dia, meˆs e ano.
Leia dois inteiros M  e A  e mostre todos os compromissos do meˆs M  do ano A. Repita o procedimento ate´ ler M  = 0.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Agenda{
    char comp[60];
    int dia;
    int mes;
    int ano;
};
struct Agenda compromisso[5];

void DadosCompromisso(){
        for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nCOMPROMISSO %d:\n\n", i+1);
        printf("Digite qual o compromisso:\n");
        fgets(compromisso[i].comp, sizeof(compromisso[i].comp), stdin);

        printf("\nDigite a data do compromisso:\n");
        printf("Dia: ");
        scanf("%d", &compromisso[i].dia);
        printf("Mes: ");
        scanf("%d", &compromisso[i].mes);
        printf("Ano: ");
        scanf("%d", &compromisso[i].ano);

        system("cls");

        while(getchar() != '\n');
        }

}

void Encontrar(int m, int a){

    int nenhum=0;
    printf("\n\n///////////////////////////////\n");
    printf("COMPROMISSOS ENCONTRADOS: \n");
    
    for(int i =0; i<5; i++){
        if(compromisso[i].mes == m && compromisso[i].ano==a){
            printf("\nCompromisso: %s", compromisso[i].comp);
            printf("Data: %d/%d/%d", compromisso[i].dia, compromisso[i].mes, compromisso[i].ano);
            printf("\n***********************\n");
        }else{
            nenhum++;
        }
    }
    if(nenhum==5){
        printf("Nenhum compromisso encontrado\n");
    }
}

int main(){
    int m=0, a=0;

    DadosCompromisso();

    do{
        printf("\nDigite o mês e o ano para encontrar o compromisso (ENCERRA QUANDO M = 0):\n");
        printf("Mes: ");
        scanf("%d", &m);
        if(m==0){
            break;
        }
        printf("Ano: ");
        scanf("%d", &a);

        Encontrar(m,a);
    }while(m!=0);

    system("cls");

    printf("\n***********************\n");
    printf("PROGRAMA ENCERRADO");

    return 0;
}*/

/*17. Fac¸a um programa que controla o consumo de energia dos eletrodome´sticos de uma casa e:
 Crie e leia 5 eletrodome´sticos que conte´m nome (ma´ximo 15 letras), poteˆncia (real, em kW) e tempo ativo por dia (real, 
 em horas).Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodome´stico 
 (consumo/consumo total) nesse per´ıodo de tempo. Apresente este u´ltimo dado em porcentagem.*/
 
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[15];
    float pot;
    int tempo;
}eletrodomesticos;
eletrodomesticos eletro[5];

void DadosEletro(){
    for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nELETRODOMÉSTICO %d:\n\n", i+1);
        printf("Nome do eletrodomédtico:\n");
        fgets(eletro[i].nome, sizeof(eletro[i].nome), stdin);

        printf("Potência do eletrodoméstico(real, em kW):\n");
        scanf("%f", &eletro[i].pot);

        printf("Tempo ativo por dia do eletrodoméstico(real, em horas):\n");
        scanf("%d", &eletro[i].tempo);

        system("cls");

        while  (getchar() != '\n');
    }
}

void Consumo(int t){
    float soma =0, total=0, soma2=0, total2=0;

    for(int i = 0; i<5;i++){
        total = (eletro[i].pot*eletro[i].tempo)*t;
        soma+=total;
    }

    for(int i = 0; i<5;i++){
        total2 = ((eletro[i].pot*eletro[i].tempo)*t)/soma*100;
        soma2+=total2;
    }

    printf("O consumo total na casa no período de %d: %.2f kWh\n", t, soma);
    printf("O consumo relativo na casa no período de %d: %.2f%%", t, soma2);

}


int main(){
    int t;

    DadosEletro();
    
    printf("\nDigite o tempo que deseja calcular (tempo em dias):\n");
    scanf("%d", &t);

    Consumo(t);

    printf("\n\n***********************\n");
    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}*/

/*18.	Fac¸a um programa que gerencie o estoque de um mercado e:
Crie e leia um vetor de 5 produtos, com os dados:  co´digo (inteiro), nome (ma´ximo 15 letras), prec¸o e quantidade.
Leia  um  pedido,  composto  por  um  co´digo  de  produto  e  a  quantidade.   Localize este  co´digo  no  vetor  e,  se  houver  quantidade  suficiente  para  atender
ao  pedido integralmente, atualize o estoque e informe o usua´rio.  Repita este processo ate´  ler um co´digo igual a zero.
Se por algum motivo na˜o for poss´ıvel atender ao pedido, mostre uma mensagem infor- mando qual erro ocorreu.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[15];
    int codigo;
    int qtd;
    float preco;
}Estoque;
Estoque produto[5];

void DadosProduto(){
    for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nPRODUTO %d:\n\n", i+1);

        printf("Qual o código do produto?\n");
        scanf("%d", &produto[i].codigo);

        while  (getchar() != '\n');

        printf("Qual o nome do produto?\n");
        fgets(produto[i].nome, sizeof(produto[i].nome), stdin);


        printf("Quanto tem no estoque de %s: ", produto[i].nome);
        scanf("%d",&produto[i].qtd);

        printf("Qual o preço de %s:", produto[i].nome);
        scanf("%f",&produto[i].preco);

        system("cls");
    }
}
void Encontrar(int c, int q){
    int nenhum=0;
    printf("\n\n***********************\n");
    for(int i = 0; i<5;i++){
        if(produto[i].codigo==c){
            if(q<=produto[i].qtd){
                printf("\nPEDIDO ATENDIDO\n");
                printf("%d %s", q, produto[i].nome);
                printf("Custa R$%.2f cada %s", produto[i].preco, produto[i].nome);
                produto[i].qtd=(produto[i].qtd - q);
                printf("\n************\n");
                printf("\nSó restaram %d %s", produto[i].qtd, produto[i].nome);

            }else{
                printf("\nNÃO É POSSÍVEL ATENDER O PEDIDO\n");
                printf("\n************\n");
                printf("Quantidade insuficiente de %s", produto[i].nome);
            }
        }else{
            nenhum++;
        }
    }
    if(nenhum==5){
        printf("Nenhum produto encontrado com esse código\n");
    }
    printf("\n\n***********************\n");
}

int main(){
    int cod=0, q=0;

    DadosProduto();

    do{
        printf("Faça seu pedido:\n");
        printf("Código: ");
        scanf("%d",  &cod);
        if(cod==0){
            break;
        }
        printf("Quantidade: ");
        scanf("%d", &q);

        Encontrar(cod, q);

    }while(cod!=0);

    system("cls");

    printf("\n\n***********************\n");
    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}*/


/*19.	Fac¸a um programa que controle o fluxo de voˆos nos aeroportos de um pa´ıs. Com V  = 5
(voˆos) e A = 5 (aeroportos) e:
Crie e leia um vetor de voos, sendo que cada voo conte´m um co´digo de aeroporto de origem e um de destino.
Crie um vetor de aeroportos, sendo que cada aeroporto conte´m seu co´digo, quanti- dade de voos que saem e quantidade de voos que chegam.
Nota:  Cada aeroporto e´  identificado por um co´digo inteiro entre 0 e (A-1).  Na˜o aceite
aeroportos de co´digo inexistente.*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    int qtdSai;
    int qtdChega;
    int destino;
}fluxo;

fluxo aeroporto[5], voo[5];

void DadosVoos(){
        for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nVÔO %d:\n\n", i+1);
        do{
        printf("Código do aeroporto de origem (0-4): ");
        scanf("%d", &voo[i].codigo);
        }while(voo[i].codigo<0 || voo[i].codigo>4);

        do{
        printf("Código do aeroporto de destino: ");
        scanf("%d", &voo[i].destino);
        }while(voo[i].codigo<0 || voo[i].codigo>4);

        aeroporto[voo[i].codigo].qtdSai++;
        aeroporto[voo[i].destino].qtdChega++;
        }
        system("cls");


        for(int i = 0; i<5;i++){
            aeroporto[i].codigo = i;
            printf("\n*****************************\n");
            printf("\nAEROPORTO: %d\n", aeroporto[i].codigo);
            printf("Aeroporto %d: \n", aeroporto[i].codigo);
            printf("Vôos que chegam: %d\n", aeroporto[i].qtdChega);
            printf("Vôos que saem: %d\n", aeroporto[i].qtdSai);
        }
}

int main(){
    DadosVoos();
    return 0;
}*/

/*20.	Fac¸a um programa para armazenar um livro de receitas e:
Crie um vetor de 5 receitas, que deve ter nome (ma´ximo 25 letras), quantidade de ingredientes e ingredientes.
Para cada receita, leia seu nome e a quantidade de ingredientes.  Enta˜o crie e leia o vetor de ingredientes, 
sendo que cada ingrediente conte´m nome e quantidade.
Procure receita por nome, mostrando seus ingredientes se encontrar.  Se na˜o en- contrar, informe ao usua´rio. 
Repita o processo ate´ digitar uma string vazia.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int qtdcada;
} Ingredientes;

typedef struct {
    char nome[50];
    int qtd;
    Ingredientes ingredientes[30];
} Receitas;

Receitas receita[5];
void DadosReceita(){

    for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nRECEITA %d:\n\n", i+1);
        printf("\nQual o nome da receita?\n");
        fgets(receita[i].nome, sizeof(receita[i].nome), stdin);

        printf("\nQual a quantidade de ingrdientes?\n");
        scanf("%d", &receita[i].qtd);

        while  (getchar() != '\n');

        printf("\nIngredientes necessários para fazer %s", receita[i].nome);
        for(int x = 0; x < receita[i].qtd; x++){
            fgets(receita[i].ingredientes[x].nome, sizeof(receita[i].ingredientes[x].nome), stdin);
        }
        
        for(int x = 0; x < receita[i].qtd; x++){
            printf("\nQual a quantidade de %s", receita[i].ingredientes[x].nome);
            scanf("%d", &receita[i].ingredientes[x].qtdcada);
            }
            
            system("cls");
            
            while  (getchar() != '\n');
    }



}

char Encontrar(char t[25]){
    int nenhum =0;
    
    printf("\nINGREDIENTES PARA ESSA RECEITA: \n");
    
    for(int i =0; i<5; i++){
        if(_stricmp(receita[i].nome,t)==0){
            for(int x = 0; x < receita[i].qtd; x++){
                printf("%d %s", receita[i].ingredientes[x].qtdcada, receita[i].ingredientes[x].nome);
                
            }
        }else{
            nenhum++;
        }
    }
    if(nenhum==5){
        printf("Nenhuma receita encontrada com esse nome\n");
    }

    return t[25];
}

int main(){
    char r[25];

    DadosReceita();
    
    do{
        printf("\n***********************\n");
        printf("\nDigite o nome da receita:\n");
        fgets(r, sizeof(r), stdin);
        
        Encontrar(r);

        r[strcspn(r, "\n")] = '\0';//para anular '\n' caso tenha no  buffer
        if(strcmp(r, "") == 0){
            break;
        }
    }while(strcmp(r, "") != 0);

    system("cls");
    
    printf("\n\n***********************\n");
    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}*/

/*21.	Fac¸a um programa que armazena filmes produzidos por va´rios diretores e:
•	Crie e leia um vetor de 5 diretores,  cada um contendo nome (ma´ximo 20 letras),
quantidade de filmes e filmes.  O membro filmes e´  um vetor, que deve ser criado
apo´s ter lido quantidade de filmes. Cada filme e´ composto por nome, ano e durac¸a˜o.
 Procure um diretor por nome, mostrando todos os filmes que ele ja´ produziu. Repita o processo ate´ digitar uma string vazia.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    int ano;
    float duracao;
}Filmes;

typedef struct{
    char nome[30];
    int qtdfilmes;
    int filmes;
    Filmes filme[40];

}Diretores;
Diretores diretor[5];

void DadosFilmes(){

    for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nDIRETOR %d:\n\n", i+1);
        printf("\nQual o nome do diretor?\n");
        fgets(diretor[i].nome, sizeof(diretor[i].nome), stdin);

        printf("\nQual a quantidade de filmes feitos?\n");
        scanf("%d", &diretor[i].qtdfilmes);

        while  (getchar() != '\n');

        
        printf("\nQuais filmes feitos por %s", diretor[i].nome);
        for(int x = 0; x < diretor[i].qtdfilmes; x++){
            printf("\n***********************\n");
            printf("Filme %d", x+1);
            printf("\nNome: ");
            fgets(diretor[i].filme[x].nome, sizeof(diretor[i].filme[x].nome), stdin);
            printf("Ano: ");
            scanf("%d", &diretor[i].filme[x].ano);
            
            printf("Duração: ");
            scanf("%f", &diretor[i].filme[x].duracao);

            while  (getchar() != '\n');
            
        }
            
            system("cls");
            
    }



}

char Encontrar(char t[25]){
    int nenhum =0;
    
    printf("\nFILMES FEITOS POR ESSE DIRETOR(A): \n");
    
    for(int i =0; i<5; i++){
        if(_stricmp(diretor[i].nome,t)==0){
            for(int x = 0; x < diretor[i].qtdfilmes; x++){
                printf("Filme %d", x+1);
                printf("\nNome: %s", diretor[i].filme[x].nome);
                printf("Ano: %d\n", diretor[i].filme[x].ano);
                printf("Duração: %.2f\n", diretor[i].filme[x].duracao);
                printf("\n***********************\n");
            }
        }else{
            nenhum++;
        }
    }
    if(nenhum==5){
        printf("Nenhum filme encontrado\n");
    }

    return t[25];
}

int main(){
    char r[20];

    DadosFilmes();
    
    do{
        printf("\nDigite o nome do diretor:\n");
        fgets(r, sizeof(r), stdin);
        
        Encontrar(r);

        r[strcspn(r, "\n")] = '\0';//para anular '\n' caso tenha no  buffer
        if(strcmp(r, "") == 0){
            break;
        }
    }while(strcmp(r, "") != 0);

    system("cls");
    
    printf("\n\n***********************\n");
    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}*/

//22
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[50];
    char rua[50];
    char bairro[50];
    char cidade[25];
    char estado[15];
    char civil[10];
    char sexo;
    int id;
    int cep;
    float sal;
    long long int iden;
    long long int cpf;
    long long int tel;
    

}Cadastro;

Cadastro cadastro[5];

void DadosCadastro(){

for(int i = 0; i<5;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nPESSOA %d:\n\n", i+1);
        printf("\nQual seu nome?\n");
        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);

        printf("\nQual sua identidade?\n");
        scanf("%lld", &cadastro[i].iden);

        printf("\nQual seu telefone?\n");
        scanf("%lld", &cadastro[i].tel);

        while  (getchar() != '\n');

        printf("\nQual seu endereço?\n");
        printf("Rua: ");
        fgets(cadastro[i].rua, sizeof(cadastro[i].rua), stdin);
        printf("Bairro: ");
        fgets(cadastro[i].bairro, sizeof(cadastro[i].bairro), stdin);
        printf("Cidade: ");
        fgets(cadastro[i].cidade, sizeof(cadastro[i].cidade), stdin);
        printf("Estado: ");
        fgets(cadastro[i].estado, sizeof(cadastro[i].estado), stdin);
        printf("CEP: ");
        scanf("%d", &cadastro[i].cep);

        printf("\nQual seu CPF?\n");
        scanf("%lld", &cadastro[i].cpf);

        printf("\nQual sua idade?\n");
        scanf("%lld", &cadastro[i].id);

        printf("\nQual seu salário?\n");
        scanf("%f", &cadastro[i].sal);

        while  (getchar() != '\n');

        printf("\nQual seu estado civil?(CASADO / SOLTEIRO)\n");
        fgets(cadastro[i].civil, sizeof(cadastro[i].civil),stdin);
        
        do{
            printf("\nQual seu sexo(M/F)?\n");
            scanf("%c", &cadastro[i].sexo);
        }while(cadastro[i].sexo != 'm' && cadastro[i].sexo != 'M' && cadastro[i].sexo != 'f' && cadastro[i].sexo != 'F');

        system("cls");

        while  (getchar() != '\n');
}
}

void Encontrar(){
    int idMaior = 0;

    printf("\n***********************\n");
    for(int i = 0; i<5; i++){
        if(cadastro[i].id>idMaior){
            idMaior=cadastro[i].id;
        }
    }
    printf("\nPessoa com a maior idade:\n");
    for(int i = 0; i<5; i++){
        if(cadastro[i].id==idMaior){
            printf("Pessoa %d - %s", i+1, cadastro[i].nome);
        }
    }

    printf("\nPessoas do sexo masculino:\n");
    for(int i = 0; i<5; i++){
        if(cadastro[i].sexo=='m'||cadastro[i].sexo=='M'){
            printf("Pessoa %d - %s", i+1, cadastro[i].nome);
        }
    }
    printf("\nPessoas com salário maior que 1000:\n");
    for(int i = 0; i<5; i++){
        if(cadastro[i].sal>1000){
            printf("Pessoa %d - %s", i+1, cadastro[i].nome);
        }
    }
}

void Identidade(long long int t){
    int nenhum =0;
    for(int i =0; i<5; i++){
        if(cadastro[i].iden==t){
            printf("\n***********************\n");
            printf("PESSOA %d:\n", i+1);
            printf("Nome: %s", cadastro[i].nome);
            printf("Identidade: %lld\n", cadastro[i].iden);
            printf("Telefone: %lld\n", cadastro[i].tel);
            printf("Endereço:\n");
            printf("-Rua: %s", cadastro[i].rua);
            printf("-Bairro: %s", cadastro[i].bairro);
            printf("-Cidade: %s", cadastro[i].cidade);
            printf("-Estado: %s", cadastro[i].estado);
            printf("-CEP: %d\n", cadastro[i].cep);
            printf("CPF: %lld\n", cadastro[i].cpf);
            printf("Idade: %d\n", cadastro[i].id);
            printf("Salário: R$%.2f\n", cadastro[i].sal);
            printf("Estado Civil: %s", cadastro[i].civil);
            printf("Sexo: %c", cadastro[i].sexo);
        }else{
            nenhum++;
        }
    }
    if(nenhum==5){
        printf("Nenhuma identidade encontrada \n");
    }
    
}

int main(){
    long long int i;

    DadosCadastro();
    Encontrar();

    printf("\n***********************\n");
    printf("\nDigite o número da identidade que procura:\n");
    scanf("%lld", &i);

    Identidade(i);
        
        
    printf("\n\n***********************\n");
    printf("\nPROGRAMA ENCERRADO\n");

    return 0;
}


*/

/*23.	Escreva um programa que receba dois structs do tipo dma, cada um representando uma data va´lida, e calcule o nu´mero de dias 
que decorreram entre as duas datas.*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dma {
int dia; 
int mes; 
int ano;
};
struct dma data[2];

void Datas(){
    int soma=0;
    for(int i = 0;i<2;i++){
        printf("\n//////////////////////////////////////////////\n");
        printf("\nDATA %d:\n\n", i+1);
        printf("Dgite uma data:\n");
        printf("Dia: ");
        scanf("%d", &data[i].dia);
        printf("Mês: ");
        scanf("%d", &data[i].mes);
        printf("Ano: ");
        scanf("%d", &data[i].ano);
    }
    soma = ((data[1].dia - data[0].dia) + ((data[1].mes - data[0].mes)*30) + ((data[1].ano - data[0].ano)*360));
    printf("\nSe passaram %d dias entre %d/%d/%d e %d/%d/%d\n", soma,data[0].dia, data[0].mes, data[0].ano, data[1].dia, data[1].mes, data[1].ano);
}

int main(){
    Datas();

    return 0;
}*/

/*24.	Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os seguintes dados:
•	Nome
•	E-mail
Enderec¸o (contendo campos para Rua, nu´mero, complemento, bairro, cep, cidade, estado, pa´ıs).
•	Telefone (contendo campo para DDD e nu´mero)
•	Data de aniversa´rio (contendo campo para dia, meˆs, ano).
•	Observac¸o˜es: Uma linha (string) para alguma observac¸a˜o especial.
(a)	Definir a estrutura acima.
(b)	Declarar a varia´vel agenda (vetor) com capacidade de agendar ate´ 100 nomes.
(c)	Definir  um  bloco  de  instruc¸o˜es  busca  por  primeiro  nome:   Imprime  os  dados  da pessoa com esse nome 
(se tiver mais de uma pessoa, imprime para todas).
(d)	Definir um bloco de instruc¸o˜es busca por meˆs de aniversa´rio: Imprime os dados de todas as pessoas que fazem aniversa´rio 
nesse meˆs.
(e)	Definir  um  bloco  de  instruc¸o˜es  busca  por  dia  e  meˆs  de  aniversa´rio:  Imprime  os dados de todas as pessoas que 
fazem aniversa´rio nesse dia e meˆs.
(f)	Definir um bloco de instruc¸o˜es insere pessoa: Insere por ordem alfabe´tica de nome.
(g)	Definir um bloco de instruc¸o˜es retira pessoa: Retira todos os dados dessa pessoa e desloca todos os elementos seguintes do 
vetor para a posic¸a˜o anterior.
(h)	Definir um bloco de instruc¸o˜es imprime agenda com as opc¸o˜es:
•	Imprime nome, telefone e e-mail.
•	Imprime todos os dados.
(i)	O programa deve ter um menu principal oferecendo as opc¸o˜es acima.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    char email[60];
    char rua[50];
    char complemento[30];
    char bairro[30];
    char cep[8];
    char cidade[50];
    char estado[20];
    char pais[50];
    char especial[50];
    char ddd[3];
    char tel[9];
    int numero;
    int dia;
    int mes;
    int ano;

}Agenda;
Agenda agenda[100];

int ad = 0;
void BuscaNome(){
    int nenhum=0;
    char n[50];
    while(getchar() != '\n');
    printf("Digite o nome que deseja buscar:\n");
    fgets(n, sizeof(n), stdin);

    for(int i =0; i<100; i++){
        if(_stricmp(agenda[i].nome,n)==0){
            printf("\n/////////////////////////////////////////////////\n");
            printf("\n***************DADOS****************\n");
            printf("Nome: %s", agenda[i].nome);
            printf("****************\n");
            printf("Email: %s\n", agenda[i].email);
            printf("****************\n");
            printf("Endereço:\n");
            printf("--Rua: %s", agenda[i].rua);
            printf("--Bairro: %s", agenda[i].bairro);
            printf("--Número: %d\n", agenda[i].numero);
            printf("--Complemento: %s\n", agenda[i].complemento);
            printf("**\n");
            printf("CEP: %s\n", agenda[i].cep);
            printf("--Cidade: %s", agenda[i].cidade);
            printf("--Estado: %s", agenda[i].estado);
            printf("--País: %s\n", agenda[i].pais);
            printf("****************\n");
            printf("Telefone: (%s) %s\n", agenda[i].ddd, agenda[i].tel);
            printf("****************\n");
            printf("Data de Aniversário: %d/%d/%d\n", agenda[i].dia, agenda[i].mes, agenda[i].ano);
            printf("\n****************\n");
            printf("Observação: %s", agenda[i].especial);
        }else{
            nenhum++;
        }
    }
    if(nenhum==ad){
        printf("\n/////////////////////////////////////////////////\n");
        printf("Nenhum contato encontrado com esse nome\n");
    }
}

void BuscaMes(){
    int nenhum=0, m=0;
    printf("Digite o mês de aniversário que deseja buscar:\n");
    scanf("%d", &m);

    for(int i =0; i<ad; i++){
        if(agenda[i].mes==m){
            printf("\n/////////////////////////////////////////////////\n");
            printf("\n***************DADOS****************\n");
            printf("Nome: %s", agenda[i].nome);
            printf("****************\n");
            printf("Email: %s\n", agenda[i].email);
            printf("****************\n");
            printf("Endereço:\n");
            printf("--Rua: %s", agenda[i].rua);
            printf("--Bairro: %s", agenda[i].bairro);
            printf("--Número: %d\n", agenda[i].numero);
            printf("--Complemento: %s\n", agenda[i].complemento);
            printf("**\n");
            printf("CEP: %s\n", agenda[i].cep);
            printf("--Cidade: %s", agenda[i].cidade);
            printf("--Estado: %s", agenda[i].estado);
            printf("--País: %s\n", agenda[i].pais);
            printf("****************\n");
            printf("Telefone: (%s) %s\n", agenda[i].ddd, agenda[i].tel);
            printf("****************\n");
            printf("Data de Aniversário: %d/%d/%d\n", agenda[i].dia, agenda[i].mes, agenda[i].ano);
            printf("\n****************\n");
            printf("Observação: %s", agenda[i].especial);
        }else{
            nenhum++;
        }
    }
    if(nenhum==ad){
        printf("\n/////////////////////////////////////////////////\n");
        printf("Nenhum contato encontrado com esse mês de aniversário\n");
    }
} 

void BuscaDiaMes(){
    int nenhum=0, d =0, m=0;

    printf("Digite o dia e o mes que deseja buscar:\n");
    printf("Dia: ");
    scanf("%d", &d);
    printf("Mês: ");
    scanf("%d", &m);

    for(int i =0; i<ad; i++){
        if(agenda[i].dia==d && agenda[i].mes==m){
            printf("\n/////////////////////////////////////////////////\n");
            printf("\n***************DADOS****************\n");
            printf("Nome: %s", agenda[i].nome);
            printf("****************\n");
            printf("Email: %s\n", agenda[i].email);
            printf("****************\n");
            printf("Endereço:\n");
            printf("--Rua: %s", agenda[i].rua);
            printf("--Bairro: %s", agenda[i].bairro);
            printf("--Número: %d\n", agenda[i].numero);
            printf("--Complemento: %s", agenda[i].complemento);
            printf("**\n");
            printf("CEP: %s\n", agenda[i].cep);
            printf("--Cidade: %s", agenda[i].cidade);
            printf("--Estado: %s", agenda[i].estado);
            printf("--País: %s", agenda[i].pais);
            printf("****************\n");
            printf("Telefone: (%s) %s\n", agenda[i].ddd, agenda[i].tel);
            printf("****************\n");
            printf("Data de Aniversário: %d/%d/%d\n", agenda[i].dia, agenda[i].mes, agenda[i].ano);
            printf("\n****************\n");
            printf("Observação: %s", agenda[i].especial);
        }else{
            nenhum++;
        }
    }
    if(nenhum==ad){
        printf("\n/////////////////////////////////////////////////\n");
        printf("Nenhum contato encontrado com esse dia e mês de aniversário\n");
    }
}


void AdicionarNome(){
    if(ad>=100){
        printf("Agenda cheia\n");
        return;
    }
    while(getchar() != '\n');
    printf("\n/////////////////////////////////////////////////\n");
    printf("\n***************ADICIONAR CONTATO****************\n");
    printf("Digite o nome:\n");
    fgets(agenda[ad].nome, sizeof(agenda[ad].nome), stdin);
            

        int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;
    do {
        printf("\nDigite o email:\n");
        fgets(agenda[ad].email, sizeof(agenda[ad].email), stdin);

        arroba = ponto = antesPonto = depoisPonto = 0;
        for (i = 0; i < strlen(agenda[ad].email); i++) {
            char c = agenda[ad].email[i];
            if (c == '@') {
                if (arroba)
                    break;
                arroba = 1;
                if (i < 3)
                    break;
            } else if (arroba) {
                if (ponto) {
                    depoisPonto++;
                } else if (c == '.') {
                    ponto = 1;
                    if (antesPonto < 3) {
                        break;
                    }
                } else {
                    antesPonto++;
                }
            }
        }
    } while (i != strlen(agenda[ad].email) || depoisPonto < 1);
           
            printf("\nDigite o endereço:\n");
            printf("Rua: ");
            fgets(agenda[ad].rua, sizeof(agenda[ad].rua), stdin);

            printf("Bairro: ");
            fgets(agenda[ad].bairro, sizeof(agenda[ad].bairro), stdin);

            printf("Número: ");
            scanf("%d", &agenda[ad].numero);

            while(getchar() != '\n');

            printf("Complemento(opcional): ");
            fgets(agenda[ad].complemento, sizeof(agenda[ad].complemento), stdin);
            printf("**\n");

            do{
                printf("CEP (somente numeros): ");
                scanf("%s", agenda[ad].cep);
            }while(strlen(agenda[ad].cep) !=8);


            while(getchar() != '\n');
            printf("Cidade: ");
            fgets(agenda[ad].cidade, sizeof(agenda[ad].cidade), stdin);

            printf("Estado: ");
            fgets(agenda[ad].estado, sizeof(agenda[ad].estado), stdin);

            printf("País: ");
            fgets(agenda[ad].pais, sizeof(agenda[ad].pais), stdin);

            printf("****************\n");
            do{
            printf("\nTelefone:\n");
            printf("DDD: ");
            scanf("%s", agenda[ad].ddd);
            }while(strlen(agenda[ad].ddd) !=3);
            
            do{
            printf("Número: ");
            scanf("%s", agenda[ad].tel);
            }while(strlen(agenda[ad].tel) !=9);

            printf("****************\n");

            int data=0;
            do{
                printf("\nData de Aniversário:\n");
                printf("Dia: ");
                scanf("%d", &agenda[ad].dia);
                printf("Mês: ");
                scanf("%d", &agenda[ad].mes);
                printf("Ano: ");
                scanf("%d", &agenda[ad].ano);

                
                if ((agenda[ad].dia >= 1 && agenda[ad].dia <= 31) && (agenda[ad].dia >= 1 && agenda[ad].mes <= 12) && (agenda[ad].ano >= 1900 && agenda[ad].ano <= 2024)) {
                    if ((agenda[ad].mes == 4 || agenda[ad].mes == 6 || agenda[ad].mes == 9 || agenda[ad].mes == 11) && agenda[ad].dia > 30) {
                        data=1;
                        }
                if (agenda[ad].mes == 2) {
                    if (agenda[ad].dia > 29 || (agenda[ad].dia == 29 && !(agenda[ad].ano % 4 == 0 && (agenda[ad].ano % 100 != 0 || agenda[ad].ano % 400 == 0)))) {
                        data=1;
                    }
                }
                }else {
                    data=1;
                }
            }while(data !=0);

            printf("\n****************\n");

            while(getchar() != '\n');

            printf("\nObservação: ");
            fgets(agenda[ad].especial, sizeof(agenda[ad].especial), stdin);

            system("cls");
    ad++;
    printf("\nContato adicionado!\n");

    Agenda aux;
    for(int i =0; i<3; i++){
        for(int j = i + 1; j < 3; j++){
            if(strcmp(agenda[i].nome, agenda[j].nome) > 0){
                aux = agenda[i];
                agenda[i]=agenda[j];
                agenda[j]=aux;
            }
        }
    }
}

    void ExcluirNome(){
    char nome[50];
    int p = -1;

    printf("\n***************EXCLUIR CONTATO****************\n");
    while(getchar() != '\n');
    printf("Digite o nome que deseja excluir:\n");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 0; i < ad; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            p = i;
            break;
        }
    }

    if (p != -1) {
        for (int i = p; i < ad - 1; i++) {
            strcpy(agenda[i].nome, agenda[i + 1].nome);
            strcpy(agenda[i].email, agenda[i + 1].email);
            strcpy(agenda[i].rua, agenda[i + 1].rua);
            strcpy(agenda[i].bairro, agenda[i + 1].bairro);
            agenda[i].numero = agenda[i + 1].numero;
            strcpy(agenda[i].complemento, agenda[i + 1].complemento);
            strcpy(agenda[i].cep, agenda[i + 1].cep);
            strcpy(agenda[i].cidade, agenda[i + 1].cidade);
            strcpy(agenda[i].estado, agenda[i + 1].estado);
            strcpy(agenda[i].pais, agenda[i + 1].pais);
            strcpy(agenda[i].ddd, agenda[i + 1].ddd);
            strcpy(agenda[i].tel, agenda[i + 1].tel);
            agenda[i].dia = agenda[i + 1].dia;
            agenda[i].mes = agenda[i + 1].mes;
            agenda[i].ano = agenda[i + 1].ano;
            strcpy(agenda[i].especial, agenda[i + 1].especial);
        }
        ad--;

        printf("Contato excluído!\n");
    } else {
        printf("Nenhum contato encontrado com esse nome\n");
    }
}


void OutrasOpcoes(){
    int op =0, nenhum =0;
    char nome[50];
    printf("Escolha as informações que deseja imprimir:\n");
    printf("1 - Nome, telefone e e-mail\n");
    printf("2 - Todos os dados\n");
    do{
        printf("\nESCOLHA UMA DAS OPÇÕES ACIMA: \n");
        scanf("%d", &op);
    }while(op<1 || op>2);

    while(getchar() != '\n');
    printf("Escolha o nome do contato que deseja imprimir:\n");
    fgets(nome, sizeof(nome), stdin);

    switch(op){
        
        case 1:
        for(int i =0; i<ad; i++){
        if(_stricmp(agenda[i].nome,nome)==0){
            printf("\n/////////////////////////////////////////////////\n");
            printf("\n***************DADOS****************\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("****************\n");
            printf("Email: %s\n", agenda[i].email);
            printf("****************\n");
            printf("Telefone: (%s) %s\n", agenda[i].ddd, agenda[i].tel);
            nenhum = 1;
        }
    }
    if(nenhum==ad){
        printf("\n/////////////////////////////////////////////////\n");
        printf("Nenhum contato encontrado com esse nome\n");
    }
    break;

    case 2:
    for(int i =0; i<ad; i++){
        if(_stricmp(agenda[i].nome,nome)==0){
            printf("\n/////////////////////////////////////////////////\n");
            printf("\n***************DADOS****************\n");
            printf("Nome: %s", agenda[i].nome);
            printf("****************\n");
            printf("Email: %s\n", agenda[i].email);
            printf("****************\n");
            printf("Endereço:\n");
            printf("--Rua: %s", agenda[i].rua);
            printf("--Bairro: %s", agenda[i].bairro);
            printf("--Número: %d\n", agenda[i].numero);
            printf("--Complemento: %s\n", agenda[i].complemento);
            printf("**\n");
            printf("CEP: %s\n", agenda[i].cep);
            printf("--Cidade: %s", agenda[i].cidade);
            printf("--Estado: %s", agenda[i].estado);
            printf("--País: %s\n", agenda[i].pais);
            printf("****************\n");
            printf("Telefone: (%s) %s\n", agenda[i].ddd, agenda[i].tel);
            printf("****************\n");
            printf("Data de Aniversário: %d/%d/%d\n", agenda[i].dia, agenda[i].mes, agenda[i].ano);
            printf("\n****************\n");
            printf("Observação: %s", agenda[i].especial);
            nenhum = 1;
        }
    }
    if(nenhum==0){
        printf("\n/////////////////////////////////////////////////\n");
        printf("Nenhum contato encontrado com esse nome\n");
    }
    break;
    
    default:
    printf("Opção inválida.\n");
    break;

    }

}
    void menu(){
        int op=0;
        do{
        printf("\n/////////////////////////////////////////////////\n");
        printf("\n\n***************MENU****************\n");
        printf("1 - Buscar nome na agenda\n");
        printf("2 - Buscar mês de aniversário de um contato na agenda\n");
        printf("3 - Buscar dia e mês de aniversário de um contato na agenda\n");
        printf("4 - Adicionar novo nome aos contatos\n");
        printf("5 - Excluir nome dos contatos\n");
        printf("6 - Outras Opções\n");
        printf("7 - Sair\n");

        do{
        printf("\nESCOLHA UMA DAS OPÇÕES ACIMA: \n");
        scanf("%d", &op);
        }while(op<1 || op>7);

        system("cls");

        switch (op){
        case 1:
        BuscaNome();
        break;
        case 2:
        BuscaMes();
        break;
        case 3:
        BuscaDiaMes();
        break;
        case 4:
        AdicionarNome();
        break;
        case 5:
        ExcluirNome();
        break;
        case 6:
        OutrasOpcoes();
        break;
        case 7:
        printf("PROGRAMA ENCERRADO\n");
        break;

        default:
        printf("Escolha Inválida\n");
        break;
        }
    }while(op!=7);
}

    int main(){
        menu();

        return 0;
    }*/