// Autor: Luca Gärisch
// Zahlenreihe

#include <stdio.h>

int main(void)
{ // Start main
	//Variablendeklaration
	int anfang,ende,runs,k,out;

	printf("Bitte geben Sie die Anfangszahl an: ");
	scanf("%i", &anfang);
	out=anfang;
	printf("Bitte geben Sie die Endzahl an: ");
	scanf("%i", &ende);

	for(runs=0; runs<(k=ende-anfang); runs++)
	{
		printf("%i, ", out++); 
	}
	printf("%i\n", ende);

	return 0;
} // End main
