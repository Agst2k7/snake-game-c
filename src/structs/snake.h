#ifndef SNAKE_H
#define SNAKE_H

enum body_part {
    HEAD,
    MIDDLE,
    END
}

struct Snake {
    enum Direction dir;
    struct Position pos;
    struct Snake* next;
    enum body_part;
};

#endif