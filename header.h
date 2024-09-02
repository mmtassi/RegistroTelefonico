//
// Created by matiast on 02/09/24.
//

#ifndef HEADER_H
#define HEADER_H

struct Llamadas {
    char *numero;
    int duracion;
    Llamadas *sig;
};

struct Lista {
    Llamadas *cab;
};

//Llamadas* newNodo(char *numero,int duracion);
Lista* newLista();
void agregarLlamada(Lista *lista, char *numero,int duracion);
void mostrarRegistroLlamadas(Lista* lista);
void calcularDuracionTotal(Lista *lista);
void liberarMemoria(Lista* lista);

#endif //HEADER_H
