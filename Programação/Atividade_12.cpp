#include <stdio.h>

int main (void){
	
	int maquina, m1=1, m2=2, m3=3, rm1, rm2, rm3, valorMaquina=3900, valorTotal, vm1=1500, vm2=300, vm3=600;
	
	printf("Digite a quantidade de maquinas: ");
	scanf("%i",&maquina);
	fflush(stdin);
	
	rm1 = maquina * m1;
	rm2 = maquina * m2;
	rm3 = maquina * m3;
	valorTotal=valorMaquina*maquina;
	
	
	
	printf("Quantidade de motores de 20cv: %i, 1cv: %i, 5cv: %i",rm1,rm2,rm3);
	printf("\nCusto total da maquina: R$ %i\n",valorMaquina);
	printf("Custo por motor de 20CV: R$%i\nCusto por motor de 1CV: R$%i\nCusto por motor de 5CV: R$%i\n",vm1*maquina,vm2*maquina,vm3*maquina);
	printf("Custo total da compra: R$%i",maquina * valorMaquina);
	
	return 0;
}