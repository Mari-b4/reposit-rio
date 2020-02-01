#ifndef ORDENACAO_H_INCLUDED
#define ORDENACAO_H_INCLUDED

struct tipo_lista lista;

//funcoes exportadas
lista* criar(int tam);
void liberar(lista* L); //libera a memoria ocupada pela lista
void inicializar(lista* L);
void inserir_inicio(lista* L, int valor);
void mostrar(lista* L);
void inserir_fim(lista* L, int valor);

void ordenar_insercao(int A[], int tamanho);
void ordenar_shellsort(int v[], int tam);
void ordenar_bolha(int A[], int tam);
void bucket_sort(int A[]);
void ordenar_selecao(int A[], int tamanho);
void bucket_sort(int A[]);
void counting-sort(int A[], int B[], int k);
radix-sort(int A[], int d);

#endif // ORDENACAO_H_INCLUDED
