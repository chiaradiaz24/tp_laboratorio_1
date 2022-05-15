/*
 ============================================================================
 Name        :
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "input.h"
/*#include "arrayPassenger.h"*/

int main(void) {


	int respuesta;
	int opcion;
	/*int cantidadDatos;*/


	/*cantidadDatos=0*/


	do{
		respuesta = utn_getNumero(&opcion, "Seleccione una opcion \n\n 1 . Alta\n 2 . Modificar\n 3 . Baja\n 4 . Informar\n 5 . Alta forzada\n 6 . Salir", "No es una opcion valida", 1, 6, 2);
			if(!respuesta){

				switch(opcion){

				case 1:
					/*for(int i=0; i<2; i++){
						if(eGenerica_alta(array, MAX_GEN) == 0){
							puts("CARGA OK");
							cantidadDatos++;
						}else{*/
							puts(" SE PUDO DAR DE ALTA");


					break;

				case 2:
					printf("hola mundo");
					break;



					}
				}






	}while(opcion!=6);



	return EXIT_SUCCESS;
}
