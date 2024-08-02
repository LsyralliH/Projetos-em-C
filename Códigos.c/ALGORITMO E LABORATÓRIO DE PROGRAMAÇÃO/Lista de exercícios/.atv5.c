//1
/*
#include <stdio.h>

int main(){
  int matriz[3][3];
  int vetor[5];
    
    printf("Escreva 9 numeros para preencher a matriz:\n");
  for(int i=0;i<3;i++){
      for( int j=0;j<3;j++){
          printf("Matriz[%d][%d]:", i,j);
          scanf("%d", &matriz[i][j]);
      }
     }
     
     printf("\nEscreva 5 valores para o vetor:\n");
     for(int i = 0; i<5;i++){
         scanf("%d", &vetor[i]);
  }
  printf("\nSAIDA:\n\n");

for(int k=0; k<5;k++){
    printf("MULTIPLICADO POR %d:\n", vetor[k]);

  for(int i=0;i<3;i++){
      for( int j=0;j<3;j++){
            printf("Matriz[%d][%d]:", i,j);
          printf("%d", matriz[i][j]*vetor[k]);
          printf("\n");
      }
      printf("\n");
      
      }
     
      
  }
    return 0;
  } */

//2

/*#include <stdio.h>

int main() {
  char matriz[2][50];
  char nome[50], email[50];
    
     printf("Digite o nome:\n");
      fgets(nome, sizeof(nome), stdin);
      printf("Digite o email:\n");
      fgets(email, sizeof(email), stdin);
      
      for (int i = 0; i < 50; i++) {
        matriz[0][i] = nome[i];
        matriz[1][i] = email[i];
        }
      

      printf("\nNome: %s", matriz[0]);
      printf("Email: %s\n", matriz[1]);

      return 0;
      }*/



/*#include <stdio.h>
//2
int main() {
  char matriz[2][50];
  char nome[50], email[50];

  printf("Digite o nome do usuario:\n");
  scanf("%s", nome);

  printf("Digite o email do usuario:\n");
  scanf("%s", email);

  // Copy the name and email strings to the matrix
  for (int i = 0; i < 50; i++) {
    matriz[0][i] = nome[i];
    matriz[1][i] = email[i];
  }

  // Print the name and email from the matrix
  printf("Nome: %s\n", matriz[0]);
  printf("Email: %s\n", matriz[1]);

  return 0;
}*/

 /* #include <stdio.h>
//2
int main() {
  char matriz[1][50];
  char nome[50], email[50];
    
     printf("Digite o nome:\n");
      scanf("%s", &nome);
      printf("Digite o email:\n");
      scanf("%s", &email);


      strcpy(matriz[0], nome);
      strcpy(matriz[1], email);


      printf("%s\n", matriz[0]);
      printf("%s\n", matriz[1]);*/

//3 
#include <stdio.h>

int main() {
  int matriz[4][5];


  printf("Escreva numeros pares para preencher a matriz 4x5:\n");
  for(int i=0;i<4;i++){
      for( int j=0;j<5;j++){
        scanf("%d", &matriz[i][j]);
        while (matriz[i][j]%2 != 0){
        printf("Escreva um valor par:\n");
        scanf("%d", &matriz[i][j]);
       
        } 
      }
  }

  printf("\nSAIDA:\n\n");

  printf("Matriz 4x5:");
  for(int i=0;i<4;i++){
    printf("\n");
      for( int j=0;j<5;j++){
        printf(" %d ", matriz[i][j]);
      }
  }

}