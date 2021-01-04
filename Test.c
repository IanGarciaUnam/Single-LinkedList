#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <setjmp.h>
#include "LinkedList.h"
#include <stdlib.h>
#include "LinkedList.c"
#include <assert.h>




int testInsertar(int veces){
	
}

int main(){

		int veces= rand()%1000;
	Lista* original =(Lista*) malloc(sizeof(Lista));
	for(int i=0; i<=veces; i++){
		int x=rand()%11 +100;
		insertar_al_inicio(original,&x);
	}
	printf("s");
	Lista* copia_reversa=(Lista*) malloc(sizeof(Lista));
	copia_reversa =reversa(original);
	int pruebas=0;

	if(getLongitud(original)==getLongitud(copia_reversa)){
		pruebas=1;
	}
	
	printf("Prueba de inserción%d\n", pruebas);
	

	


	return 0;



}