#ifndef KING_H
#define KING_H

#include "step.h"
#include "figure.h"

class King : public Figure
{
public:
    bool stroke(Step step, Figure* board[height][width]);
};

#endif // KING_H
