// Autor: Luca Gaerisch
// Diät

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int mahlzeit,tage,i,j;
	double kal,gesamt=0;

	printf("Tage? ");
	scanf("%i", &tage);
	printf("Mahlzeiten am Tag? ");
	scanf("%i", &mahlzeit);

	for(i=1; i<=tage; i++)
	{
		for(j=1; j<=mahlzeit; j++)
		{
			printf("%i Tag, %i mahlzeit, kalorien: ", i, j);
			scanf("%lf", &kal);
			gesamt+=kal;
		} // End for
	} // End for

	kal=(gesamt-2200*tage)/7000;

	if(gesamt>(2200*tage))
	{
		printf("Sie haben %.2f Kg zugenommen!\n", kal);
	} // End if
	else if(gesamt<(2200*tage))
	{
		printf("Sie haben %.2f Kg abgenommen!\n", kal);
	} // End if

	return 0;
} // End main
