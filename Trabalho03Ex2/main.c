#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
int menuLista(){
    int opcao;
    printf("\nOpcoes:");
    printf("\n0. Sair");
    printf("\n1. Inserir um numero no inicio da lista");
    printf("\n2. Mostrar a lista");
    printf("\nInforme a opcao: ");
    scanf("%d", &opcao);
    return opcao;
}
int main() {
int opcao, elemento;
lista *L;
L = criar(TAM);
inicializar(L);
do{
opcao = menu();
switch (opcao){
case 1: printf("\nInforme o valor: ");
scanf("%d", &elemento);
inserir_inicio (L, elemento);
break;
case 2: printf("\nValores armazenados no vetor:\n");
mostrar(L);
break;
}
}while(opcao);
liberar(L);
return 0;
}


int const TAM = 5;
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
printf("\n8. Ordernar elementos por radix sort.");
//eh bom fazer funcao eliminar elemento?
printf("\nEscolha a opcao: ");
scanf("%d", &opcao);
return opcao;
}
int main() {
    int opcao, A[50], dado, n, i;
do{
    opcao = menu();
    switch (opcao){
        case 1:
            printf("\nQuantos elementor serao inseridos?");
            scanf("%d", n);
            for(i=0; i<n; i++){
                printf("\nInsira o elemento: ");
                scanf("%d", dado);
                A[i]=dado;
            }
            break;
        case 2:
            //n sei como implementar no main
            break;
    }


    }while(opcao);
    return 0;
}

