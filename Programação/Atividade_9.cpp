#include <stdio.h>

int main(void){
	
	float nota1, nota2, nota3, nota4;
	
	printf("Nota 1: ");
	scanf("%f",&nota1);
	fflush(stdin);
	
	printf("Nota 2: ");
	scanf("%f",&nota2);
	fflush(stdin);
	
	printf("Nota 3: ");
	scanf("%f",&nota3);
	fflush(stdin);
	
	printf("Nota 4: ");
	scanf("%f",&nota4);
	fflush(stdin);
	
	printf ("Media: %.1f",(nota1 + nota2 + nota3 + nota4) / 4);
	return 0;
}