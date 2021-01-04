#include "LinkedList.h"
#include <stdlib.h>
#include "LinkedList.c"


/***
*Prueba la ejección y utilización de una LinkedList
*
*/
int main(){

	Lista* original =(Lista*) malloc(sizeof(Lista));
	int prueba=0;
	int veces= rand()%11+1000;
	printf("Insertando %d de elementos a la lista\n\n", veces+1);

	for(int i=0; i<=veces; i++){
		int x=rand()%11 +100;
		insertar_al_inicio(original,&x);

	}



	////Prueba de longitud
	if(getLongitud(original)==veces+1){
		printf("\nPrueba de longitud e inserción [1]\n");
		prueba+=2;
	}else{
		printf("\nPrueba de longitud [0]\n");
	}

	



	imprime(original);
	limpiar(original);
	if(getLongitud(original)== 0){
		printf("\nPrueba de limpia [1]\n");
		prueba+=1;
	}else{
		printf("\nPrueba de limpia [0]\n");
	}
	imprime(original);
	printf("\n");

	if(esVacia(original)){
		prueba+=1;
		printf("\nPrueba de vacío [1]\n");
	}else{
		printf("Prueba de vacío [0]\n");
	}

	printf("\n====Passed %d de 4 tests============\n", prueba);


	return 0;
	}


