// Autor: Luca Gaerisch
// Pinabfrage

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{ // Start main
    // Variablendeklaration
    int laenge,abfrage=0,versuche=0;
    bool zugriff=false;

    printf("Wie viele Stellen soll der Pin besitzen? ");
    scanf("%i", &laenge);
    int pin[laenge],test[laenge];

    // Eingabe des Pins
    for (int i=0; i<laenge; i++)
    {
        printf("Bitte geben Sie die %i. Ziffer an: ", i+1);
        scanf("%i", &pin[i]);
    }

    system("clear");

    while (zugriff==false)
    {
        printf("\n\tPINABFRAGE\t%i. Versuch\n", versuche+1);
        printf("============================================\n");

        // Abfrage des Pins
        for (int i=0; i<laenge; i++)
        {
            printf("Bitte geben Sie die %i. Ziffer an: ", i+1);
            scanf("%i", &test[i]);
        }

        // Prüfung des Pins
        for (int i=0; i<laenge; i++)
        {
            if(pin[i] == test[i])
            {
                abfrage++;
            }
        }

        if (abfrage==laenge)
        {
            zugriff=true;
            printf("Zugriff gewährt!\n");
        }
        else
        {
            versuche++;
            printf("Zugriff verweigert!\n");
        }

        if(versuche==3)
        {
            return 0;
        }
    }
    
    return 0;
} // End main
