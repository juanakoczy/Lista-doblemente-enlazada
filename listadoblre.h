//
// Created by Usuario on 17/8/2023.
//

#ifndef LISTA_DOBLEMENTE_ENLAZADA_LISTADOBLRE_H
#define LISTA_DOBLEMENTE_ENLAZADA_LISTADOBLRE_H

typedef struct nodo{
    int dato;
    struct nodo * ant;
    struct nodo * sig;
}Nodo;

typedef struct lista{

    Nodo * cabecera;

}Lista;

Nodo * newNodo (int dato);
Lista * newLista ();

void insertarNodo (Lista * lista, Nodo * nodo);
void imprimir (Lista * lista);
void eliminarNodo (Lista * lista, int valorAEliminar);

#endif //LISTA_DOBLEMENTE_ENLAZADA_LISTADOBLRE_H
