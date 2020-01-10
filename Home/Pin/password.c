// Autor: Luca Gaerisch
// Password

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{ // Start main
    char password[] = "password", input[100];
    int len = 0, pwlen = 0, try = 0;
    bool check = false;

    pwlen = strlen(password);

    for (;;)
    {
        if (try == -3)
        {
            return 0;
        }

        printf("Please enter password: ");
        gets(input);

        len = strlen(input);

        for (int i=0; i<len; i++)
        {
            if (input[i] == password[i] && len == pwlen)
            {
                check = true;
            }
        }

        if (check == true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
            try--;
        }
    }
    
    return 0;
} // End main