#include <stdio.h>

int main(void){

	float horasTrabalhadas,ganhoPorHora;

	
	printf("Ganho por Hora: ");
	scanf("%f",&ganhoPorHora);
	fflush(stdin);
	
	printf("Horas trabalhadas: ");
	scanf("%f",&horasTrabalhadas);
	fflush(stdin);
	
	printf("Salario do Mes: %.2f",ganhoPorHora * horasTrabalhadas);
	
	return 0;
}