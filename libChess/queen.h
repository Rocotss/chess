#ifndef QUEEN_H
#define QUEEN_H

#include "step.h"
#include "figure.h"

class Queen:public Figure
{
public:
    bool stroke(Step step, Figure* board[width][height]);
};


#endif // QUEEN_H
