#include <iostream>

#include "header.h"

int main() {
    Lista *lista= new Lista{nullptr};
    agregarLlamada(lista,"1134052474",20);
    agregarLlamada(lista,"1134052474",20);
    agregarLlamada(lista,"1134052474",20);
    agregarLlamada(lista,"1134052474",20);
    mostrarRegistroLlamadas(lista);
    return 0;
}
