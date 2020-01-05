// Autor: Luca Gaerisch
// Zahlen Raten

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();

int main(void)
{ // Start main

    int versuche=0,eingabe;

    int random = get_random();
	
	for (;;)
    {
        versuche++;
		printf("Rate mal welche Zahl ich weiss! ");
		scanf("%i", &eingabe);
		if(eingabe<random)
		{
			printf("Zahl ist groesser als %i\n", eingabe);
		}
		else if(eingabe>random)
		{
			printf("Zahl ist kleiner als %i\n", eingabe);
		}
		else if(eingabe==random)
		{
			printf("\nRichtig!! Die zahl war %i\n", random);
			printf("Du hast %i versuche gebraucht!\n", versuche);
		}
    }

    return 0;
} // End main

int get_random()
{
	srand(time(NULL));
	return rand() % 100+1;
}