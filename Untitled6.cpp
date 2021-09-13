#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Ingresa el largo del rectangulo: \n");
    scanf("%d",&r);
    printf("Ingresa el ancho del rectangulo: \n");
    scanf("%d", &c);

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

}
