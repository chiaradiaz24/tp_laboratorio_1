/*
 ============================================================================
 Name        : tps_laboratorio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "archivo.h"



int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int ingresarKilometros;
	int km = 7090;
	int latam =159339;
	float precioDebitoLatam2;
	float precioDebitoAerolineas2;
	int aerolineasArgentinas=162965;
	char opcionDos;
	int precioLatam;
	int precioAerolineas;
	float precioDebitoAerolineas;
	float precioDebitoLatam  ;
	double precioBitcoinLatam;
	double precioBitcoinAerolineas;
	double precioBitcoinLatam2;
	double precioBitcoinAerolineas2;
	double bitcoin = 4606954.55;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioCreditoAerolineas2;
	float precioCreditoLatam2;
	float precioUnitarioLatam;
	float precioUnitarioAerolinea;
	float precioUnitarioLatam2;
	float precioUnitarioAerolinea2;
	float diferencia;
	float diferencia2;
	float interes = 1.25;
	float descuento;
	int flagKm=0, flagPrecioLatam=0, flagPrecioAerolineas=0;

	descuento = 0.90;



	do
	{
		printf("1. ingresar kilometros:\n");
		printf("2. Ingresar Precio de Vuelos:\n");

		printf("3. Calcular todos los costos:\n");
		printf("4. Informar Resultados\n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir \n");
		printf("Ingrese una opcion:\n");
		scanf("%d", &opcion);




		switch(opcion)
		{
		case 1:
			do{
			printf("ingresar km x:");
			scanf("%d", &ingresarKilometros);

			if(ingresarKilometros <=0)
			{
				printf("Error. Ingrese un numero valido mayor que cero");

			}
			}while(ingresarKilometros<0 && ingresarKilometros!=0);
			flagKm=1;
			break;
		case 2:

			do{
			system("cls");
			printf(" z.precio latam \n");
			printf(" y. precio aerolineas \n");
			printf(" x. salir\n");
			printf(" Ingrese una opcion:\n");
			scanf("%c", &opcionDos);
			switch(opcionDos)
			{
				case 'z':
				printf("Ingresar Precio vuelo Latam");
				scanf("%d", &precioLatam);
				flagPrecioLatam=1;

				case 'y':
				printf("Ingresar Precio vuelo Aerolineas");
				scanf("%d", &precioAerolineas);
				 flagPrecioAerolineas=1;
			}	}while(opcionDos!='x');




			break;
		case 3:
			if(flagKm==1 && flagPrecioLatam==1 &&  flagPrecioAerolineas==1){
				precioDebitoLatam = calcularCostoDebito(precioLatam, descuento);
				precioDebitoAerolineas = calcularCostoDebito(precioAerolineas, descuento);
				precioCreditoLatam = calcularTarjetaCredito(precioLatam, interes);
				precioCreditoAerolineas = calcularTarjetaCredito(precioAerolineas, interes);
				precioBitcoinLatam = calcularBitcoin(precioLatam, bitcoin);
				precioBitcoinAerolineas = calcularBitcoin(precioAerolineas, bitcoin);
				precioUnitarioAerolinea = calcularPrecioUnitario(precioAerolineas, ingresarKilometros);
				precioUnitarioLatam = calcularPrecioUnitario(precioLatam, ingresarKilometros);
				diferencia = calcularDiferencia (precioLatam, precioAerolineas);




			}



			break;

		case 4:
			system("cls");
			printf("Los kilometro ingresados son: %d\n",ingresarKilometros);
			printf("Precio aerolineas: %d\n",precioAerolineas);
			printf("el costo con debito es: %.2f\n",precioDebitoAerolineas);
			printf("el costo con credito es: %.2f\n",precioCreditoAerolineas);
			printf("el costo con bitcoin es: %lf\n",precioBitcoinAerolineas);
			printf("el precio unitario es: %lf\n",precioUnitarioAerolinea);
			printf("Precio Latam: %d\n", precioLatam);
			printf("el costo con debito es: %.2f\n",precioDebitoLatam);
			printf("el costo con credito es: %.2f\n",precioCreditoLatam);
			printf("el costo con bitcoin es: %lf\n",precioBitcoinLatam);
			printf("el precio unitario es: %.2lf\n",precioUnitarioLatam);

			printf("La diferencia de precio es : %f\n",diferencia);
			break;
		case 5:
			precioDebitoLatam2 = calcularCostoDebito(latam, descuento);
			precioDebitoAerolineas2 = calcularCostoDebito(aerolineasArgentinas, descuento);
			precioCreditoLatam2 = calcularTarjetaCredito(latam, interes);
			precioCreditoAerolineas2 = calcularTarjetaCredito(aerolineasArgentinas, interes);
			precioBitcoinLatam2 = calcularBitcoin(latam, bitcoin);
			precioBitcoinAerolineas2 = calcularBitcoin(aerolineasArgentinas, bitcoin);
			precioUnitarioAerolinea2 = calcularPrecioUnitario(aerolineasArgentinas, km);
			precioUnitarioLatam2 = calcularPrecioUnitario(latam, km);
			diferencia2 = calcularDiferencia (latam, aerolineasArgentinas);

			printf("Los kilometro ingresados son: %d\n",km);
			printf("Precio aerolineas: %d\n",aerolineasArgentinas);
			printf("el costo con debito es: %.2f\n",precioDebitoAerolineas2);
			printf("el costo con credito es: %.2f\n",precioCreditoAerolineas2);
			printf("el costo con bitcoin es: %lf\n",precioBitcoinAerolineas2);
			printf("el precio unitario es: %.2lf\n",precioUnitarioAerolinea2);
			printf("Precio Latam: %d\n", latam);
			printf("el costo con debito es: %.2f\n",precioDebitoLatam2);
			printf("el costo con credito es: %.2f\n",precioCreditoLatam2);
			printf("el costo con bitcoin es: %lf\n",precioBitcoinLatam2);
			printf("el precio unitario es: %.2lf\n",precioUnitarioLatam2);

						printf("La diferencia de precio es : %f\n",diferencia2);


			break;
		case 6:
			printf("gracias por usar el promgrama");
			break;
		}

	}while(opcion!=6);


	return EXIT_SUCCESS;
}
