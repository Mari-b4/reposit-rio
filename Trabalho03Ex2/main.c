#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int menu(){
  int opcao;
  printf("\n0. Sair.");
  printf("\n1. Inserir elementos.");
  printf("\n2. Mostrar o vetor.");
  printf("\n3. Ordenar elementos por insertion sort/insercao direta.");
  printf("\n4. Ordernar os elementos por shell sort.");
  printf("\n5. Ordernar os elementos por bubble sort/bolha.");
  printf("\n6. Ordernar elementos por selection sort.");
  printf("\n7. Ordernar elementos por couting sort.");
  printf("\nEscolha a opcao: ");
  scanf("%d", &opcao);
  return opcao;
}
int main() {
  int opcao, vetor[10], B[10], i;
  do{
    opcao = menu();
    switch (opcao){
      case 1:
        for(i = 0; i < 10; i++){
            printf("Informe o valor: ");
            scanf("%i",&vetor[i]);
        }
        mostrar(vetor, 10);
      break;
        case 2:
        mostrar(vetor, 10);
      break;
      case 3:
      insertion_sort(vetor, 10);
      break;
      case 4:
        shell_sort(vetor, 10);
      break;
      case 5:
        bubble_sort(vetor, 10);
      break;
      case 6:
        selection_sort(vetor, 10);
      break;
      case 7:
        counting_sort(vetor, B, 10);
      break;

    }


  }while(opcao!=0);
  return 0;
}
