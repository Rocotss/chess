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

    for(int j=0; j<height; j++)
    {
        if(j==height-2)
        {
            side=black;
        }

        if(j==0 || j==width-1)
        {
            board_p[0][j]=new Rook;
            board_p[0][j]->side=side;
            board_p[width-1][j]=new Rook;
            board_p[width-1][j]->side=side;
            board_p[1][j]=new Horse;
            board_p[1][j]->side=side;
            board_p[width-2][j]=new Horse;
            board_p[width-2][j]->side=side;
            board_p[2][j]=new Elephant;
            board_p[2][j]->side=side;
            board_p[width-3][j]=new Elephant;
            board_p[width-3][j]->side=side;
            board_p[3][j]=new Queen;
            board_p[3][j]->side=side;
            board_p[4][j]=new King;
            board_p[4][j]->side=side;
        }
        else
        {
            for(int i=0; i<width; i++)
            {
                if(j==1 || j==height-2)
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

bool Board::play(int last_w, int last_h, int w, int h)
{
    bool ans=false;

    Step step={last_w,last_h,w,h};
    if(board_p[last_w][last_h]!=nullptr && (board_p[w][h]==nullptr || board_p[last_w][last_h]->side!=board_p[w][h]->side))
    {
        cout<<board_p[last_w][last_h]<<endl;
        ans=board_p[step.last_w][step.last_h]->stroke(step,board_p);
    }

    return ans;
}
