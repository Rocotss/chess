#include "rook.h"

bool Rook::stroke(Step step, Figure* board[width][height])
{
    bool ans=false;

    if(board[step.w][step.h]==nullptr ||
            board[step.last_w][step.last_h]->side!=board[step.w][step.h]->side)
    {
        ans=Figure::stroke_h_w(step, board);
    }

    if(ans)
    {
        board[step.w][step.h]=board[step.last_w][step.last_h];
        board[step.last_w][step.last_h]=nullptr;
    }

    return ans;
}
