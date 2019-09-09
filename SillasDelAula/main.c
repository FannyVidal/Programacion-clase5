#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int main()
{
    int arrayDeSillas[CANTIDAD];
    int arrayDeEdades[CANTIDAD];
    int maximo;
    int minimo;

    cargarArrayConHardcode(arrayDeSillas, CANTIDAD);
    HardcodearEdades(arrayDeEdades, CANTIDAD);
    cargarArrayDeEdades(arrayDeEdades,CANTIDAD);
    printf("TODOS:\n");
    mostrarTodosLosDatos(arrayDeSillas, arrayDeEdades, CANTIDAD);
    printf("\n\nLOS MAS VIEJOS:\n");
    mostrarLosMasViejos(arrayDeSillas, arrayDeEdades, CANTIDAD);

    return 0;
}
