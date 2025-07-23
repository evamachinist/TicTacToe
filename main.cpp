#include <iostream>

#include "tictactoe.h"

int main(void){

    int board[][SIZE] = {
        {1, 0, 0},
        {0, 2, 0},
        {0, 0, 3}

    };

    printBoard(board, SIZE);
    return 0;

}
