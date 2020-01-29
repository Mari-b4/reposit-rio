#include "hash_encadeada.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct tipo_lista{
     char nome[50];
     struct tipo_lista *prox;
     struct tipo_lista *pred;
}lista;

struct tipo_tabela{
    int tamanho;
    lista *L;
};

lista *alocar(char *dado){
     lista *novo = (lista*)malloc(sizeof(lista));
     strcpy(novo->nome, dado);
     novo->prox = NULL;
     return novo;
}

tabela *inicializar_tabela(int TAM){
    int i;
    tabela *T = (tabela*)malloc(sizeof(tabela));
    T->L = (lista*)malloc(TAM*sizeof(lista)); //lista com cabeca
    T->tamanho = TAM;
    for(i=0; i<TAM; i++){ //inicializar cada uma das listas
        T->L[i].prox = NULL;
        T->L[i].pred = NULL;
    }
    return T;
}

//Metodo de horner para tipo string
//fonte: https://www.ime.usp.br/~pf/mac0122-2002/aulas/hashing.html
int hashing_string(char *v, int TAM) {
     int i, h = v[0];
     for (i = 0; v[i] != '\0'; i++)
          h = (h * 251 + v[i]) % TAM;
    printf("\nposicao %d", h);
    return h;
}

void inserir(tabela *T, char *dado){
    int pos, i = 0;
    pos = hashing_string(dado, T->tamanho);
    printf("\nVai inserir na posicao = %d\n", pos);
    lista *novo = alocar(dado);
//inserir no inicio da lista
    novo->prox = T->L[pos].prox;
    novo->pred = &T->L[pos]; //aponta para a cabeça da lista da posicao certa
    T->L[pos].prox = novo;
}

void mostrar(tabela *T){
    int i;
    lista *aux;
    for(i=0; i<T->tamanho; i++){
        printf("%d ", i);
        aux = T->L[i].prox;
        while(aux!=NULL){
        printf("%s ", aux->nome);
        aux=aux->prox;
        }
         printf("\n");
    }
}

int buscar(tabela *T, char*){
    lista *aux;
    int i;
    while(T->L[i].nome!=n){
        aux= T->L[i].nome;
        while(aux!=NULL){
            aux=aux->prox;
        }
    i ++;
    }
    if(aux=T->L[i].nome[50]=n){
        printf("%d", i);
        printf("%s", aux->nome);
    }

}
