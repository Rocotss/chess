#include <iostream>
#include <math.h>
#include "board.h"
#include "figure.h"
#include "pawn.h"
#include "rook.h"
#include "horse.h"
#include "elephant.h"
#include "queen.h"
#include "king.h"

using namespace std;

Board::Board()
{
    int side=white;

    for(int i=0; i<height; i++)
    {
        if(i==height-2)
        {
            side=black;
        }

        if(i==0 || i==height-1)
        {
            board_p[i][0]=new Rook;
            board_p[i][0]->side=side;
            board_p[i][width-1]=new Rook;
            board_p[i][width-1]->side=side;
            board_p[i][1]=new Horse;
            board_p[i][1]->side=side;
            board_p[i][width-2]=new Horse;
            board_p[i][width-2]->side=side;
            board_p[i][2]=new Elephant;
            board_p[i][2]->side=side;
            board_p[i][width-3]=new Elephant;
            board_p[i][width-3]->side=side;
            board_p[i][3]=new Queen;
            board_p[i][3]->side=side;
            board_p[i][4]=new King;
            board_p[i][4]->side=side;
        }
        else
        {
            for(int j=0; j<width; j++)
            {
                if(i==1 || i==height-2)
                {
                    board_p[i][j]=new Pawn;
                    board_p[i][j]->side=side;
                }
                else
                {
                    board_p[i][j]=nullptr;
                }
            }
        }
    }
}

bool Board::play(int last_h, int last_w, int h, int w)
{
    bool ans=false;

    Step step={last_h,last_w,h,w};
    if(board_p[h][w]!=nullptr)
    {
        ans=board_p[step.last_h][step.last_w]->stroke(step,board_p);
    }

    return ans;
}
