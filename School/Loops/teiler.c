// Autor: Luca Gärisch
// Teiler einer Zahl

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int input,i,prim=0;

	printf("Bitte geben Sie die Zahl ein, für di Sie die Teiler wissen möchten: ");
	scanf("%i", &input);

	for(i=1; i<=input; i++)
	{
		if(input%i==0)
		{
			printf("%i\n", i);
			prim++;
		}
	}

	if(prim==2)
	{
		printf("Es handelt sich bei %i um eine Primzahl\n", input);
	}

	return 0;
}
