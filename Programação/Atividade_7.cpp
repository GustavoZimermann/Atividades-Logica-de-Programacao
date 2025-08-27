#include <stdio.h>

int main (void){
	
	float metros;
	
	printf ("Metros: ");
	scanf ("%f",&metros);
	fflush (stdin);
	
	printf ("Centrimetros: %.2f",metros * 100);
	
	return 0;
}