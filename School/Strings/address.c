// Autopr: Luca Gaerisch
// address

#include <stdio.h>
#include <string.h>

int main(void)
{// Start main
    char name[100];
    char plz[100];
    char ort[100];
    char street[100];
    char all[500] = {0};

    printf("Full Name: ");
    gets(name);
    strcat(all,name);
    strcat(all," ");

    printf("PLZ: ");
    gets(plz);
    strcat(all,plz);
    strcat(all," ");

    printf("Ort: ");
    gets(ort);
    strcat(all,ort);
    strcat(all," ");

    printf("Street and Housenumber: ");
    gets(street);
    strcat(all,street);

    printf("%s\n", all);

    return 0;
} // End main