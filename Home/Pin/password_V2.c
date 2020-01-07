// Autor: Luca Gaerisch
// Password_V"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ // Start main

    int w = 0, try = 0, check = 0;
    char input[100], password[8] = "Password";

    do
    {
        if (try<=3)
        {
            printf("Please enter password: ");
            gets(input);
        }
        else
        {
            return 0;
        }

        check = strcmp(input,password);

        if (check == 0)
        {
            printf("Welcome!\n");
            w++;
        }
        else
        {
            printf("NO!\n");
            try++;
        }
        


        
    } while (w==0);
    

    return 0;
} // End main