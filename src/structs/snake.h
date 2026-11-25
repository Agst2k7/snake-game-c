#ifndef SNAKE_H
#define SNAKE_H

#include "../enums/direction.h"
#include "../enums/position.h"

enum body_part {
    HEAD,
    MIDDLE,
    END
};

struct Snake {
    enum Direction dir;
    struct Position pos;
    struct Snake* next;
    enum body_part part;
};

#endif