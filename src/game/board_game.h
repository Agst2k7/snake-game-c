#ifndef BOARD_GAME_H
#define BOARD_GAME_H

#include <stdio.h>

#include "../structs/board.h"
#include "../structs/snake.h"
#include "../enums/position.h"
#include "../enums/direction.h"

void make_move(struct Board *board, const struct Position *pos, const enum Entities ent);

struct Position calc_new_snake_part_pos(const struct Snake *snake);

void update_snake_pos(struct Board *board, struct Snake *snake);

#endif