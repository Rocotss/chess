#include <math.h>
#include "queen.h"

bool Queen::stroke(Step step, Figure* board[height][width])
{
    bool ans= false;

    // по диагонали
    if(abs(step.h-step.last_h)==abs(step.w-step.last_w) &&
            ((board[step.h][step.w]==nullptr) ||
            (board[step.last_h][step.last_w]->side!=board[step.h][step.w]->side)))
    {
        ans = Figure::stroke_diag(step, board);
    }
    else
    { // по горизонтали
    	if((board[step.h][step.w]==nullptr) ||
            (board[step.last_h][step.last_w]->side!=board[step.h][step.w]->side))
    	{
    		ans = Figure::stroke_h_w(step, board);
    	}
    }

    if(ans)
    {
        board[step.h][step.w]=board[step.last_h][step.last_w];
        board[step.last_h][step.last_w]=nullptr;
    }

    return ans;
}
