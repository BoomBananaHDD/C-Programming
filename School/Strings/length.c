// Autor: Luca Gaerisch
// String length

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{ // Start main
    char word[100];
    int len;

    printf("Please write a word: ");
    gets(word);

    len = strlen(word);

    printf("The String has a length of %i\n", len);
    //puts(word); || To print the whole string with spaces

    return 0;
} // End main