// Autor: Luca Gaerisch
// Palindromtest

#include <stdio.h>
#include <string.h>

int main(void)
{ // Start main
    char word[100],word1[100];
    int len,k;

    printf("Please enter a word: ");
    gets(word);

    len = strlen(word);
    k=len;

    for(int i=0; i<len; i++)
    {
        k--;
        word1[i]=word[k];
        if(word1[i]>='A' && word1[i]<='Z')
        {
            word1[i]+=32;
        }
    }

    if(strcmp(word,word1)==0)
    {
        printf("The word \"%s\" is a palindrome!\n", word);
    }
    else
    {
        printf("The word \"%s\" is a palindrome!\n", word);
    }
    
    return 0;
} // End main