#include <stdio.h>

int main()
{
    int i,j,l; //declarando los enteros
    printf("Ingresa el numero de columnas: \n");
    scanf("%d",&l); //salvando el numero en L
    for ( i = 0; i < l; i++) //loop para las filas
    {
        for ( j = 0; j < l; j++) //loop para las columnas en cada fila
        {
            printf("*"); //imprimir * en cada columna de la fila
        }
        printf("\n");
    }
    
}
