#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Node {
    int qtd;
    int vetor[MAX];
};

typedef struct {
    int qtd;
    int vetor[MAX];
} No;

// declarações das funções
struct Node criarLista();
void imprimirLista(struct Node lista);
void add(struct Node *lista, int info);
void addNoInicio(struct Node *lista, int info);
void removerNoFim(struct Node *lista);

int main(){
    struct Node lista = criarLista();

    add(&lista, 10);
    add(&lista, 11);
    add(&lista, 13);
    add(&lista, 18);
    add(&lista, 1);

    printf("Lista original: ");
    imprimirLista(lista);

    removerNoFim(&lista);
    removerNoFim(&lista);

    printf("\nApós remover 2 elementos: ");
    imprimirLista(lista);

    addNoInicio(&lista, 99);
    printf("\nApós adicionar 99 no início: ");
    imprimirLista(lista);

    printf("\n");
    return 0;
}

struct Node criarLista(){
    struct Node a;
    a.qtd = 0;
    return a;
}

void imprimirLista(struct Node lista){
    printf("[");
    for (int i = 0; i < lista.qtd; i++){
        if (i < lista.qtd - 1)
            printf("%d, ", lista.vetor[i]);
        else
            printf("%d", lista.vetor[i]);
    }
    printf("]");
}

void add(struct Node *lista, int info){
    if (lista->qtd >= MAX){
        printf("Lista cheia!\n");
        return;
    }
    lista->vetor[lista->qtd] = info;
    lista->qtd++;
}

void addNoInicio(struct Node *lista, int info){
    if (lista->qtd >= MAX){
        printf("Lista cheia!\n");
        return;
    }
    // desloca todos os elementos uma posição para a direita
    for (int i = lista->qtd; i > 0; i--){
        lista->vetor[i] = lista->vetor[i - 1];
    }
    lista->vetor[0] = info;
    lista->qtd++;
}

void removerNoFim(struct Node *lista){
    if (lista->qtd <= 0){
        printf("Lista vazia!\n");
        return;
    }
    lista->qtd--;
}