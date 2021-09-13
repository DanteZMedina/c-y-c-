#include <stdio.h>
int main()
{
    int i,j,l;
    printf("Ingresa el numero de filas: \n");
    scanf("%d", &l);
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" ");  
        }
        for ( j = 0; j < l; j++)
            {
             printf("*");   
            }
            printf("\n");
    }
    
}
