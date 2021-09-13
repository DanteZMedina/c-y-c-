#include <stdio.h>
int main()
{
    int i,j,l; //Declarando enteros
    printf("Ingresa el numero de filas: \n");
    scanf("%d", &l);
    for ( i = 0; i < l; i++) //loop externo de las filas
    {
        for ( j = 0; j < l; j++)//loop interno para las * en cada fila 
        {
            if (i==0 || i==l-1 || j==0 || j==l-1)//condicion para imprimir estrellas
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
