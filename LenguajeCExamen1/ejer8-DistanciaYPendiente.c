//8.Hacer un programa que dada N parejas de puntos(x, y) y(h, k) determine la distancias entre
//estos y la pendiente formada por la recta que los une.

#include <stdio.h>
#include <math.h>

int main8()
{
	int x1, x2, y1, y2, z1, z2;
	float distancia, pendiente;
	
	printf("Ingrese la coordenada x1: ");
	scanf("%d", &x1);
	
	printf("Ingrese la coordenada y1: ");
	scanf("%d", &y1);

	printf("Ingrese la coordenada x2: ");
	scanf("%d", &x2);
	
	printf("Ingrese la coordenada y2: ");
	scanf("%d", &y2);
	
	printf("Ingrese la coordenada z1: ");
	scanf("%d", &z1);
	
	printf("Ingrese la coordenada z2: ");
	scanf("%d", &z2);
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
	
	pendiente = (y2 - y1) / (x2 - x1);
	
	printf("La distancia entre los puntos es: %.2f\n", distancia);
	
	printf("La pendiente es: %.2f\n", pendiente);
	

	return 0;
}
