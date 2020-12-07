#include "LinkedList.h"
#include <stdlib.h>



Nodo* crearNodo(int *data){
	Nodo* nodo= (Nodo*)malloc(sizeof(Nodo));
	nodo->data= *data;	
	nodo->next=NULL;
	return nodo;
}

void destruirNodo(Nodo *nodo){
	free(nodo);
}

void insertar_al_inicio(Lista * lista, int* data){
	Nodo* nodo= crearNodo(data);
	nodo->next= lista->cabeza;
	lista->cabeza=nodo;	
	lista->longitud++;
}

void limpiar(Lista* lista){
	while(lista->longitud>0){
		eliminarPrimero(lista);
	}

}
void imprime(Lista* lista){

Nodo *eye;
	if(lista->cabeza==NULL){
		printf("[]");
		return;
	}

	eye=lista->cabeza;

	printf("[");
	while(eye != NULL){
		printf("%i, ", eye->data);
		eye=eye->next;

	}
	printf("]");


}

int getLongitud(Lista* l){
	return l->longitud;
}

int esVacia(Lista* l){
	return l->cabeza==NULL;
}


void eliminarPrimero(Lista* l){


	if(l->cabeza){
		Nodo* eli= l->cabeza;
		l->cabeza= l->cabeza->next;
		destruirNodo(eli);
		l->longitud--;
	}	
}

