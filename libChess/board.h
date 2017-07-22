#ifndef BOARD_H
#define BOARD_H

#include "step.h"
#include "figure.h"

class Board
{
private:
    Figure* board_p[width][height];

public:
    Board();

    ~Board();

    bool play(int last_w, int last_h, int w, int h);
};

#endif // BOARD_H
