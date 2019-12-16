// Autor: Luca Gaerisch
// Diskriminante

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float diskriminante(float x, float y, float z);
float x1(float x, float y, float z);
float x2(float x, float y, float z);


int main(void)
{ // Start main
    float a,b,c,dis,y;

    printf("Bitte geben Sie den punkt a an: ");
    scanf("%f", &a);
    printf("Bitte geben Sie den punkt b an: ");
    scanf("%f", &b);
    printf("Bitte geben Sie den punkt c an: ");
    scanf("%f", &c);

    printf("X\t|\tY\n");
    for(int x=-5; x<=5; x++)
    {
        y=(a * (x * x) + (b * x) + c);
        printf("%i\t|\t%g\n", x, y);
    }

    dis = diskriminante(a,b,c);

    if(dis==0)
    {
        printf("Die Nullstelle ist: ( %g | 0 )\n", x1(a,b,dis));
        
    }
    else if(dis<0)
    {
        printf("Es gibt keine reelle loesung fuer die Nullstelle!\n");
    }
    else
    {
        printf("Die 1. Nullstelle ist: ( %g | 0 )\n", x1(a,b,dis));
        printf("Die 2. Nullstelle ist: ( %g | 0 )\n", x2(a,b,dis));
    }

    system("pause");

    return 0;
} // End main

float diskriminante(float x, float y, float z)
{
    return (y * y) - 4 * x * z;
}

float x1(float x, float y, float z)
{
    return ((-1 * y) + sqrt(z)) / (2 * x); // sqrt == Wurzel aus
}

float x2(float x, float y, float z)
{
    return ((-1 * y) - sqrt(z)) / (2 * x); // sqrt == Wurzel aus
}