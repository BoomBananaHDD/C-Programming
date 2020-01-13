// Autor: Luca Gärisch
// zahlenraten.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int eingabe,zufallszahl,versuche=0;

	srand(time(NULL));
	zufallszahl= rand() % 100+1; // Der Modulo gibt den Zahlenbereich an

	do
	{
		versuche++;
		printf("Rate mal welche Zahl ich weiß! ");
		scanf("%i", &eingabe);
		if(eingabe<zufallszahl)
		{
			printf("Zahl ist größer als %i\n", eingabe);
		}
		else if(eingabe>zufallszahl)
		{
			printf("Zahl ist kleiner als %i\n", eingabe);
		}

		if(eingabe==zufallszahl)
		{
			printf("\nRichtig!! Die zahl war %i\n", zufallszahl);
			printf("Du hast %i versuche gebraucht!\n", versuche);
		}
	}while(eingabe!=zufallszahl);

	return 0;
} // End main
