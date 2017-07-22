#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "step.h"
#include "figure.h"

class Elephant:public Figure
{
public:
    bool stroke(Step step, Figure* board[width][height]);
};

#endif // ELEPHANT_H
