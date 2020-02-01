#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>

struct tipo_lista
{
    int tamanho;
    int index; //indica próxima posicao disponível no final da lista
    int *vetor;
};

lista* criar (int tam)
{
    lista *temp = (lista*) malloc(sizeof(lista));
    temp -> vetor = (int*) malloc(tam*sizeof(int));
    temp -> tamanho = tam;
    temp -> index = 0;
    return temp;
}
void liberar(lista* L)
{
    free(L->vetor);
    free(L);
}
void inicializar(lista* L)
{
    int i;
    for (i=0; i<L->tamanho; i++)
    {
        L->vetor[i] = 0;
    }
}
int lista_cheia(lista* L)
{
    if (L->index == L->tamanho)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void inserir_inicio(lista* L, int valor)
{
    int i;
    if(!lista_cheia(L))
    {
        for(i=L->index; i>0; i--)
        {
            L->vetor[i] = L->vetor[i-1];
        }
        L->vetor[0] = valor;
        L->index++;
    }
    else
    {
        printf("Lista cheia!");
    }
}

void mostrar(lista* L)
{
    int i;
    for(i=0; i<L->tamanho; i++)
    {
        printf("%d ", L->vetor[i]);
    }
}

void ordenar_insercao(int A[], int tamanho)
{
    int i, chave, j;
    for (j=1; j<tamanho; j++)
    {
        chave = A[j];
        i=j-1;
        while((i>=0) && (A[i]>chave))
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1]= chave;
    }
}

void ordenar_shellsort(int v[], int tam)
{
    int h = tam / 2;
    int chave, j, i;
    while(h > 0)
    {
        for(j = h; j < tam; j=j+h)
        {
            chave = v[j];
            i = j;
            while(i >= h && v[i - h] > chave)
            {
                v[i] = v[i - h];
                i = i - h;
            }
            v[i] = chave;
        }
        h = h / 2;
    }
}

void ordernar_bolha(int A[], int tam)
{
    int aux, i, j;
    for(i=0; i<tam; i++)
    {
        for(j=0; j < tam-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                aux= A[j];
                A[j]= A[j+1];
                A[j+1]= aux;
            }
        }
    }
}

void ordenar_selecao(int A[], int tamanho)
{
    int i, j, pos, menor;
    for (i=0; i < tamanho - 1; i++)
    {
        pos = i;
        menor = A[i];
        for (j= i+1; j < tamanho; j++)
        {
            if (A[j] < menor)
            {
                pos = j;
                menor = A[pos];
            }
        }
        A[pos] = A[i];
        A[i]= menor;
    }
}

void bucket_sort(int A[]) //tentando adicionar lista simples pra esse, mas n sei do que preciso ex:liberar, inserir fim
{
    int B[], i;
    n= sizeof(A);
    for(i=1, i < n-1, i++)
    {
        B[i]
    }
    //nao terminado
}

void counting-sort(int A[], int B[], int k) //n sei se ta certo
{
    int n,j, i, C[];
    n=sizeof(A);
    for(i=0; i<k; i++)
    {
        C[i]=0;
    }
    for(j=1; j<n; j++)
    {
        C[A[j]]=C[A[j]]+1;
    }
    for(i=1; i<k; i++)
    {
        C[i]=C[i]+C[i+1];
    }
    for(j=n; j>1; j++)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]=C[A[j]];
    }
}

radix-sort(int A[], int d)
{
    //no slide ta escrito "usar uma ordenaçao estavel para ordernar o arranjo A sobre o digito 1 (geralmente, a ordenaçao por contagem é utilizada
}

