// Autor: Luca Gaerisch
// Calculator

#include <stdio.h>
#include <stdlib.h>

void clear();
float addition();
float subtraction();

int main(void)
{ // Start main
    int choice;

    clear();
    printf("========== CALCULATOR ==========\n");
    printf("1) Addition\t2) Subtraction\n3) Mutli\t4) Division\n5) Exit\n");

    do
    {
        printf("================================\n");
        printf("Selection: ");
        scanf("%i", &choice);
    } while (choice<=0 || choice>=6);

    switch(choice)
    {
        case 1: addition(); break;
        case 2: subtraction(); break;
        case 5: return 0; break;
    }

    return 0;
} // End main

void clear() // Clearing the consol
{
    system("@cls||clear");
}

float addition()
{
    float num1,num2,res;

    clear();
    printf("========== ADDITION ==========\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    res = num1 + num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float subtraction()
{
    float num1,num2,res;

    clear();
    printf("========== SUBTRACTION ==========\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    res = num1 - num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}