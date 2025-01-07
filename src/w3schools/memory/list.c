#include <stdio.h>
#include <stdlib.h>

struct List {
    int *data, numItems, size;
};

void addToList(struct List *myList, int item);

int main() {

    // Criando uma lista e iniciando com um tamanho suficiente para 10 items
    struct List myList;
    int amount;
    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    // Verificando se a alocação de memória foi realizada com sucesso
    if (myList.data == NULL) {
        puts("Falha de alocação de memória.");
        return 1;
    }

    // Adicionando itens a lista
    amount = 25;

    for (int i = 0; i < amount; i++) {
        addToList(&myList, i + 1);
    }

    // Mostrando o conteúdo da lista
    for (int j = 0; j < myList.numItems; j++) {
        printf("%d\t", myList.data[j]);
    }

    // Liberando memória quando não for mais necessário
    // Isso é uma boa prática para prevenir vazamento de memória
    free(myList.data);
    myList.data = NULL;

    return 0;
}

void addToList(struct List *myList, int item) {

    if (myList->numItems == myList->size) {
        myList->size += 10;
        myList->data = realloc(myList->data, myList->size * sizeof(int));
    }

    // Adicionando item ao final da lista
    myList->data[myList->numItems] = item;
    myList->numItems++;
}