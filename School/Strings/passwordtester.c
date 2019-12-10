// Autor: Luca Gaerisch
// Password Tester

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{ // Start main
    char pw[100];
    int len;
    bool uppercase=false,lowercase=false,number=false;

    printf("********************** Password Tester **********************\n");
    printf("Please enter a password to test the security: ");
    gets(pw);

    len = strlen(pw);

    for(int i=0; i<=len; i++)
    {
        if(pw[i]>='A' && pw[i]<='Z')
        {
            uppercase=true;
        }
        else if(pw[i]>='a' && pw[i]<='z')
        {
            lowercase=true;
        }
        else if(pw[i]>='0' && pw[i]<='9')
        {
            number=true;
        }
    }

    printf("\n");

    if(uppercase==true && lowercase==true && number==true && len>=8)
    {
        printf("Password is secure\n");
    }
    else
    {
        printf("Password isn't secure enough!\n");
        if(uppercase==false)
        {
            printf("Password has no uppercase letter!\n");
        }
        if(lowercase==false)
        {
            printf("Password has no lowercase letter!\n");
        }
        if(number==false)
        {
            printf("Password has no numbers!\n");
        }
        if(len<=8)
        {
            printf("Minimum length of password is 8! Current length: %i\n", len);
        }
    }

    return 0;
} // End main