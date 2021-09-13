#include <stdio.h>
int main   ()
{
    int j,k,r,i;
    printf("Filas \n");
    scanf("%d", &r);

    for(i=0; i<r; i++)
    {
        for(k=r; k>i+1; k--)
        {
            printf(" ");
        }
        for(j=0; j<=i*2; j++)
        {
            printf("X");
        }
        printf("\n\n");
    }
}
