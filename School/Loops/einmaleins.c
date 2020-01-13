// Autor: Luca Gärisch
// Einmaleins

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int i,j,res;

	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%i * %i = %i\n", j, i, res=j*i);
		} // End for
	} // End for
	return 0;
} // End main

