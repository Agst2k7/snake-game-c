#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "src/structs/board.h"
#include "src/CLI/cli.h"
#include "./src/game/board_game.h"

int main(){

    struct Position init_pos = {0, 0};
    struct Board board = {AIR};
    struct Snake snake = {LEFT, init_pos, NULL, HEAD};

    snake.next = malloc(sizeof(struct Snake));
    snake.next->dir = LEFT;
    snake.next->pos.X = 1;
    snake.next->pos.Y = 0;
    snake.next->next = NULL;

    make_move(&board, &init_pos, SNAKE_PART);

    while(1){
       system("clear");
       update_snake_pos(&board, &snake);
       printBoard(&board);
       sleep(1);
       puts("step");
    }



    return 0;
}