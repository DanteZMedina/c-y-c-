#include <stdio.h>

int main()
{
	float altura1, altura2;
	int peso1, peso2;
	float ibm1, ibm2;
	
	printf("Ingresa tu altura 1: \n");
	scanf("%d", &altura1);
	
	printf("Ingresa tu altura 2: \n");
	scanf("%d", &altura2);
	
	printf("Ingresa tu peso 1: \n");
	scanf("%d", &peso1);
	
	printf("ingresa tu peso 2: \n");
	scanf("%d", &peso2);
	
	ibm1 = peso1/(altura1*altura1);
	ibm2 = peso2/(altura2*altura2);
	
	printf("La masa corporal de la persona 1 es: \n ",ibm1);
    printf("La masa corporal de la persona 2 es: \n",ibm2);
    
	
}
