#include "./board_game.h"

void make_move(struct Board *board, const struct Position *pos, const enum Entities ent){
    board->places[pos->Y][pos->X] = ent;
}

struct Position calc_new_snake_part_pos(const struct Snake *snake){
    if(snake->dir == UP){
        if((snake->pos.Y-1)<0){return (struct Position){snake->pos.X, BOARD_SIZE-1};}
        return (struct Position){snake->pos.X, snake->pos.Y-1};
    }
    else if(snake->dir == DOWN){
        if((snake->pos.Y+1) >= BOARD_SIZE){return (struct Position){snake->pos.X, 0};}
        return (struct Position){snake->pos.X, snake->pos.Y+1};
    }
    else if(snake->dir == LEFT){
        if((snake->pos.X-1) < 0){return (struct Position){BOARD_SIZE-1, snake->pos.Y};}
        return (struct Position){snake->pos.X-1, snake->pos.Y};
    }
    else{
        if((snake->pos.X+1) >= BOARD_SIZE){return (struct Position){0, snake->pos.Y};}
        return (struct Position){snake->pos.X+1, snake->pos.Y};  
    }
}

void update_snake_pos(struct Board *board, struct Snake *snake){
    struct Snake *snk_ptr = snake;
    struct Position last_pos = snk_ptr->pos;
    
    make_move(board, &snk_ptr->pos, AIR);
    snk_ptr->pos = calc_new_snake_part_pos(snk_ptr);
    make_move(board, &snk_ptr->pos, SNAKE_PART);
    while(snk_ptr != NULL){
        snk_ptr = snk_ptr->next;
        snk_ptr->pos = last_pos;
        make_move(board, &snk_ptr->pos, AIR);
        make_move(board, &snk_ptr->pos, SNAKE_PART);
        snk_ptr = snk_ptr->next;
    }
}
