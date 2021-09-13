#include <stdio.h>

int main()

{
    int i,j,k,r; 
    printf("Ingresa el numero de filas: \n");
    scanf("%d", &r); //guardamos en R 
    for (i=r; i>0; i--) //numero de filas
    {
        for (k=r; k>i; k--) // espacios para antes de la piramide
        {
            printf(" "); //espacio en blanco
        }
        
        for (j=0; j<i*2-1; j++)
        {
            if (i==r)
            {
                printf("*");
            }
            else
            {
                if (j==0||j==i*2-2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }        
            }          
        }
        printf("\n");        
    }

}
