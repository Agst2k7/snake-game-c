#ifndef BOARD_GAME_H
#define BOARD_GAME_H

#include "../structs/board.h"
#include "../structs/snake.h"

void update_snake_pos(struct Board *board, const struct Snake *snake);

#endif