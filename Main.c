#include "LinkedList.h"
#include <stdlib.h>
#include "LinkedList.c"



int main(){

	Lista* c =(Lista*) malloc(sizeof(Lista));

	int veces= rand()%11+100000;
	printf("Insertando %i de elementos a la lista\n\n", &veces);

	for(int i=0; i<=veces; i++){

	int x=rand()%11 +100;
	insertar_al_inicio(c,&x);
	}

	printf("Longitud de la Lista: %i \n", getLongitud(c));
	imprime(c);


	int eliminables = rand()%12+veces;
	printf("Eliminando %i elementos\n", eliminables);

	for(int i=0; i<eliminables; i++){

		eliminarPrimero(c);

	}


	imprime(c);



	printf("Lista con %i elementos\n",getLongitud(c));

	printf("Limpiar lista\n");

	limpiar(c);

	printf("Lista con %i elementos\n",getLongitud(c));






}