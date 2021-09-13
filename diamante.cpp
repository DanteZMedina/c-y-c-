#include <stdio.h>
int main()
{
    int i,j,k,r;
    printf("ingrese la cantidad de filas \n");
    scanf("%d", &r);

    for ( i = 0; i < r; i++)
    {
        if (i<=(r/2))
        {
            for ( k = r/2; k >i ; k--)
            {
                printf(" ");
            }
            for ( j = 0; j <= i; j++)
            {
                printf("*");
            }
            
        }
        else
        {
            for ( k = r/2; k < i; k++)
            {
                printf(" ");
            }
            for ( j = i; j < r; j++)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    
}
