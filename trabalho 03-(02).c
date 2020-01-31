#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>

void ordenar_insercao(int A[], int tamanho){
    int i, chave, j;
    for (j=1; j<tamanho; j++){
        chave = A[j];
        i=j-1;
        while((i>=0) && (A[i]>chave)){
            A[i+1] = A[i];
            i--;
        }
        A[i+1]= chave;
    }
}

void ordenar_shellsort02(int v[], int tam){
    int h = tam / 2;
    int chave, j, i;
    while(h > 0){
        for(j = h; j < tam; j=j+h){
            chave = v[j];
            i = j;
            while(i >= h && v[i - h] > chave){
                v[i] = v[i - h];
                i = i - h;
            }
            v[i] = chave;
        }
        h = h / 2;
    }
}

void ordernar_bolha(int A[], int tam){
    int aux, i, j;
    for(i=0; i<tam; i++){
        for(j=0; j < tam-1-i; j++){
            if(A[j] > A[j+1]){
                aux= A[j];
                A[j]= A[j+1];
                A[j+1]= aux;
            }
        }
    }
}

void ordenar_selecao(int A[], int tamanho){
    int i, j, pos, menor;
    for (i=0; i < tamanho - 1; i++){
        pos = i;
        menor = A[i];
        for (j= i+1; j < tamanho; j++){
            if (A[j] < menor){
                pos = j;
                menor = A[pos];
            }
        }
        A[pos] = A[i];
        A[i]= menor;
    }
}

void bucket_sort(int A[]){
    int B[], i;
    n= sizeof(A);
    for(i=1, i < n-1, i++){
        B[i]
    }
    
}
