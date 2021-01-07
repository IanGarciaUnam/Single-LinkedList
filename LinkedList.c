#include "LinkedList.h"
#include <stdlib.h>


/**
*Crea la referencia a un nodo
*
*/
Nodo* crearNodo(int *data){
	Nodo* nodo= (Nodo*)malloc(sizeof(Nodo));
	nodo->data= *data;	
	nodo->next=NULL;
	return nodo;
}


/**
*Libera el espacio ocupado por un nodo
*
*/
void destruirNodo(Nodo *nodo){
	free(nodo);
}


/**
*Inserta los números al inicio de una lista L
*
*/

void insertar_al_inicio(Lista * lista, int* data){
	Nodo* nodo= crearNodo(data);
	nodo->next= lista->cabeza;
	lista->cabeza=nodo;	
	lista->longitud++;
}


/**
*Limpia la lista hasta dejarla vacía
*
*/
void limpiar(Lista* lista){
	while(!esVacia(lista)){//lista->longitud>0){
		eliminarPrimero(lista);
	}

}

/**
*Imprime la lista L
*
*
*
*/
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

/**
*Devuelve la longitud de la lista L
*return (int) longitud de la lista
*/
int getLongitud(Lista* l){
	return l->longitud;
}

/**
*Notifica si la lista es Vacia
	return 1 TRUE  
	return 0 FALSE
*
*/
int esVacia(Lista* l){
	return l->cabeza==NULL;
}

/**
*Elimina el primer elemento  de la lista
@param Lista*(puntero) l
*/
void eliminarPrimero(Lista* l){
	if(l->cabeza){
		Nodo* eli= l->cabeza;
		l->cabeza= l->cabeza->next;
		destruirNodo(eli);
		l->longitud--;
	}	
}


	/**
	*Modifica la lista para volver en reversa
	*WARNING:método destructivo, trabaja inSITU
	*
	*NOTA: En realidad he decidido agregar este método pués lo aprendí
	*mientras me preparaba para una entrevista para Facebook,
	*No me quede en el Internship, pero tengo que decir que
	*me fascino aprender como aplicar reversa a una lista simplemente ligada
	*y también me ha dejado ver como es que quizá alguno de los pilares 
	*de las Ciencias de la computación logró vislumbrar la Programación Orientada a Objetos
	*P.D-Espero no molestar mucho con esta nota
	*
	*@param l Lista*
	*/
void reversa(Lista* l){
	if(esVacia(l))return;


	Nodo* prev;
	Nodo* current= l->cabeza;
	Nodo* siguiente;

	while(current != NULL){
		siguiente=current->next;
		current->next=prev;
		prev=current;
		current=siguiente;
	}

	l->cabeza=prev;



}




