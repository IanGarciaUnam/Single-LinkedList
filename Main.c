#include "LinkedList.h"
#include <stdlib.h>
#include "LinkedList.c"


/***
*Prueba la ejección y utilización de una LinkedList
*Referente a los siguientes métodos:
* -insertar_al_inicio(Lista* l)
*	-getLongitud(Lista* l)
*	-imprime(Lista* l)
* 	-esVacia(LIsta* l)
* 	-eliminaPrimero(Lista* l)
* 	-reversa(Lista* l)
*/
int main(){

	Lista* original =(Lista*) malloc(sizeof(Lista));
	int prueba=0;
	int veces= rand()%11+10;
	printf("Insertando %d de elementos a la lista\n\n", veces+1);

	for(int i=0; i<=veces; i++){
		int x=rand()%11 +100;
		insertar_al_inicio(original,&x);

	}



	////Prueba de longitud
	if(getLongitud(original)==veces+1){

		prueba+=2;
	}
	printf("\nPrueba de longitud e inserción [%d]\n",getLongitud(original)==veces+1);

	imprime(original);
	limpiar(original);
	if(getLongitud(original)== 0){
		prueba+=1;
	}
	printf("\nPrueba de limpia [%d]\n", getLongitud(original)==0);
	imprime(original);
	printf("\n");

	if(esVacia(original)){
		prueba+=1;
	}
		printf("\nPrueba de vacío [%d]\n",esVacia(original));

		reversa(original);
		printf("\nPrueba de reversa -vacía [%d]\n", original->cabeza==NULL);
	if(original->cabeza==NULL){
		prueba+=1;
	}

	int times=rand()%100;
	for(int i=0; i<=times; i++){
		int x=rand()%11 +100;
		insertar_al_inicio(original,&x);

	}

			int tamanoInicio=getLongitud(original);
	printf("Original:\n");
	imprime(original);

	reversa(original);
	printf("\n");
	printf("Reversa: \n");
	imprime(original);
	int tamanoFinal=getLongitud(original);

		printf("\nPrueba de reversa [%d]\n",tamanoFinal==tamanoInicio);

	if(tamanoInicio==tamanoFinal){
		prueba+=1;
	}

	printf("\n====Passed %d de 6 tests============\n", prueba);




	return 0;
	}


