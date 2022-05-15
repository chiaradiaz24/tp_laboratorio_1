/*
 * input.h
 *
 *  Created on: 14 may. 2022
 *      Author: Chiara
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#ifndef INPUT_H_
#define INPUT_H_



#endif /* INPUT_H_ */

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int getInt(int* pResultado);
int esNumerica(char* cadena, int limite);
int myGets(char* cadena , int longitud);
