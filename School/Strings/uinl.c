// Autor: Luca Gaerisch
// Gross in Klein

#include <stdio.h>
#include <string.h>

int main(void)
{ // Start main
    char word[100];
    int len;

    printf("************************************\n");
    printf("******** Upper in Lowercase ********\n");
    printf("************************************\n");

    printf("Please enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    for(int i=0; i<len; i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            word[i]+=32;
        }
        else if(word[i]>='a' && word[i]<='z')
        {
            word[i]-=32;
        }
    }

    printf("The new word is: %s\n", word);

    return 0;
} // End main