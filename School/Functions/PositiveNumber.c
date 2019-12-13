// Autor: Luca Gaerisch
// PositiveNumber

#include <stdio.h>

int positiveNumber(int num);

int main(void)
{ // Start main
    int input,res;

    printf("Please enter a number: ");
    scanf("%i", &input);
    res = positiveNumber(input);
    if(res==-1)
    {
        printf("The number %i, is negativ!\n", input);
    }
    else if(res==0)
    {
        printf("The number is 0");
    }
    else
    {
        printf("The number %i, is positiv!", input);
    }

    return 0;
} // End main

int positiveNumber(int num)
{ // Start poitiveNumber
    if(num<0)
    {
        return -1;
    }
    else if(num==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
} // End positiveNumber