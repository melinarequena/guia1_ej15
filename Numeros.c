//
// Created by Administrador on 3/6/2023.
//

#include "Numeros.h"
#include <stdio.h>
#include <stdlib.h>

Numero * newNumero(int num){
    Numero * auxNumero = NULL;
    auxNumero = malloc(sizeof (Numero));
    if(auxNumero == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }
    auxNumero->sig = NULL;
    auxNumero->num = num;

    return auxNumero;
}

Lista * newLista(){
    Lista * auxLista = NULL;
    auxLista = malloc(sizeof (Lista));
    if(auxLista == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }
    auxLista->cabecera = NULL;

    return auxLista;
}

void enlistar(Numero *numALlenar, Lista *lista) {
    if(lista->cabecera == NULL){
        lista->cabecera = numALlenar;
    }else {
        Numero *auxLista = lista->cabecera;
        while (auxLista->sig != NULL) {
            auxLista = auxLista->sig;
        }
        auxLista->sig = numALlenar;
    }
}


void concatenar(Lista * lista1, Lista * lista2){
    if(lista1->cabecera == NULL){//lista 1 vacia
        Numero * auxLista2 = lista2->cabecera;
        Numero * auxLista1 = lista1->cabecera;
        while(auxLista2->sig != NULL){
            auxLista1 = auxLista2;
            auxLista1 = auxLista1->sig;
            auxLista2 = auxLista2->sig;
        }
    }else{
        Numero * auxLista1 = lista1->cabecera;
        Numero * auxLista2 = lista2->cabecera;
        while(auxLista1->sig != NULL){
            auxLista1 = auxLista1->sig;
        }
        auxLista1->sig = auxLista2;
        while(auxLista2 != NULL){
            auxLista1->sig->sig = auxLista2->sig;
            auxLista1->sig->sig = auxLista1->sig->sig->sig;
            auxLista2->sig = auxLista2->sig->sig;
        }
    }
}

void printear(Lista * lista1){
    while(lista1->cabecera!= NULL){
        printf("%d\n", lista1->cabecera->num);
    }
}