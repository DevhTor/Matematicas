//2.Escribir un programa que muestre el siguiente menú y que permita pasar
//magnitudes de grados Celsius a grados Fahrenheit.
//
//Pasar de C.a F
//Pasar de F.a C
//Salir del programa

#include <stdio.h>

int opcion;

int main2()
{
	do
	{
		printf("\n\nMenu");
		printf("\n\n1-Pasar de C. a F");
		printf("\n2-Pasar de F. a C");
		printf("\n3-Salir del programa");
		
		printf("\n\nOpcion: ");
		scanf("%d", &opcion);
		
		if (opcion == 1)
		{
			float gradosCelsius;
			float gradosFahrenheit;

			printf("\nPasar de C. a F");
			printf("\n\nGrados Celsius: ");
			scanf("%f", &gradosCelsius);

			gradosFahrenheit = (gradosCelsius * 9 / 5) + 32;

			printf("\nGrados Fahrenheit: %.2f", gradosFahrenheit);
		}
		else if (opcion == 2)
		{
			float gradosFahrenheit;
			float gradosCelsius;

			printf("\nPasar de F. a C");
			printf("\n\nGrados Fahrenheit: ");
			scanf("%f", &gradosFahrenheit);

			gradosCelsius = (gradosFahrenheit - 32) * 5 / 9;

			printf("\nGrados Celsius: %.2f", gradosCelsius);
		}
		else if (opcion == 3)
		{
			exit(-1);
		}
		else
		{
			printf("\nOpcion incorrecta");
		}
		
	} while (opcion != 3);

		return 0;
}