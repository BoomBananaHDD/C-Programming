// Autor: Luca Gärisch

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int i,j; // bennenung der zähler variablen: i,j,k...

	for(i=1; i<=10; i++) // Schleife läuft 10 mal
	{
		printf("Zeile %i: ", i);

		for(j=1; j<=i; j++) // Schleife läuft so oft wie die erste Schleife 
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
} // End main
