// Autor: Luca Gaerisch
// Calculator V2

#include <stdio.h>

int main()
{
    char rz;
    float num1, num2, result=0.0f;

    printf("CALCULATOR\t[+ - * /]\n");
    printf("----------------------------\n");

    scanf("%f %c %f", &num1, &rz, &num2);

    switch(rz)
    {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default: printf("Invalid operator");
    }

    printf("%g %c %g = %g", num1, rz, num2, result);

    return 0;
}