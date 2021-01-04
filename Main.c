#include "LinkedList.h"
#include <stdlib.h>
#include "LinkedList.c"



int main(){

<<<<<<< HEAD
	Lista* original =(Lista*) malloc(sizeof(Lista));
	int prueba=0;
	int veces= rand()%11+20;
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


	for(int i=0; i<=veces; i++){
		int x=rand()%11 +100;
		insertar_al_inicio(original,&x);

	}

	imprime(original);
	Lista* salida = (Lista*) malloc(sizeof(Lista));
	reversa(original, salida);
	imprime(salida);


	return 0;
	}


=======
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
>>>>>>> 3702883c33f51bcaed428c55d72fcd6e1605f9fd
