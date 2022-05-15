/*
 * input.c
 *
 *  Created on: 14 may. 2022
 *      Author: Chiara
 */


#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos){
	int retorno = -1;

	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo<=maximo && reintentos>=0){
    	do{
    	printf ("%s", mensaje);


    	if(getInt(&bufferInt) ==0 && bufferInt>= minimo && bufferInt <=maximo){
    	*pResultado= bufferInt;
    	retorno =0;
    	break;
    	}else{
    	printf ("%s", mensajeError);
    	reintentos--;
    	}

    	 }while (reintentos>=0);
	}

    	return retorno;

	}



int myGets (char* cadena , int longitud)
{
		int retorno=1;
		char bufferString[6];
		if(cadena != NULL && longitud >0)
		{
		fflush(stdin);
		if(fgets(bufferString, sizeof(bufferString),stdin) != NULL)
		if(bufferString[strnlen(bufferString,sizeof(bufferString))-1]== '\n'){
		    bufferString[strnlen(bufferString,sizeof(bufferString))-1]= '\0';
		}
		if(strnlen(bufferString,sizeof(bufferString))<=longitud)
		{
		strncpy(cadena, bufferString, longitud);
		retorno =0;
		}

	}
	return retorno;
}








int getInt(int* pResultado)
{
	int retorno = 1;
	char bufferString[50];
			if(pResultado !=NULL && myGets(bufferString, sizeof(bufferString)) ==0 && esNumerica(bufferString, sizeof(bufferString)))
			{
			retorno =0;
			*pResultado= atoi(bufferString);
			}
			return retorno;
		}

//FUNCION ESNUMERICA
int esNumerica(char* cadena, int limite){
	int retorno =1;
	int i;
		for ( i=0; i< limite && cadena[i] != '\0'; i++)
		{
		if (i==0 && (cadena[i] == '+' || cadena[i] == '+'))
		{
			continue;
		}
		if (cadena[i] > '9' || cadena [i] < '0')
		{
			retorno =0;
			break;
		}

	}
		return retorno;
}
