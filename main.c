#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "src/structs/board.h"
#include "src/CLI/cli.h"
#include "./src/game/board_game.h"

int main(){

    struct Board board = {AIR};
    struct Snake snake = {LEFT, {1, 1}, NULL, HEAD};


    printBoard(&board);

    while(1){
       system("clear");
       update_snake_pos(&board, &snake);
       printBoard(&board);
       sleep(1);
       puts("step");
    }



    return 0;
}