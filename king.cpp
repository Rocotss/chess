#include <math.h>
#include "king.h"

bool King::stroke(Step step, Figure* board[height][width])
{
    bool ans=false;

    if(abs(step.h-step.last_h)<2 && abs(step.w-step.last_w)<2 &&
            ((board[step.h][step.w]==nullptr) ||
            (board[step.last_h][step.last_w]->side!=board[step.h][step.w]->side)))
    {
        board[step.h][step.w]=board[step.last_h][step.last_w];
        board[step.last_h][step.last_w]=nullptr;
        ans=true;
    }

    return ans;
}
