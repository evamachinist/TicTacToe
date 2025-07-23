#include <iostream>

#include "tictactoe.h"

void printBoard(int board[][SIZE], int size)
{
    char element {};

    for(int i = 0; i < size; i++)
    {
        for(int y = 0; y < size; y++)
        {
            if(board[i][y] == 0)
            {
                element = ' ';
            }
            else if(board[i][y] == 1)
            {
                element = 'X';
            }
            else
            {
                element = 'O';
            }

            std::cout << element << ' ';

            if(y < size - 1)
            {
                std::cout << "| ";
            }

        }
        std::cout << std::endl;
        if(i < size - 1)
        {
            std::cout << "- - - - -" << std::endl;
        }
    }
}

