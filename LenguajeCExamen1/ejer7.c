//7.Hacer un programa que determine, presente y calcule el promedio de todos los números primos
//encontrados entre dos números m y n dados por teclado.

#include <stdio.h>

int main7()
{
	int m, n, i, j, contador = 0, suma = 0;
	float promedio;

	printf("Ingrese el primer numero: ");
	scanf("%d", &m);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &n);

	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				contador++;
			}
		}
		if (contador == 0)
		{
			suma = suma + i;
			contador = 0;
		}
		else
		{
			contador = 0;
		}
	}
	promedio = suma / (n - m + 1);
	printf("El promedio es: %.2f", promedio);
	return 0;
}