#ifndef FIGURE_H
#define FIGURE_H

#include "step.h"

class Figure
{
public:

	int side;

    virtual bool stroke(Step step, Figure* board[width][height]);

    bool stroke_h_w(Step step, Figure* board[width][height]);

    bool stroke_diag(Step step, Figure* board[width][height]);
};

#endif // FIGURE_H
