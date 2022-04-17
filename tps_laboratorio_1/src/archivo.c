/*
 * archivo.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Chiara
 */

#include "archivo.h"

/**
 * @fn float calcularCostoDebito(int, float)
 * @brief calcula el costo que le sale pagando con debito, calcula el precio por el descuento
 *
 * @param valor
 * @param valor2
 * @return flotante
 */


float calcularCostoDebito(int valor, float valor2)
{
	float resultado;



	resultado = valor * valor2;

	return resultado;
}

/**
 * @fn float calcularTarjetaCredito(int, float)
 * @brief calcula el valor que le va a salir si paga con tarjeta de credito, calcula el interes por el precio
 *
 * @param valor
 * @param valor2
 * @return flotante
 */
float calcularTarjetaCredito(int valor , float valor2)
{
	float resultado;

	resultado = valor * valor2;

	return resultado;
	}

/**
 * @fn double calcularBitcoin(int, double)
 * @brief calcula lo que le va a salir si paga con bitcoin, se calcula precio dividido el valor de bitcoin
 *
 * @param valor
 * @param valor2
 * @return double
 */
double calcularBitcoin(int valor, double valor2)
{
	double resultado;


	resultado = valor/valor2;

	return resultado;
	}
/**
 * @fn double calcularPrecioUnitario(int, int)
 * @brief calcula lo que le va a salir el precio unitario, o sea se divide el precio por los kilometros ingresados
 *
 * @param valor
 * @param valor2
 * @return double
 */
double calcularPrecioUnitario(int valor, int valor2)
{
	double resultado;

	resultado=(float) valor /valor2;

	return resultado;
	}
/**
 * @fn float calcularDiferencia(int, int)
 * @brief calcula la diferencia que hay entre el precio ingresado por Latam y el precio ingresado por Aerolineas
 *
 * @param valor
 * @param valor2
 * @return flotante
 */
float calcularDiferencia (int valor, int valor2)
{
	float resultado;

	resultado = valor - valor2;
	if(resultado<0)
	{
		resultado = resultado *-1;
	}

	return resultado;
	}
