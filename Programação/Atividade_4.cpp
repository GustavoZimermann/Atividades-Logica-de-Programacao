#include<stdio.h>
#include<stdlib.h>

int main (void){
	float temperaturaCelsius;
	printf("Digite a Temperatura em Celsius: ");
	scanf("%f",&temperaturaCelsius);
	fflush(stdin);
	float temperaturaFahrenheit = (temperaturaCelsius*9/5)+32;
	printf("Temperatura Fahrenheit: %.2f",temperaturaFahrenheit);
	fflush(stdin);
	return 0;
}