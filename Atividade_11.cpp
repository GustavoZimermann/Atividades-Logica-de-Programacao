#include <stdio.h>

int main(void){
	
	float valorDia = 25;
	float diasTrabalhados;
	float impostoDeRenda = 0.08;
	
	printf ("Dias Trabalhados: ");
	scanf("%f",&diasTrabalhados);
	fflush(stdin);
	
	
	printf("A pagar: %.2f",(valorDia * diasTrabalhados) - (valorDia *diasTrabalhados * impostoDeRenda));
	
	return 0;
}