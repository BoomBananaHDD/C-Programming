// Autor: Luca Gaerisch
// 0 to 99

#include <stdio.h>

int main(void)
{ // Start main
	int i,j;

	for(i=0; i<=9; i++)
	{
		for(j=0; j<=9; j++)
		{
			printf("%i%i\n", i, j);
		}
	}
	return 0;
} // End main
