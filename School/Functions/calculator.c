// Autor: Luca Gaerisch
// Calculator

#include <stdio.h>
#include <stdlib.h>

float addition();
float subtraktion();
float multi();
float division();

int main(void)
{ // Start main
    int input;

    system("@cls||clear");
    printf("========== Calculator ==========\n");
    printf("1) Addition\t2) Subtraktion\n");
    printf("3) Multi\t4) Division\n");
    printf("5) Quadrat\t6) Potenz\n");
    printf("7) Quersumme\t8) Exit\n");
    printf("================================\n");

    do
    {
        printf("Selection: ");
        scanf("%i", &input);
    }while(input<=0 || input>=9);

    switch(input)
    {
        case 1: addition(); break;
        case 2: subtraktion(); break;
        case 3: multi(); break;
        case 4: division(); break;
        case 5: break;
        case 6: break;
        case 7: break;
        case 8: return 0; break;
    }
    return 0;
} // End main

float addition()
{
    float num1,num2,res;

    system("@cls||clear");
    printf("========== ADDITION ==========\n");
    printf("Erste zahl: ");
    scanf("%f", &num1);
    printf("Zweite Zahl: ");
    scanf("%f", &num2);
    res = num1 + num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float subtraktion()
{
    float num1,num2,res;

    system("@cls||clear");
    printf("========== Subtraktion ==========\n");
    printf("Erste zahl: ");
    scanf("%f", &num1);
    printf("Zweite Zahl: ");
    scanf("%f", &num2);
    res = num1 - num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float multi()
{
    float num1,num2,res;

    system("@cls||clear");
    printf("========== MULTI ==========\n");
    printf("Erste zahl: ");
    scanf("%f", &num1);
    printf("Zweite Zahl: ");
    scanf("%f", &num2);
    res = num1 * num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}

float division()
{
    float num1,num2,res;

    system("@cls||clear");
    printf("========== Division ==========\n");
    printf("Erste zahl: ");
    scanf("%f", &num1);
    printf("Zweite Zahl: ");
    scanf("%f", &num2);
    res = num1 / num2;
    printf("Result: %g\n", res);
    system("pause");
    main();
}