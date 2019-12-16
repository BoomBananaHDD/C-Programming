// Autor: Luca Gaerisch
// Calculator

#include <stdio.h>
#include <stdlib.h>

void clear();
float addition();
float subtraction();
float multi();
float division();
float quadrat();
float potenz();
float quer();

int main(void)
{ // Start main
    int choice;

    clear();
    printf("========== CALCULATOR ==========\n");
    printf("1) Addition\t2) Subtraction\n3) Mutli\t4) Division\n5) Quadrat\t6) Potenz\n7) Queer\t8) Exit\n");

    do
    {
        printf("================================\n");
        printf("Selection: ");
        scanf("%i", &choice);
    } while (choice<=0 || choice>=9);

    switch(choice)
    {
        case 1: addition(); break;
        case 2: subtraction(); break;
        case 3: multi(); break;
        case 4: division(); break;
        case 5: quadrat(); break;
        case 6: potenz(); break;
        case 7: quer(); break;
        case 8: return 0; break;
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

float multi()
{
    float num1,num2,res;

    clear();
    printf("========== MULTI ==========\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    res = num1 * num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float division()
{
    float num1,num2,res;

    clear();
    printf("========== DIVISION ==========\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);
    res = num1 / num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float quadrat()
{
    float num1,num2,res;

    clear();
    printf("========== QUADRAT ==========\n");
    printf("Number: ");
    scanf("%f", &num1);
    res = num1*num1;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float potenz()
{
    float num1,num2,res;

    clear();
    printf("========== POTENZ ==========\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Second number: ");
    scanf("%f", &num2);

    for(int i=1; i<num2; i++)
    {
        res=num1*num2;
    }

    printf("Result: %g\n", res);
    system("pause");
    main();
}

float quer()
{
    float num1,num2,res;

    clear();
    printf("========== QUER ==========\n");
    printf("First number: ");
    scanf("%f", &num1);
    printf("Result: %g\n", res);
    system("pause");
    main();
}