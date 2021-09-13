#include <stdio.h>
int main()
{
    int r,i,j;
    printf("Ingresa el numero de filas: \n");
    scanf("%d", &r);

    for (i=0; i<r; i++) //loo para el numero de filas
    {
        for (j=0; j<=i; j++) //loop para las estrellas por fila
        {
            printf("*");
        }
        printf("\n");
    }  
}

