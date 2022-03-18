//Ejercicio 1
// Hacer un programa que lea caracteres desde teclado hasta que lea  7 veces la letra
//'p'.Por cada carácter leído que no sea una 'p' debe mostrar un mensaje indicándolo.
//Cuando lea las 7 letras 'p' el programa terminará.

#include <stdio.h>


char caracter;

int main()
{
	printf("");

	int i = 0;

	while (i < 7)
	{
		printf("\n\nEscribe una letra: ");
		scanf_s(" %c", &caracter, 1);
		

		if (caracter != 'p') 
		{
			printf("%c no es una p", caracter);
		}
		else
		{
			i++;
			printf("\nHas ingresado %d p, quedan %d.", i, 7 - i);

		}

	}

	return 0;

}