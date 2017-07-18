#include "pawn.h"

bool Pawn::stroke(Step step, Figure* board[height][width])
{
    bool ans=false;
    // первый ход(двойной)
    if((step.last_h==1 && board[step.last_h][step.last_w]->side==white &&
        board[step.last_h+1][step.last_w]==nullptr && board[step.last_h+2][step.last_w]==nullptr) ||
        (step.last_h==height-2 && board[step.last_h][step.last_w]->side==black &&
        board[step.last_h-1][step.last_w]==nullptr && board[step.last_h-2][step.last_w]==nullptr))
    {
        board[step.h][step.w]=board[step.last_h][step.last_w];
        board[step.last_h][step.last_w]=nullptr;
        ans=true;
    }

    //обычный ход
    if(step.w==step.last_w &&
    		((step.last_h==step.h-1 && board[step.last_h][step.last_w]->side==white) ||
            (step.last_h==step.h+1 && board[step.last_h][step.last_w]->side==black)) &&
            board[step.h][step.w]==nullptr)
    {
        board[step.h][step.w]=board[step.last_h][step.last_w];
        board[step.last_h][step.last_w]=nullptr;
        ans=true;
    }

    // рубит
    if(((step.last_h==step.h-1 && board[step.last_h][step.last_w]->side==white) ||
            (step.last_h==step.h+1 && board[step.last_h][step.last_w]->side==black)) &&
            (step.last_w==step.w-1 || step.last_w==step.w+1) &&
            (board[step.last_h][step.last_w]->side!=board[step.h][step.w]->side))
    {
            board[step.h][step.w]=board[step.last_h][step.last_w];
            board[step.last_h][step.last_w]=nullptr;
            ans=true;
    }

    return ans;
}

