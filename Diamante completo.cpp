#include <stdio.h>
int main()
{
    int i,j,k,r;
    printf("Ingresa el numero de lineas \n");
    scanf("%d",&r);

    for (i=0; i<r; i++)
    {
        if (i<=r/2)
        {
              for (k=r/2; k>i; k--)
                {
                    printf(" ");
                }
              for (j=0; j<=i^2; j++)
              {
                  printf("*");
              }       
        }
        else
        {
            for (k=r^2; k<i; k++)
            {
                printf(" ");
            }
            for (j=0; j<((r-i)^2); j++)
            {
                printf("*");
            }  
        }   
        printf("\n");
    }  
}
