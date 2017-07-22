#include <math.h>
#include "elephant.h"

bool Elephant::stroke(Step step, Figure* board[width][height])
{
    bool ans=false;

     if(abs(step.w-step.last_w)==abs(step.h-step.last_h) &&
             ((board[step.w][step.h]==nullptr) ||
             (board[step.last_w][step.last_h]->side!=board[step.w][step.h]->side)))
     {
    	 ans = Figure::stroke_diag(step, board);
     }

     if(ans)
     {
         board[step.w][step.h]=board[step.last_w][step.last_h];
         board[step.last_w][step.last_h]=nullptr;
     }

    return ans;
}
