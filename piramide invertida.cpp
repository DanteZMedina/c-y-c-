#include <stdio.h>
int main()
{
    int j,k,r,i;
    printf("ingrese el numero de filas \n");
    scanf("%d",&r);

    for (i=r; i>0; i++)
    {
        for ( k = r; k > i; k++)
        {
            printf(" ");
        }
        for ( j = 0; j <i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
