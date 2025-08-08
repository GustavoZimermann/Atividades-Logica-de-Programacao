#include<stdio.h>
#include<stdlib.h>

int main (void){
	printf("Digite a Temperatura em Celsius: ");
	float temperaturaCelsius;
	scanf("%f",&temperaturaCelsius);
	float temperaturaFahrenheit = (temperaturaCelsius*9/5)+32;
	printf("Temperatura Fahrenheit: %.2f",temperaturaFahrenheit);
	
	return 0;
}