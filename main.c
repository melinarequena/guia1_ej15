#include <stdio.h>
#include "Numeros.h"


int main() {
    Lista * lista1 = newLista();
    Lista * lista2 = newLista();

    enlistar(newNumero(1), lista1);
    enlistar(newNumero(2), lista1);
    enlistar(newNumero(3), lista1);
    enlistar(newNumero(4), lista1);
    enlistar(newNumero(5), lista1);
    enlistar(newNumero(6), lista2);
    enlistar(newNumero(7), lista2);
    enlistar(newNumero(8), lista2);
    enlistar(newNumero(9), lista2);

    concatenar(lista1, lista2);
    printear(lista1);



    printf("Hello, World!\n");
    return 0;
}
