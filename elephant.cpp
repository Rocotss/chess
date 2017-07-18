#include <math.h>
#include "elephant.h"

bool Elephant::stroke(Step step, Figure* board[height][width])
{
    bool ans=false;

     if(abs(step.h-step.last_h)==abs(step.w-step.last_w) &&
             ((board[step.h][step.w]==nullptr) ||
             (board[step.last_h][step.last_w]->side!=board[step.h][step.w]->side)))
     {
    	 ans = Figure::stroke_diag(step, board);
     }

     if(ans)
     {
         board[step.h][step.w]=board[step.last_h][step.last_w];
         board[step.last_h][step.last_w]=0;
     }

    return ans;
}
