#include "hash_encadeada.h"
#include <stdio.h>
#include <stdlib.h>
int const TAM = 5;
int menu()
{
    int opcao;
    printf("\n0. Sair");
    printf("\n1. Inserir nome na tabela");
    printf("\n2. Mostrar tabela");
    printf("\n3. Buscar dado na tabela");
    printf("\n4. Remover dado da tabela");
    printf("\nEscolha a opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

int main(){
    int opcao;
    char dado[50], n;
    tabela *T = inicializar_tabela(TAM);
    do{
        opcao = menu();
        switch (opcao){
            case 1:
                printf("\nInforme um nome: ");
                scanf("%s", &dado);
                inserir(T, dado);
                break;
            case 2:
                printf("\nTabela:\n");
                mostrar(T);
                break;
            case 3://n sei qq to fazendo
                printf("\n Qual o nome procurado? ");
                scanf("%s", &n);
                buscar(T, & n);
                if(buscar){
                    printf("\nElemento encontrado.");
                }else{
                    printf("\nElemento nao encontrado.");
                }
                break;
            case 4:
                break;
        }


    }while(opcao);
    return 0;
}
