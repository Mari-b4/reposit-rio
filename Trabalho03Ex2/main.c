#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int menu(){
  int opcao;
  printf("\n0. Sair.");
  printf("\n1. Inserir elementos.");
  printf("\n2. Ordenar elementos por insertion sort/insercao direta.");
  printf("\n3. Ordernar os elementos por shell sort.");
  printf("\n4. Ordernar os elementos por bubble sort/bolha.");
  printf("\n5. Ordernar elementos por selection sort.");
  printf("\n6. Ordernar elementos por bucket sort.");
  printf("\n7. Ordernar elementos por couting sort.");
  printf("\nEscolha a opcao: ");
  scanf("%d", &opcao);
  return opcao;
}
int main() {
  int opcao, vetor[10], dado, n, i;
  do{
    opcao = menu();
    switch (opcao){
      case 1:
        if (qt<10){
              for(i = 0; i < qt; i++){
                  printf("Informe o valor");
                  scanf("%i",&vetor[i]);
              }
        }else{
          printf("Só é possivel cadastrar 10 valores");
        }
      break;
      case 2:
      //n sei como implementar no main
      break;
    }


  }while(opcao!=0);
  return 0;
}
