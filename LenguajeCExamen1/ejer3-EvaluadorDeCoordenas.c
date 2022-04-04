//Leer un punto(x, y) y  le de al usuario las siguientes opciones para calcular :
//(utilizando switch - case)
//si el punto está sobre una circunferencia de radio 7 y centro en(0, 0)
//Si el punto pertenece a la recta que pasa por los puntos(1, 2) y(-2, -1)
//salir

#include <stdio.h>

main3()
{
	float x, y;
	int opcion;
	float radio = 7;
	float x1 = 1, y1 = 2;
	float x2 = -2, y2 = -1;

	printf("Ingrese el valor de x: ");
	scanf("%f", &x);
	printf("Ingrese el valor de y: ");
	scanf("%f", &y);

	printf("\n");

	printf("1. Si el punto esta sobre una circunferencia de radio 7 y centro en(0, 0)\n");
	printf("2. Si el punto pertenece a la recta que pasa por los puntos(1, 2) y(-2, -1)\n");
	printf("3. Salir\n");

	printf("\n");

	printf("Ingrese la opcion: ");
	scanf("%d", &opcion);

	switch (opcion)
	{
	case 1:
		if ((x * x + y * y) <= radio * radio)
		{
			printf("El punto esta sobre la circunferencia\n");
		}
		else
		{
			printf("El punto no esta sobre la circunferencia\n");
		}
		break;
	case 2:
		if ((x1 * x + y1 * y) * (x2 * x + y2 * y) <= 0)
		{
			printf("El punto pertenece a la recta\n");
		}
		else
		{
			printf("El punto no pertenece a la recta\n");
		}
		break;
	case 3:
		printf("Saliendo...\n");
		break;
	default:
		printf("Opcion invalida\n");
		break;
	}
	
}
