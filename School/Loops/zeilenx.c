// Autor: Luca Gärisch
// Zeilen mit X-en

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int zeilen;

	printf("Wie viele zeilen möchten Sie ausgeben? ");
	scanf("%i", &zeilen);

	for(int i=1; i<=zeilen; i++) // Eingabe bestimmt wie oft die Schleife durchläuft
	{
		printf("%i:", i);

		for(int j=1; j<=i; j++) // Schleife läuft so oft wie die erste Schleife 
		{
			printf(" ");
		}
		printf("X\n");
	}
	return 0;
} // End main
