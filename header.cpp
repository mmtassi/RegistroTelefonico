//
// Created by matiast on 02/09/24.
//

#include "header.h"

#include <cstring>
#include <iostream>

/*Llamadas * newNodo(char *numero, int duracion) {
    Llamadas *aux=new Llamadas();
    if(aux == NULL) {
        std::cout <<"No hay memoria disponible" << std::endl;
        exit(-1);
    }
    strcpy(aux->numero,numero);
    aux->duracion=duracion;
    aux->sig=nullptr;
    return aux;
}

Lista * newLista() {
    Lista *aux=new Lista();
    if(aux == NULL) {
        std::cout <<"No hay memoria disponible" << std::endl;
        exit(-1);
    }
    aux->cab=nullptr;
    return aux;
}*/

void agregarLlamada(Lista *lista, char *numero, int duracion) {
    if(lista->cab==nullptr) {
        lista->cab=new Llamadas{numero,duracion,nullptr};
    }else {
        Llamadas *aux=lista->cab;
        while (aux->sig != nullptr) {
            aux=aux->sig;
        }
        aux->sig=new Llamadas{numero,duracion,nullptr};
    }
}

void mostrarRegistroLlamadas(Lista* lista) {
    Llamadas *aux=lista->cab;
    int i=1;
    while (aux != nullptr) {
        std::cout<<"Numero de llamada: "<< i << std::endl;
        std::cout<<"Numero: "<< aux->numero << std::endl;
        std::cout<<"Duracion: "<< aux->numero <<"\n"<< std::endl;
        i++;
        aux=aux->sig;
    }
}
