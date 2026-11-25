#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE_X 10
#define BOARD_SIZE_Y 10

enum Entities{
    SNAKE_PART,
    APPLE,
    AIR
};

struct Board {
    enum Entities places[BOARD_SIZE_X][BOARD_SIZE_Y];
};

#endif