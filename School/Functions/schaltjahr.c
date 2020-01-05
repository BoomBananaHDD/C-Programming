// Autor: Luca Gaerisch
// Schaltjahr

#include <stdio.h>
#include <stdlib.h>

void schaltjahr(int x);

int main(void)
{ // Start main
    int input;

    printf("Bitte geben Sie ein Datum ein: ");
    scanf("%i", &input);

    schaltjahr(input);

    system("pause");

    return 0;
} // End main

void schaltjahr(int x)
{
    if(x<1582 || x>1582)
    {
        if(x==0)
        {
            printf("Es handelt sich um ein Schaltjahr");
        }
    }
    else
    {
        printf("Es handelt sich um kein Schaltjahr");
    }
    
}