#include <stdio.h>

int main(void)
{
	int n;

	printf("Escriba su numero: ");
	scanf("%d", &n);

	if (n > 0)
		printf("El numero %d es positivo\n", n);
	else	
		if (n == 0)
		printf("El numero %d es cero\n", n);
		else 
		printf("El numero %d es negativo\n", n);	
	return (0);
}
