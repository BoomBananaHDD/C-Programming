// Autor: Luca gaerisch
// Mittelwert

#include <stdio.h>

int main(void)
{ // Start main
	int zahlen;
	float summe;

	printf("Aus wie vielen Zahlen moechten Sie nden Mittelwert berechnen? ");
	scanf("%i", &zahlen);
	float feld[zahlen];

	for(int i=0; i<zahlen; i++)
	{
		printf("Bitte geben Sie %i. Zahl an: ", i+1);
		scanf("%f", &feld[i]);
		summe+=feld[i];
	}

	printf("Der Mittelwert aus ");

	for(int i=0; i<zahlen; i++)
	{
		printf("%.2f ", feld[i]);
	}

	summe=summe/zahlen;
	printf("ist %.2f\n", summe);

	return 0;
} // End main
		
