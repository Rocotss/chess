#ifndef HORSE_H
#define HORSE_H

#include "step.h"
#include "figure.h"

class Horse:public Figure
{
public:
    bool stroke(Step step, Figure* board[height][width]);
};

#endif // HORSE_H
