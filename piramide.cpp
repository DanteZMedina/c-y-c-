#include <stdio.h>
int main()
{
    int i,k,r,l,j;
    printf("Ingrese el numero de filas: \n ");
    scanf("%d",&r);
    for ( i = 0; i < r; i++) //loop externo para numero de filas
    {
        for ( k = 0; k>i+1; k--) //numero de espacios.
        {
            printf(" ");
        }

        for ( j = 0; j <=i*2 ; j++) //loop anidado para imprimir *
        {
            if (i==r-1) //condicion para imprimir la ultima fila
            {
                printf("*");
            }
            else 
            {
                if (j==0|| j>=i*2) //condicion para imprimir mas estrellas
                {
                    printf("*");
                }
                else
                {
                    printf(" ");//condicion para imprimir espacios en blanco
                }
                
            }
            
        }
        printf("\n");
        
    }
    
}
