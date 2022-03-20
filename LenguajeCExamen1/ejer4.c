//4.Hacer un programa en C para calcular la serie(neperianos)
//Serie e^ x = 1 + x / 1!+ x ^ 2 / 2!+ x ^ 3 / 3!....hasta N términos

#include <stdio.h>
#include <math.h>

int main4()
{
	int n, i, x, factorial;
	float serie;

	printf("Ingrese el valor de x: ");
	scanf("%d", &x);

	printf("Ingrese el valor de N: ");
	scanf("%d", &n);

	serie = 1;
	factorial = 1;

	for (i = 1; i <= n; i++)
	{
		factorial = factorial * i;
		serie = serie + (x * pow(x, i)) / factorial;
	}

	printf("El valor de la serie es: %.2f", serie);

	return 0;
}