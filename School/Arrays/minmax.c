// Autor: Luca Gaerisch
// Minimum Maximum

#include <stdio.h>

int main(void)
{ // Start main
	int zahlen;
	int min,max;

	printf("Wie viele zahlen wollen Sie eingeben? ");
	scanf("%i", &zahlen);
	int eingabe[zahlen];

	for(int i=0; i<zahlen; i++)
	{ // Start for
		printf("Bitte geben Sie die %i Zahl an: ", i+1);
		scanf("%i", &eingabe[i]);

		if(i == 0)
		{
			min=eingabe[0];
			max=eingabe[0];
		}

		if(eingabe[i]<min)
		{
			min=eingabe[i];
		}
		else if(eingabe[i]>max)
		{
			max=eingabe[i];
		}
	} // End for

	printf("Maximum: %i\n", max);
	printf("Minimum: %i\n", min);

	return 0;
} // End main
