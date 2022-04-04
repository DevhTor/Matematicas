//5.Hacer un programa en C para calcular la
//Serie coseno(x) = 1-x^2 / 2! + x^4 / 4! - x^6 / 6! Hasta N términos

#include <stdio.h>
#include <math.h>

int main5()
{
	int n, i, x, factorial;
	float suma = 0;

	printf("Ingrese el valor de N: ");
	scanf("%d", &n);

	printf("Ingrese el valor de X: ");
	scanf("%d", &x);

	for (i = 1; i <= n; i++)
	{
		factorial = 1;
		for (int j = 1; j <= i; j++)
		{
			factorial *= j;
		}
		suma += pow(-1, i) * pow(x, 2 * i) / factorial;
	}

	printf("El resultado es: %.2f", suma);

	return 0;
}
