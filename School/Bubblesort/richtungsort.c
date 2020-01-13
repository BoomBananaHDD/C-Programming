// Autor: Luca Gaerisch
// richtungsort

#include <stdio.h>

int main(void)
{ // Start main
	float feld[10] = { 15,19.4,3,2.5,97,4,84.2,76,65,22.3 };
	float temp;
	int sortierung;

	do
	{	
		printf("Die Sortierung soll\nabsteigend (0)\naufsteigend (1)\nerfolgen: ");
		scanf("%i", &sortierung);
	}while (sortierung<0 || sortierung>1);

	if (sortierung == 1)
	{	
		for (int i=0; i<9; i++)
		{
			for(int j=0; j<9-i; j++)
			{
				if(feld[j] < feld[j+1])
				{
					temp=feld[j];
					feld[j]=feld[j+1];
					feld[j+1]=temp;
				}
			}
		}
	}
	else if(sortierung == 0)
	{
		for (int i=0; i<9; i++)
		{
			for(int j=0; j<9-i; j++)
			{
				if(feld[j] < feld[j+1])
				{
					temp=feld[j];
					feld[j]=feld[j+1];
					feld[j+1]=temp;
				}
			}
		}
	}

	for (int k=0; k<10; k++)
	{
		printf("%g\n", feld[k]);
	}

	return 0;
} // Start main
