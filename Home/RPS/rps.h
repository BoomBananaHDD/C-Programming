#ifndef RPS_H
#define RPS_H

// Player and Bot choices
#define   ROCK    0
#define   PAPER   1
#define   SCISSOR 2
#define   QUIT    3

// Game results
#define   BOT_WON       4
#define   PLAYER_WON    5
#define   DRAW          6

// Function Declaration
int player_choice();
int bot_choice();
int get_result(int player, int bot);
void print_result(int result);

#endif