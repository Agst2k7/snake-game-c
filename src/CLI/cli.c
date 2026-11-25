#include "./cli.h"

void printBoard(const struct Board *board){
    for(int i=0; i<BOARD_SIZE_X; ++i){
        printf("\n");
        for(int j=0; i<BOARD_SIZE_Y; ++j){
            if(board->places[i][j] == AIR){ printf("-"); }
            else if(board->places[i][j] == SNAKE_PART){ printf(GREEN"O"RESET); }
            else if(board->places[i][j] == APPLE){ printf(RED"+"RESET); }
        }
    }
}

