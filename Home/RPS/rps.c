// Autor: Luca Gaerisch
// Rock, Paper, Scissor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "rps.h"

int main(void)
{ // Start main
    int player, bot, res;

    srand(time(NULL));

    for (;;)
    {
        player = get_player_choice();
        if (player == QUIT)
        {
            return 0;
        }
        bot = get_bot_choice();
        printf("%i%i", player, bot);
    }
    return 0;
} // End main

int get_player_choice()
{
    char input[8];

    printf("\nPlease choose rock, paper, scissor or quit: ");
    gets(input);

    if (strcmp(input, "rock") == 0)
    {
        return ROCK;
    }
    else if (strcmp(input, "paper") == 0)
    {
        return PAPER;
    }
    else if (strcmp(input, "scissor") == 0)
    {
        return SCISSOR;
    }
    else if (strcmp(input, "quit") == 0)
    {
        return QUIT;
    }
    return 0;
}
int get_bot_choice()
{
    return rand() % 3;
}