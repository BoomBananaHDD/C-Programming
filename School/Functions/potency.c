// Autor: Luca Gaerisch
// potency

#include <stdio.h>

int potency(int num1, int num2);

int main(void)
{ // Start main
    int input1, input2, result;

    printf("Potentiating number: ");
    scanf("%i", &input1);
    printf("Potency: ");
    scanf("%i", &input2);

    result = potency(input1, input2);

    printf("Result: %i\n", result);

    return 0;
} // End main

int potency(int num1, int num2)
{ // Start potency
    for(int i=1; i<num2; i++)
    {
        num1=num1*num2;
    }
    return num1;
} // End potency