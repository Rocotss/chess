#include "pawn.h"

bool Pawn::stroke(Step step, Figure* board[width][height])
{
    bool ans=false;

    // первый ход(двойной)
    if((step.last_w==1 && board[step.last_w][step.last_h]->side==white &&
        board[step.last_w+1][step.last_h]==nullptr && board[step.last_w+2][step.last_h]==nullptr) ||
        (step.last_w==width-2 && board[step.last_w][step.last_h]->side==black &&
        board[step.last_w-1][step.last_h]==nullptr && board[step.last_w-2][step.last_h]==nullptr))
    {
        board[step.w][step.h]=board[step.last_w][step.last_h];
        board[step.last_w][step.last_h]=nullptr;
        ans=true;
    }

    //обычный ход
    if(step.h==step.last_h &&
            ((step.last_w==step.w-1 && board[step.last_w][step.last_h]->side==white) ||
            (step.last_w==step.w+1 && board[step.last_w][step.last_h]->side==black)) &&
            board[step.w][step.h]==nullptr)
    {
        board[step.w][step.h]=board[step.last_w][step.last_h];
        board[step.last_w][step.last_h]=nullptr;
        ans=true;
    }

    // рубит
    if(((step.last_w==step.w-1 && board[step.last_w][step.last_h]->side==white) ||
            (step.last_w==step.w+1 && board[step.last_w][step.last_h]->side==black)) &&
            (step.last_h==step.h-1 || step.last_h==step.h+1) &&
            (board[step.last_w][step.last_h]->side!=board[step.w][step.h]->side))
    {
            board[step.w][step.h]=board[step.last_w][step.last_h];
            board[step.last_w][step.last_h]=nullptr;
            ans=true;
    }

    return ans;
}

