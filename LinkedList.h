
#ifndef LinkedList_h
#define LinkedList_h
#include <stdio.h>
#include <stdlib.h>




typedef struct Nodo{
	int data;
	struct Nodo* next;

}Nodo;

typedef struct Lista{
	 Nodo* cabeza;
	int longitud;
}Lista;

void insertar_al_inicio(Lista * lista, int* data);
void imprime(Lista* lista);
int esVacia(Lista* l);
void eliminarPrimero(Lista* l);

#endif /*LinkedList.h*/
