
#include <stdio.h>
#include <stdlib.h>




struct Nodo;



typedef struct Nodo{
	int *data;
	struct Nodo* next;

}Nodo;

typedef struct LinkedList{
	struct Nodo* cabeza;
	struct Nodo* cola;
	int *tamano;
}Lista;

void inicializacion(Lista *lista);
int insertar_al_inicio(Lista *lista, int *data);
int elimina_primero(Lista *lista);
void imprime_lista(Lista *lista);




int main(){

	Lista* l = (struct LinkedList*)malloc(sizeof( struct LinkedList));
	int *c ;
	int a=120;
	c= &a;

	inicializacion(l);
	insertar_al_inicio(l,c);
	int v=1223;
	c= &v;
	insertar_al_inicio(l,c);
	int x=233;
	c= &x;
	insertar_al_inicio(l,c);

	/*To see data value 
	printf("%i", *l->cabeza->data );
	*/
	/**printf("%i\n", *l->cabeza->data );
	printf("%i\n", *l->cola->data );**/
	imprime_lista(l);
	printf("\nBienaventurados los hombres de buena fe\n");


}


void inicializacion(Lista *lista){
	lista->cabeza = (struct Nodo*)malloc(sizeof( struct Nodo));
	lista->cola = (struct Nodo*)malloc(sizeof( struct Nodo));
	lista->tamano =0;
}

int insertar_al_inicio(Lista *lista, int *numero){
	if(lista->tamano==0){
		lista->cabeza->data=numero;
		lista->cola=lista->cabeza;
		lista->tamano++;
		return 0;
	}

	Nodo n;
	n.data=numero;
	n.next=lista->cabeza;
	lista->cabeza= &n;
	lista->tamano++;
	return 0;

}

int elimina_primero(Lista *lista){

if(*lista->tamano == 1){
	inicializacion(lista);
	return 0;
}

lista->cabeza=lista->cabeza->next;
return 0;

}

void imprime_lista(Lista *lista){

	Nodo *head= lista->cabeza;

	int tamano=*lista->tamano;
	int arr [tamano];
	int counter=0;
	while( head != NULL){

		arr[counter]= *head->data;
			counter++;

		head= head->next;
	
	}


	printf("[");
	for(int i=0; i< tamano ; i++){
	printf("%i ,",arr[i]);

	}


	printf("]");

}
