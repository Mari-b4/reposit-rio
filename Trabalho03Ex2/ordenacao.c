#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>


void mostrar(int V[], int tamanho)
{
    int i;
    for(i=0; i<tamanho; i++){
        printf("%d ", V[i]);
    }
}

void insertion_sort(int V[], int tamanho)
{
    int i, chave, j;
    for (j=1; j<tamanho; j++){
        chave = V[j];
        i = j-1;
        while((i>=0) && (V[i]>chave))
        {
            V[i+1] = V[i];
            i--;
        }
        V[i+1]= chave;
    }
    mostrar(V, tamanho);
}

void shell_sort(int V[], int tam)
{
    int h = tam / 2;
    int chave, j, i;
    while(h > 0)
    {
        for(j = h; j < tam; j=j+h)
        {
            chave = V[j];
            i = j;
            while(i >= h && V[i - h] > chave)
            {
                V[i] = V[i - h];
                i = i - h;
            }
            V[i] = chave;
        }
        h = h / 2;
    }
    mostrar(V, tam);
}

void bubble_sort(int V[], int tam)
{
    int aux, i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam-1; j++){
            if(V[j] > V[j+1]){
                aux= V[j];
                V[j]= V[j+1];
                V[j+1]= aux;
            }
        }
    }
    mostrar(V, tam);
}

void selection_sort(int V[], int tamanho)
{
    int i, j, chave, menor, pos;
    for (i=0; i<tamanho-1; i++){
        chave = V[i];
        menor = V[i+1];
        pos = i+1;
        for (j= i+1; j < tamanho; j++){
            if (V[j] < menor){
                menor = V[j];
                pos = j;
            }
        }
        if(menor<chave){
          V[i] = V[pos];
          V[i]= chave;
        }
    }
    mostrar(V, tamanho);
}

void counting_sort(int V[], int B[], int tamanho){
    int n, j, i, C[tamanho];
    n = sizeof(V);
    for(i=0; i<tamanho; i++){
        C[i]=0;
    }

    for(j=1; j<n; j++){
        C[V[j]]=C[V[j]]+1;
    }

    for(i=1; i<tamanho; i++){
        C[i]=C[i]+C[i-1];
    }

    for(j=n; j>1; j++){
        B[C[V[j]]]=V[j];
        C[V[j]]=C[V[j]];
    }
    mostrar(V, tamanho);
}
