#ifndef GAME_H_
#define GAME_H_

#include "Parser.h"
#include "Solver.h"
#include "GUI.h"

#define FALSE 0
#define TRUE  1
/*
 * Function that receives a struct containing the board game and its dimensions
 * and prints the a line of "-" that frames the board
 */

void print_frame(Board *board);

/*
 * Function that receives a Command structure, checks if its valid
 * and handles the different commands types according to the instructions
 */

void turn(struct Command command, Board *board);

/*
 * Function that receives a Board structure and returns 1 if the player either asked to restart
 * or asked to exit, and 0 if the current games needs to continue
 */

int stop_game(Board *board);

/*
 * Function that manages playing the game
 */

void play();

/*
 * Function that receives a stuct Command and struct Board and performs
 * the "set" action on the current board game
 */

void play_set(struct Command command, Board *board);

/*
 * Function that receives a stuct Command and struct Board and performs
 * the "hint" action on the current board game
 */

void play_hint(struct Command command, Board *board);

/*
 * Function that receives the number of fixed cells from the player
 */

int get_fixed();

/*
 * Function that receives a board structure and prints the current board according to rules
 */

void print_board(Board *board);

#endif /* GAME_H_ */
