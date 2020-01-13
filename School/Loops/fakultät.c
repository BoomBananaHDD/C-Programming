// Autor: Luca Gärisch
// Fakultät.c

#include <stdio.h>

int main(void)
{ // Start main
	//Variablendeklaration
	int input,i,fak=1;

	printf("Fakultaet (!)\n===========\n");
	scanf("%i", &input);

	// Berechnung der Fakultät mit: for-schleife
	for(i=1; i<=input; i++)
	{
		fak=i*fak;
		// printf("%i runs, %i fak\n", i, fak); //Test Ausgabe
	}

	// Ausgabe Ergebnis
	printf("%i! = %i\n", input, fak);

	return 0;
} // End main
