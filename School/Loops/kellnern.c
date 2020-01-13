// Autor: Luca Gärisch
// Kellnern

#include <stdio.h>

int main(void)
{ //Start main
	// Variablendeklaration
	int kellner, tische, i, j;
	double umsatz,summe=0;

	printf("Wie viele Kellner haben heute gearbeitet? ");
	scanf("%i", &kellner);
	printf("Wie viele Tische haben Sie im Restaurant? ");
	scanf("%i", &tische);

	for(i=1; i<=kellner; i++)
	{
		for(j=1; j<=tische; j++)
		{
			printf("Kellner %i, wie viel Umsatz haben Sie an Tisch %i gemacht? ", i, j);
			scanf("%lf", &umsatz);
			summe+=umsatz;
		} // End for (tische)
	} // End for (kellner)

	printf("Der gesamte Umsatz heute Abend beträgt: %.2f €\n", summe);

	return 0;
} // End main
