#include <stdio.h>

int main (void){
	
	int metros;
	
	printf ("Metros: ");
	scanf ("%i",&metros);
	fflush (stdin);
	
	printf ("Centrimetros: %.2i",metros * 100);
	
	return 0;
}