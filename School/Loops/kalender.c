// Autor: Luca Gärisch
// Kalender

#include <stdio.h>

int main(void)
{ // Start main
	//Variablendeklaration
	int i,j;

	for(i=1; i<=12; i++) // Monats Schleife
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) // Monate mit 31 Tagen
		{
			for(j=1; j<=31; j++)
			{
				printf("%i.%i  ", j, i);
			}
		}
		else if(i==2) // Februar hat nur 28 Tage
		{
			for(j=1; j<=28; j++)
			{
				printf("%i.%i  ", j, i);
			}
		}
		else // Monate mit 30 Tagen
		{
			for(j=1; j<=30; j++)
			{
				printf("%i.%i  ", j, i);
			}
		}
		printf("\n");
	}

	return 0;
} // End main
