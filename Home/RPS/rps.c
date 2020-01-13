// Autor: Luca Gaerisch
// Rock, Paper, Scissor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "rps.h"

int main(void)
{
    int player, bot, result;

    srand(time(NULL));
    for (;;) // infinite loop
    {
        player = player_choice();
        if (player == QUIT) // Quitting the Game
        {
            return 0;
        }

        bot = bot_choice();
        result = get_result(player, bot);
        print_result(result);
    }
    return 0;
}

int player_choice()
{
    char input[8];

    printf("\nPlease choose rock, paper, scissor or quit: ");
    gets(input);

    // Convert upper in lower case
    for(int i=0; i<strlen(input); i++)
    {
        if(input[i]>='A' && input[i]<='Z')
        {
            input[i]+=32;
        }
    }

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
int bot_choice()
{ // Random value that choose "R" "P" or "S"
    return rand() % 3;
}

int get_result(int player, int bot)
{
    int result = 0;
    if(player == ROCK && bot == PAPER || player == PAPER && bot == SCISSOR || player == SCISSOR && bot == ROCK)
    { // BOT WIN CASES
        result = BOT_WON;
    }
    else if(player == ROCK && bot == SCISSOR || player == PAPER && bot == ROCK || player == SCISSOR && bot == PAPER)
    { // PLAYER WIN CASES
        result = PLAYER_WON;
    }
    else if(player == ROCK && bot == ROCK || player == PAPER && bot == PAPER || player == SCISSOR && bot == SCISSOR)
    { // DRAW CASES
        result = DRAW;
    }
    return result;
}

void print_result(int result)
{
    if(result == BOT_WON)
    {
        printf("Bot won this round!\n");
    }
    else if(result == PLAYER_WON)
    {
        printf("You won this round!\n");
    }
    else if (result == DRAW)
    {
        printf("It's a draw!\n");
    }
}