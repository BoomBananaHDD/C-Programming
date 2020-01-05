#ifndef RPS_H
#define RPS_H

// Player an Bot choices
#define   ROCK    0
#define   PAPER   1
#define   SCISSOR 2
#define   QUIT    3
// Game results
#define   BOT_WON       4
#define   PLAYER_WON    5
#define   DRAW          6

// Function Declaration
int get_player_choice();
int get_bot_choice();

#endif