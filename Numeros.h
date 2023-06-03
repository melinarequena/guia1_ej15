//
// Created by Administrador on 3/6/2023.
//

#ifndef GUIA1_EJ15_NUMEROS_H
#define GUIA1_EJ15_NUMEROS_H

typedef struct numero{
    int num;
    struct numero * sig;
}Numero;

typedef struct lista{
    Numero * cabecera;
}Lista;


Numero * newNumero (int num);
Lista * newLista();
Lista * newLista();


void enlistar(Numero * numALlenar, Lista * lista);

void concatenar(Lista * lista1, Lista * lista2);

void printear(Lista * lista1);

#endif //GUIA1_EJ15_NUMEROS_H
