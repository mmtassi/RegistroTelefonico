#include <iostream>

#include "header.h"

int main() {
    Lista *lista= new Lista{nullptr};
    agregarLlamada(lista,"1134052474",20);
    agregarLlamada(lista,"1134052474",20);
    agregarLlamada(lista,"1134052474",20);
    agregarLlamada(lista,"1134052474",25);
    mostrarRegistroLlamadas(lista);
    calcularDuracionTotal(lista);
    liberarMemoria(lista);
    mostrarRegistroLlamadas(lista);
    return 0;
}
