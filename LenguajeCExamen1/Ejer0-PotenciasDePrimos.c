
/*
 *Ejercicio 0 
 *Programa que escriba en pantalla una tabla con cuadrados y cubos de todos
 *los números primos a partir de un número base hasta otro tope, ambos
 *pedidos por teclado.
 */

#include <stdio.h>
#include <math.h>

 //varibles
int numBase;
int numTope;

//funciones
int esPrimo(int);

int main0(int argc, char const* argv[])
{
    printf("Digite numero base: ");
    scanf_s("%d", &numBase);

    printf("Digite numero tope: ");
    scanf_s("%d", &numTope);

    printf("num \t cuadrado \t cubo");

    for (int i = numBase; i <= numTope; i++)
    {
        if (esPrimo(i))
        {
            printf("\n%d \t\t %d \t\t %d", i, (int)pow((double)i, 2), (int)pow((double)i, 3));
        }
    }


    return 0;
}

int esPrimo(int num)
{
    int primo = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
            break;
        }
    }

    if (primo == 1)
    {
        return 1;

    }
    else {

        return 0;
    }

}

