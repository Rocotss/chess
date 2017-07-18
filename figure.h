#ifndef FIGURE_H
#define FIGURE_H

#include "step.h"

class Figure
{
public:

	int side;

    virtual bool stroke(Step step, Figure* board[height][width]);

    bool stroke_h_w(Step step, Figure* board[height][width]);

    bool stroke_diag(Step step, Figure* board[height][width]);
};

#endif // FIGURE_H
