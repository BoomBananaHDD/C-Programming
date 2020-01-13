// Autor: Luca Gärisch
// durchläufe zählen

#include <stdio.h>

int main(void)
{ // Start main
	//Variablendeklaration
	int durchlauf,i;

	printf("Durchläufe eingeben: ");
	scanf("%i", &durchlauf);

	for(i=1; i<=durchlauf; i++)
	{
		printf("Dies ist der %i Schleifendurchlauf!\n", i);
	}
	return 0;
} // End main
