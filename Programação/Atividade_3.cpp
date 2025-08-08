#include<stdio.h>
#include<stdlib.h>

int main (void){
	//	Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF),	
	//	transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F32)/9}
	printf("Digite a temperatura em Fahrenheit: ");
	float temperaturaFahrenheit;
	scanf("%f", &temperaturaFahrenheit);
	float temperaturaCelsius =  (temperaturaFahrenheit-32)*5/9;
	printf("Temperatura Celsius %.2f",temperaturaCelsius);

	return 0;
}

	