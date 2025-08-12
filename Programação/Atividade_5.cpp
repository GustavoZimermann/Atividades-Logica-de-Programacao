#include <stdio.h>

int main (void){
	
	// Construa um algoritmo que peça 2 números inteiros e um número real. 
	// o produto do dobro do primeiro com metade do segundo .
	// a soma do triplo do primeiro com o terceiro. 
	// o terceiro elevado ao cubo. 
	
	int num1,num2;
	float num3;
	
	float calculo1,calculo2,calculo3;

	
	printf ("Digite o numero 1: ");
	scanf ("%i",&num1);
	fflush(stdin);
	
	printf ("Digite o numero 2: ");
	scanf ("%i",&num2);
	fflush(stdin);
	
	printf ("Digite o numero 3: ");
	scanf ("%f",&num3);
	
	
	calculo1 = (2 * num1) * (num2/2);
	printf ("Calculo 1: %.2f\n",calculo1);
	
	calculo2 = 3 * num1 + num3;
	printf ("Calculo 2: %.2f\n",calculo2);
	
	calculo3 = num3 * num3 * num3;
	printf ("Calculo 3: %.2f",calculo3);
	
	

	return 0;
}