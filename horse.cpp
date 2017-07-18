#include <math.h>
#include "horse.h"

bool Horse::stroke(Step step, Figure* board[width][height])
{
    bool ans=false;

    if(((abs(step.w-step.last_w)==2 && abs(step.h-step.last_h)==1) ||
            (abs(step.w-step.last_w)==1 && abs(step.h-step.last_h)==2)) &&
            ((board[step.w][step.h]==nullptr) ||
            (board[step.last_w][step.last_h]->side!=board[step.w][step.h]->side)))
    {
        board[step.w][step.h]=board[step.last_w][step.last_h];
        board[step.last_w][step.last_h]=nullptr;
        ans=true;
    }

    return ans;
}
