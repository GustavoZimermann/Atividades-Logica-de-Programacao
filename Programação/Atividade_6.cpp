#include <stdio.h>

int main (void){

	float raio;
	float pi = 3.14;
	
	printf ("Digite o raio: ");
	scanf ("%f",&raio);
	fflush(stdin);
	
	printf ("Area do Circulo: %.1f",pi * (raio * raio));
	
	
	return 0;
}