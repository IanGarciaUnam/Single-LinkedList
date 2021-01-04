
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
<<<<<<< HEAD
void agrega_al_inicio(Lista* lista, Nodo* n);
void imprime(Lista* lista);
int esVacia(Lista* l);
void eliminarPrimero(Lista* l);
void reversa(Lista* l, Lista* c);
=======
void imprime(Lista* lista);
int esVacia(Lista* l);
void eliminarPrimero(Lista* l);

>>>>>>> 3702883c33f51bcaed428c55d72fcd6e1605f9fd
#endif /*LinkedList.h*/
