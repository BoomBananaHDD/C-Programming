// Autor: Luca Gaerisch
// Diskriminante

#include <stdio.h>
#include <math.h>

int x1(int a, int b, int d);
int x2(int a, int b, int d);

int main(void)
{ // Start main
    int a,b,c,d,y;

    printf("Bitte geben Sie punkt A an: ");
    scanf("%i", &a);
    printf("Bitte geben Sie punkt B an: ");
    scanf("%i", &b);
    printf("Bitte geben Sie punkt C an: ");
    scanf("%i", &c);

    d = ((b * b) - 4 * a * c); // Diskriminante

    printf("X\t|\tY\n");
    for (int i = -5; i <= 5; i++)
    {
        y = (a * (i * i) + b * i + c);
        printf("%i\t|\t%i\n", i, y);   
    }

    if ( d < 0)
    {
        printf("Es gibt keine reellen Loesungen für die Nullstelle!\n");
    }
    else if ( d == 0)
    {
        printf("Die Nullstelle ist an (%i/0).\n", x1(a,b,d));
    }
    else if (d > 0)
    {
        printf("Die 1. Nullstelle ist an (%i/0).\n", x1(a,b,d));
        printf("Die 2. Nullstelle ist an (%i/0).\n", x2(a,b,d));
    }
    
    return 0;
} // End main

int x1(int a, int b, int d)
{
    return ((-1 * b) + sqrt(d)) / (2 * a);
}
int x2(int a, int b, int d)
{
    return ((-1 * b) - sqrt(d)) / (2 * a);
}