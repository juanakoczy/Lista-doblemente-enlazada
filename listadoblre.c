//
// Created by Usuario on 17/8/2023.
//

#include "listadoblre.h"
#include "malloc.h"
#include "stdio.h"


Nodo * newNodo (int dato){
    Nodo * nodo = NULL;
    nodo  = malloc(sizeof ( Nodo));

    if (nodo == NULL)
        exit -1;

    nodo->dato = dato;
    nodo->ant = NULL;
    nodo->sig = NULL;
    return nodo;
}
Lista * newLista (){

    Lista * aux = NULL;
    aux = malloc(sizeof(Lista));

    aux->cabecera = NULL;

    return aux;
}

void insertarNodo (Lista * lista, Nodo * nodo){
if (lista -> cabecera == NULL){
    lista -> cabecera = nodo;
}
else{
    Nodo * aux = lista -> cabecera;//creo el aux
    while (aux->sig!=NULL){ //recorre hasta encontrar un campo sig vacio
        aux = aux->sig;
    }
    aux->sig = nodo;
}
}


void imprimir (Lista *lista) {
    Nodo * nodo = lista->cabecera;
    while (nodo != NULL) {
        printf("\t %d \t", nodo->dato);
        nodo = nodo->sig; // Avanzar al siguiente nodo
    }
}



void eliminarNodo (Lista * lista,int valorAEliminar){
if (lista->cabecera==NULL)
    printf("la lista esta vacia.\n");
else{
    Nodo * ant = lista->cabecera;
    Nodo * act = ant;

    while (act != NULL && act->dato != valorAEliminar){
        ant = act;
        act = act->sig;
    }
    if (act==NULL){// quiere decir que se encuenta en el ultimo campo de la lista
        printf("El valor no esta enla lista.\n");
    }
    else{
        if(act==lista->cabecera){//si es el primer elemento de la lista cambio la cabecera
            lista->cabecera = act->sig;
            free (act);
        }else {
            ant->sig = act->sig;
            free(act);
        }
    }
}

}