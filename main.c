#include "stdio.h"
#include "listadoblre.h"

int main() {

    Lista * lista = newLista();


    insertarNodo(lista, newNodo(2));
    insertarNodo(lista, newNodo(3));
    insertarNodo(lista, newNodo(4));
    insertarNodo(lista, newNodo(5));
    imprimir(lista);

    eliminarNodo(lista,3);
    printf ("\n");
    imprimir(lista);

    eliminarNodo(lista,2);
    printf ("\n");
    imprimir(lista);

    return 0;
}
