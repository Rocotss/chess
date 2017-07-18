#ifndef PAWN_H
#define PAWN_H

#include "step.h"
#include "figure.h"

class Pawn:public Figure
{
public:
    bool stroke(Step step, Figure* board[width][height]);
};

#endif // PAWN_H
