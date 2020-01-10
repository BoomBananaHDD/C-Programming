// Autor: Luca Gaerisch
// Pin

#include <stdio.h>

int main(void)
{ // Start main
    int pin[4] = { 1,2,3,4 };
	int abfrage[4];
	int test=0;

	for(int i=0; i<4; i++)
	{
		printf("Bitte geben Sie die %i Ziffer ein: ", i+1);
		scanf("%i", &abfrage[i]);
	}

	for(int i=0; i<4; i++)
	{
		if(pin[i] == abfrage[i])
		{
			test=test+1;
		}
		else
		{
			printf("Fehlgeschlagen");
			return 0;
		}
	}

    if(test==4)
    {
    	printf("Eingelogt!");
    }

    return 0;
} // End main