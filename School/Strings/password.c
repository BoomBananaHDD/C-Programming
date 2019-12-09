// Autor: Luca Gaerisch
// Password

#include <stdio.h>
#include <string.h>

int main(void)
{ // Start main
    char user[100];
    char pw[100];

    printf("Enter username: ");
    gets(user);
    printf("Enter password: ");
    gets(pw);

    if(strcmp(user,"Fi10")==0 && strcmp(pw,"topsecret")==0)
    {
        printf("Login successful\n");
    }
    else
    {
        printf("Wrong password or username\n");
    }
    
    return 0;
} // Start main