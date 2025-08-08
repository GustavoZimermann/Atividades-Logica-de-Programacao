#include <stdio.h>

int main (void){
	char nome[]="Gustavo da Silva Zimermann";
	int idade=24;
	float altura=1.85;
	double peso=91.4;
	char email[]="gustavozimermann@gmail.com";
	char cpf[]="222.005.930-13";
	char rg[]="9.526.210";
	char telefone[]="47 99845-2291";
	char endereco[]="Rua Itajai,1109";
	printf("Nome: = %s\n",nome);
	printf("Idade: = %i\n",idade);
	printf("Altura: = %.2f\n",altura);
	printf("Peso: = %.1f\n",peso);
	printf("Email: = %s\n",email);
	printf("CPF: = %s\n",cpf);
	printf("RG: = %s\n",rg);
	printf("Telefone: = %s\n",telefone);
	printf("Endereco: = %s\n",endereco);	
	
	return 0;
}
