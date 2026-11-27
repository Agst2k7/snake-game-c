#include "./cli.h"

void printBoard(const struct Board *board){
    for(int i=0; i<BOARD_SIZE; ++i){
        printf("\n");
        for(int j=0; j<BOARD_SIZE; ++j){
            if(j != 0 && j!=BOARD_SIZE){ printf(" "); }
            if(board->places[i][j] == AIR){ printf("-"); }
            else if(board->places[i][j] == SNAKE_PART){ printf(GREEN"O"RESET); }
            else if(board->places[i][j] == APPLE){ printf(RED"+"RESET); }
        }
    }
    printf("\n");
}

