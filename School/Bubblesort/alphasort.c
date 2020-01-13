// Autor: Luca Gaerisch
// Alphasort

#include <stdio.h>
#include <string.h>

void bubblesort(char array[], char len);

int main(void)
{ // Start main
	// Variablendeklaration
	char satz[100];

	printf("Satz: ");
	fgets(satz,100,stdin);

	char len = sizeof satz / sizeof satz[0];

	bubblesort(satz, len);
	
	for(int i=0; i<20; i++)
	{
		printf("%c", satz[i]);
	}

	return 0;
} // End main

void bubblesort(char array[], char len)
{
	char temp;

	for (int i=0; i<len; i++)
	{
		for (int j=0; j<len-i; j++)
		{
			if(array[j] < array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
