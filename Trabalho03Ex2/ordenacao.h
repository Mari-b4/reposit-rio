#ifndef ORDENACAO_H_INCLUDED
#define ORDENACAO_H_INCLUDED

struct tipo_lista lista;

//funcoes exportadas
void *preencher(int *V[], int tamanho);
void mostrar(int *V[], int tamanho)

void insertion_sort(int V[], int tamanho);
void shell_sort(int V[], int tamanho);
void bubble_sort(int V[], int tamanho);
void selection_sort(int V[], int tamanho);
void bucket_sort(int V[], int tamanho);
void counting_sort(int V[], int B[], int k);

#endif // ORDENACAO_H_INCLUDED
