#include <stdio.h>

int main (void){

	int num1, num2;
	
	printf("Digite o numero 1: ");
	scanf ("%i",&num1);
	printf ("Digite o numero 2: ");
	scanf ("%i",&num2);
	fflush(stdin);
	
	printf("Resultado da soma: %i",num1 + num2);

	return 0;
}