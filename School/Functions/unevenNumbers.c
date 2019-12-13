// Autor: Luca Gaerisch
// 

#include <stdio.h>

int isUneven(int num);

int main(void)
{ // Start main
    int input, result;

    do
    {
        printf("Please enter a positive number: ");
        scanf("%i", &input);
    }while(input<0);

    result = isUneven(input);

    if(result==1)
    {
        printf("The number %i, is uneven!\n", input);
    }
    else
    {
        printf("The number %i, is even!\n", input);
    }

    return 0;
} // End main

int isUneven(int num)
{ // Start isUnven
    if((num%2)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
} // End isUneven
