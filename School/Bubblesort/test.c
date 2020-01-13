// Autor: Luca Gaerisch
// Bubblesort

#include <stdio.h>

int main(void)
{ // Start main
	// Variablendeklaration
	int feld[] = { 4,7,6,0,2,1,8,3,5,9 }, temp,x=0,n;

	for(int j=0; j<9; j++)
	{
		for(int i=0; i<9-j; i++)
		{
			if(feld[i] > feld[i+1])
			{
				temp = feld[i];
				feld[i]=feld[i+1];
				feld[i+1]=temp;
				x++;
			} // End if
		} // End for
	} // End for

	for(int k=0; k<10; k++)
	{
		printf("%i\n", feld[k]);
	}
	printf("%i", x);

	return 0;
} // End main
