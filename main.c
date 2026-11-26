#include "src/structs/board.h"
#include "src/CLI/cli.h"

int main(){

    struct Board board = {AIR};

    board.places[0][0] = AIR;
    board.places[1][1] = SNAKE_PART;
    board.places[3][3] = APPLE;

    printBoard(&board);

    return 0;
}