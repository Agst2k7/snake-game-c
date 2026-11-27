#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE 10

enum Entities{
    AIR,
    SNAKE_PART,
    APPLE
};

struct Board {
    enum Entities places[BOARD_SIZE][BOARD_SIZE];
};

#endif