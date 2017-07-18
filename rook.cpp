#include "rook.h"

bool Rook::stroke(Step step, Figure* board[height][width])
{
    bool ans=false;

    if(board[step.h][step.w]==nullptr ||
    		board[step.last_h][step.last_w]->side!=board[step.h][step.w]->side)
    {
        ans=Figure::stroke_h_w(step, board);
    }

    if(ans)
    {
        board[step.h][step.w]=board[step.last_h][step.last_w];
        board[step.last_h][step.last_w]=nullptr;
    }

    return ans;
}
