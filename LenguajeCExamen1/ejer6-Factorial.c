//6.Hacer un programa C que calcule el factorial de cualquier número x introducido por
//teclado el programa deberá terminar cuando el número digitado sea cero 0.

#include <stdio.h>

int main6()
{
	int numero = 1, factorial = 1;

	while (numero != 0)
	{
		printf("Introduce un numero: ");
		scanf("%d", &numero);
		
		if (numero != 0)
		{
			for (int i = 1; i <= numero; i++)
			{
				factorial = factorial * i;
			}
			printf("El factorial de %d es %d\n", numero, factorial);
			factorial = 1;
		}
		
	}

	return 0;
}
