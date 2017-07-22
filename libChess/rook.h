#ifndef ROOK_H
#define ROOK_H

#include "step.h"
#include "figure.h"

class Rook:public Figure
{
public:
    bool stroke(Step step, Figure* board[width][height]);
};

#endif // ROOK_H
