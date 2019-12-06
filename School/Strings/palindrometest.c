// Autor: Luca Gaerisch
// Palindrometest

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

    for(int i=0; i<len; i++) // uppercase letters are converted to lowercase letters
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            word[i]+=32;
        }
    }


    for(int i=0; i<len; i++) // array are stored backwards in another array
    {
        k--;
        word1[i]=word[k];
    }

    printf("%s,%s", word1, word);

    if(strcmp(word,word1)==0) // compare both strings
    {
        printf("The word \"%s\" is a palindrome!\n", word);
    }
    else
    {
        printf("The word \"%s\" is NOT a palindrome!\n", word);
    }
    
    return 0;
} // End main