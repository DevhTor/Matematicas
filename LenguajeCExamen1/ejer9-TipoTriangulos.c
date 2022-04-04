//9.Hacer un programa en C que datos 3 puntos(x1, y1), (x2, y2) y(x3, y3) determinar que tipo de
//triangulo forman de acuerdo a sus lados.

#include <stdio.h>
#include <math.h>

int main9()
{
	float x1, y1, x2, y2, z1, z2, lado1, lado2, lado3;
	
	printf("Ingrese coordenada x1: ");
	scanf("%f", &x1);
	
	printf("Ingrese coordenada y1: ");
	scanf("%f", &y1);
	
	printf("Ingrese coordenada x2: ");
	scanf("%f", &x2);
	
	printf("Ingrese coordenada y2: ");
	scanf("%f", &y2);
	
	printf("Ingrese coordenada x3: ");
	scanf("%f", &z1);
	
	printf("Ingrese coordenada y3: ");
	scanf("%f", &z2);
		
	
	lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	lado2 = sqrt(pow(z1 - x2, 2) + pow(z2 - y2, 2));
	lado3 = sqrt(pow(x1 - z1, 2) + pow(y1 - z2, 2));
	if (lado1 == lado2 && lado2 == lado3)
	{
		printf("El triangulo es equilatero");
	}
	else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
	{
		printf("El triangulo es isosceles");
	}
	else
	{
		printf("El triangulo es escaleno");
	}
	return 0;
}
