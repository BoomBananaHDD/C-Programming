// Autor: Luca Gärisch
// Kamm

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int zacken,lang,abstand;
	int i,j,k;

	// Abfrage der eingabe
	printf("\nBitte geben Sie ein wie viele Zacken der Kamm besitzen soll: ");
	scanf("%i", &zacken);
	printf("Bitte geben Sie ein wie lang die Zacken sein sollen: ");
	scanf("%i", &lang);
	printf("Bitte geben Sie ein wie groß der Abstand zwischen den Zacken sein soll: ");
	scanf("%i", &abstand);
	printf("\n");

	// Schleifen für den kamm
	for(i=1; i<=zacken; i++)
	{
		for(j=1; j<=lang; j++)
		{
			printf("*");
		}
		printf("\n");

		for(k=1; k<=abstand; k++)
		{
			printf("*\n");
		}
	}
	return 0;
} // End main
